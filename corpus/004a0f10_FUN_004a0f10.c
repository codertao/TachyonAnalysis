
int FUN_004a0f10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a0e10(param_1);
  if (iVar1 == -1) {
    DAT_006038b8 = 1;
    if (DAT_00564004 != (code *)0x0) {
      (*DAT_00564004)(param_1,0,0,0);
    }
    return -1;
  }
  uVar2 = FUN_004a0ed0(0,2);
  FUN_004a0ed0(0,0);
  iVar1 = FUN_0049c3b0(uVar2,4,0,s_LOADED_FILE_0055e06c);
  if (iVar1 == 0) {
    FUN_004a0ec0();
    if (DAT_00564004 != (code *)0x0) {
      (*DAT_00564004)(param_1,0,0,0);
    }
    DAT_006038b8 = 0;
    return 0;
  }
  FUN_004a0ea0(iVar1,uVar2);
  FUN_004a0ec0();
  DAT_006038a4 = uVar2;
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,uVar2,1);
  }
  DAT_006038b8 = 0;
  return iVar1;
}

