
/* sweep */

void Quad_ClearGroupSlot(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  }
  return;
}

