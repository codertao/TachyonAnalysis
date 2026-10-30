
void FUN_0043f6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 != 0) {
    str_sprintf(iVar1 + 0x80,param_3);
    iVar2 = FUN_0043a7a0(param_1,param_3);
    *(int *)(iVar1 + 0xd4) = iVar2;
    *(undefined4 *)(iVar1 + 0xe0) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x1680) + -1;
    }
    *(int *)(iVar1 + 0xdc) = iVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1680) != 0)) {
      *(int *)(iVar1 + 0xcc) = *(int *)(iVar2 + 0x166c) + *(int *)(iVar1 + 0xc4);
      *(int *)(iVar1 + 0xd0) =
           *(int *)(iVar2 + 0x1670) / *(int *)(iVar2 + 0x1680) + *(int *)(iVar1 + 200);
    }
    *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) | 0x400;
  }
  return;
}

