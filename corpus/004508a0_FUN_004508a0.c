
int FUN_004508a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = something_list_related_get_next(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004b78c0(iVar1,param_2 + 0x24);
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  return iVar1;
}

