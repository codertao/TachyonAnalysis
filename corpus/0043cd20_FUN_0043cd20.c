
void FUN_0043cd20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = Ui_FindButton(param_1,param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_0043a7a0(param_1,param_3);
    *(undefined4 *)(iVar2 + 0x1e8) = uVar3;
    str_sprintf(iVar2 + 0x80,param_3);
    iVar1 = *(int *)(iVar2 + 0x1e8);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0x1670);
    }
    *(uint *)(iVar2 + 0xcc) = uVar4;
    if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x1680) != 0)) {
      *(uint *)(iVar2 + 0xcc) = uVar4 / *(uint *)(iVar1 + 0x1680);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar1 + 0x166c);
      return;
    }
    *(undefined4 *)(iVar2 + 200) = 0;
  }
  return;
}

