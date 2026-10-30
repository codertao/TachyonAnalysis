
/* entity LEAVE_QUADRANT event handler */

void Ent_LeaveQuadrant(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00445720(param_1,param_2,s_LEAVE_QUADRANT_00548d34);
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x138) = 0;
  iVar1 = FUN_0045d080(param_1,param_2 + 0x14);
  if (iVar1 != 0) {
    FUN_004578e0(param_1,param_2);
  }
  if (*(code **)(param_2 + 0x90) != (code *)0x0) {
    (**(code **)(param_2 + 0x90))();
  }
  return;
}

