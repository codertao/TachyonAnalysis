
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416a10(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 == 0) {
    DAT_005b39c0 = param_1[7];
    _DAT_005b39c4 = param_1[8];
    _DAT_005b39c8 = param_1[9];
    iVar1 = FUN_00417900(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xc0) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)(iVar1 + 0xc2) = *(undefined1 *)((int)param_1 + 7);
      *(undefined1 *)(iVar1 + 0xc1) = *(undefined1 *)((int)param_1 + 6);
      FUN_0041b890(iVar1,&DAT_005b3280);
    }
  }
  return;
}

