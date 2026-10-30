
void FUN_004401f0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_00440400(param_1,param_2);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) && (*(int *)(iVar2 + 0xa0) != 0)) {
    *(undefined4 *)(iVar2 + 0x98) = 1;
    FUN_00437be0(1);
    *(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x120) = 2;
    puVar1 = (uint *)(*(int *)(iVar2 + 0xa0) + 0x11c);
    *puVar1 = *puVar1 | 2;
    _strncpy((char *)&DAT_005a4b60,*(char **)(iVar2 + 0xa4),0x100);
  }
  return;
}

