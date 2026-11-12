
/* sweep */

void Sped_InitGroupSlot(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar1 = Quad_GetOrAllocGroupSlot(*(undefined4 *)(param_1 + 100),param_3);
  *(undefined2 *)(param_2 + 0x18) = uVar1;
  return;
}

