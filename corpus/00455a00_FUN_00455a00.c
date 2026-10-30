
undefined4 FUN_00455a00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x20) == 0) {
    uVar1 = FUN_0045d680(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 100));
    return uVar1;
  }
  iVar2 = FUN_0045d680(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    uVar1 = FUN_0040b290(iVar2,*(undefined2 *)(param_2 + 0x22));
    return uVar1;
  }
  return 0;
}

