
int FUN_00457d00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 0x14) + 1;
  *(int *)(iVar1 + 0x14) = iVar2;
  return iVar2;
}

