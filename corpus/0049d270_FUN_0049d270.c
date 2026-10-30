
int FUN_0049d270(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  FUN_004a1310(param_1 + 0x3c);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(char *)(iVar3 + 0x22) != '\0') {
        FUN_0049d260(iVar3);
        iVar2 = iVar2 + 1;
        FUN_0049c670(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(param_1 + 0xc4));
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x34;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  FUN_004a1220();
  return iVar2;
}

