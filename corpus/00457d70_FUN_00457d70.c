
undefined4 FUN_00457d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar2 + 8) = param_3;
  return uVar1;
}

