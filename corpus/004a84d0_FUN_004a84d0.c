
void FUN_004a84d0(int param_1)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  uint unaff_EBX;
  undefined4 auStack_60 [24];
  
  GLBL_audio_running = 0;
  DAT_00563e9c = 0;
  DAT_00601e20 = 0xff;
  DAT_005f9d40 = 0xff;
  if (param_1 != 1) {
    if (param_1 != 2) {
      iVar2 = Ordinal_1(0,&DAT_005f9d64,0);
      if (iVar2 == 0) {
        auStack_60[0] = 0x60;
        iVar2 = (**(code **)(*DAT_005f9d64 + 0x10))(DAT_005f9d64,auStack_60);
        if (iVar2 != 0) {
          GLBL_audio_running = 0;
          return;
        }
        if ((unaff_EBX & 0x20) == 0) {
          FUN_004a86b0();
          FUN_004a8790();
          GLBL_audio_running = 1;
          DAT_00563e9c = 1;
          return;
        }
        (**(code **)(*DAT_005f9d64 + 8))(DAT_005f9d64);
      }
    }
    FUN_004a9260();
    GLBL_audio_running = 1;
    DAT_00563e9c = 0;
    return;
  }
  DVar1 = timeGetTime();
  do {
    iVar2 = Ordinal_1(0,&DAT_005f9d64,0);
    DVar3 = timeGetTime();
    if (iVar2 == 0) goto LAB_004a853c;
  } while ((int)(DVar3 - DVar1) < 3000);
  if (iVar2 != 0) {
    GLBL_audio_running = 0;
    return;
  }
LAB_004a853c:
  FUN_004a86b0();
  FUN_004a8790();
  GLBL_audio_running = 1;
  DAT_00563e9c = 1;
  return;
}

