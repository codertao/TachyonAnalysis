
/* sweep: guess */

void Quad_GroupSlotCount(undefined4 param_1,undefined4 param_2,undefined4 *param_3,
                        undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = Quad_FindGroupSlot(param_1,param_2);
  if (iVar1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar1 + 0xc);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  return;
}

