
void FUN_00440270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00440400(param_1,param_2);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) && (*(int *)(iVar1 + 0xa0) != 0)) {
    *(undefined4 *)(iVar1 + 0x98) = 0;
    FUN_00437be0(0);
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x120) = 1;
    clear_flags(*(int *)(iVar1 + 0xa0) + 0x11c,2);
    Ui_RefreshWindow(param_1,iVar1 + 0x40,0,0);
    puVar2 = &DAT_005a4b60;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

