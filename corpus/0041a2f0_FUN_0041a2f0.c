
void FUN_0041a2f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_005b29a0;
  if (DAT_005b29a0 == 0) {
    DAT_005b29a0 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar3 + 200);
    FUN_0045d1c0(iVar3,*(int *)(iVar3 + 100) + 0x14);
    FUN_0041b990(iVar3,*(undefined4 *)(iVar3 + 100));
    FUN_0041b9b0(iVar3);
    iVar2 = *(int *)(iVar3 + 0xf4);
    if (iVar2 != 0) {
      FUN_0045d1c0(iVar2,*(int *)(iVar2 + 100) + 0x14);
      FUN_0041b990(*(int *)(iVar3 + 0xf4),*(undefined4 *)(*(int *)(iVar3 + 0xf4) + 100));
      FUN_0041b9b0(*(undefined4 *)(iVar3 + 0xf4));
    }
    iVar3 = iVar1;
  } while (iVar1 != 0);
  DAT_005b29a0 = iVar1;
  return;
}

