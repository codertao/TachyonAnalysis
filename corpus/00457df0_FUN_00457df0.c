
void FUN_00457df0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_3;
  }
  return;
}

