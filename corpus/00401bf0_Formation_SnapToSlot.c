
/* sweep: place wingman at its slot + copy leader angles */

void Formation_SnapToSlot(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  Formation_GetSlotPos(param_1,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  return;
}

