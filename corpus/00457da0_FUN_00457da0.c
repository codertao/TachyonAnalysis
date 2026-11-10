
undefined4 FUN_00457da0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 8);
}

