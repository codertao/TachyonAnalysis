
/* 16x16KB ring buffer; 16->8-bit; WAV loop at file offset 0x2c */

undefined4 StreamAudio_Refill(void)

{
  int iVar1;
  BOOL BVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  uint local_c;
  uint local_8;
  
  if (DAT_005648e4 == 0) {
    return 0;
  }
  do {
    if (((DAT_005f9d48 != 0) && (DAT_0055e6e8 != 0xffffffff)) &&
       (iVar1 = Snd_Fwd_4df4c9(&DAT_005b9d40 + DAT_0055e6e8 * 0x4000,DAT_005f9d48), iVar1 == 0)) {
      return 0;
    }
    if (DAT_005f9d4c == 0x10) {
      BVar2 = ReadFile(DAT_00601e54,&DAT_005f9e20,0x8000,&local_8,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        DAT_005f9d48 = 0;
        return 0;
      }
      if (local_8 == 0) {
        DAT_005f9d48 = 0;
        return 0;
      }
      local_c = local_8 >> 1;
      if (local_8 < 0x8000) {
LAB_004a9168:
        SetFilePointer(DAT_00601e54,0x2c,(PLONG)0x0,0);
      }
    }
    else {
      BVar2 = ReadFile(DAT_00601e54,&DAT_005f9e20,0x4000,&local_8,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (local_8 == 0)) {
        DAT_005f9d48 = 0;
        return 0;
      }
      local_c = local_8;
      if (local_8 < 0x4000) goto LAB_004a9168;
    }
    DAT_0055e6e8 = DAT_0055e6e8 + 1 & 0xf;
    pbVar3 = &DAT_005b9d40 + DAT_0055e6e8 * 0x4000;
    if (DAT_005f9d4c == 0x10) {
      puVar5 = &DAT_005f9e20;
      uVar4 = local_c;
      do {
        *pbVar3 = (byte)((ushort)*puVar5 >> 8) ^ 0x80;
        pbVar3[1] = (byte)((ushort)puVar5[1] >> 8) ^ 0x80;
        puVar5 = puVar5 + 2;
        pbVar3 = pbVar3 + 2;
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
      DAT_005f9d48 = local_c;
    }
    else {
      puVar6 = (undefined4 *)&DAT_005f9e20;
      for (uVar4 = local_c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        pbVar3 = pbVar3 + 4;
      }
      DAT_005f9d48 = local_c;
    }
  } while( true );
}

