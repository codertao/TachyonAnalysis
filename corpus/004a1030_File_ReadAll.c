
/* open, size via seek-end, read whole into buf; returns size */

undefined4 File_ReadAll(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a0e10(param_1);
  if (iVar1 == -1) {
    if (DAT_00564004 != (code *)0x0) {
      (*DAT_00564004)(param_1,0,0,0);
    }
    DAT_006038b8 = 1;
    return 0xffffffff;
  }
  if (param_2 == 0) {
    uVar2 = FUN_004a0ed0(0,2);
    FUN_004a0ec0();
    DAT_006038b8 = 0;
    return uVar2;
  }
  uVar2 = FUN_004a0ed0(0,2);
  FUN_004a0ed0(0,0);
  FUN_004a0ea0(param_2,uVar2);
  FUN_004a0ec0();
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,uVar2,1);
  }
  DAT_006038b8 = 0;
  return uVar2;
}

