
/* sweep */

int Snd_ParseWaveChunks(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  int local_8;
  int local_4;
  
  uVar6 = 0;
  local_8 = 0;
  local_c = 0;
  iVar3 = Fs_Open(param_1);
  if (-1 < iVar3) {
    iVar3 = Fs_Seek(0,0);
    if ((iVar3 != -1) && (iVar3 = Fs_Read(&param_1,4), iVar3 != -1)) {
      if ((param_1 == 0x46464952) || (param_1 == 0x66666972)) {
        iVar3 = Fs_Seek(4,1);
        if (((iVar3 != -1) && (iVar3 = Fs_Read(&param_1,4), iVar3 != -1)) &&
           ((param_1 == 0x45564157 || (param_1 == 0x65766177)))) {
          bVar1 = true;
          bVar2 = true;
          do {
            while( true ) {
              while( true ) {
                if ((!bVar1) && (!bVar2)) {
                  uVar5 = local_8 << 8;
                  Fs_Close();
                  return uVar5 / uVar6 << 8;
                }
                iVar3 = Fs_Read(&local_4,4);
                if ((iVar3 == -1) || (iVar3 = Fs_Read(&local_c,4), iVar3 == -1)) goto LAB_004a993f;
                if ((local_4 != 0x20746d66) && (local_4 != 0x20544d46)) break;
                iVar3 = mem_GetMemEx_probably_alloc(local_c,4,0,s_WaveFormatChunk_0055e7ec);
                if (iVar3 == 0) goto LAB_004a993f;
                iVar4 = Fs_Read(iVar3,local_c);
                if (iVar4 == -1) {
                  OurFreeMem(iVar3);
                  goto LAB_004a993f;
                }
                uVar6 = *(uint *)(iVar3 + 8);
                OurFreeMem(iVar3);
                bVar2 = false;
              }
              if ((local_4 != 0x41544144) && (local_4 != 0x61746164)) break;
              local_8 = local_c;
              bVar1 = false;
            }
            iVar3 = Fs_Seek(local_c,1);
          } while (iVar3 != -1);
        }
      }
      else if (((param_1 == 0x504d4153) || (param_1 == 0x706d6173)) &&
              (iVar3 = Fs_Read(&local_8,4), iVar3 != -1)) {
        Fs_Close();
        return (uint)(local_8 << 8) / 0x5622 << 8;
      }
    }
LAB_004a993f:
    Fs_Close();
  }
  return 0;
}

