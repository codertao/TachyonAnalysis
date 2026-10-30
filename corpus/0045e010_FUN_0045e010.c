
void FUN_0045e010(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar1 = *(int *)(param_1 + 200);
  if (*(int *)(iVar1 + 100) != 0) {
    Ent_LeaveQuadrant(iVar1,*(int *)(iVar1 + 100));
  }
  Ent_SetQuadrant(iVar1,param_1,param_2);
  FUN_0045f460(param_1,param_2);
  local_8 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0x4c) >> 0x10);
  local_6 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0x50) >> 0x10);
  local_4 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0x54) >> 0x10);
  FUN_0045ed20(iVar1 + 0x34,&local_8,param_2,0,param_3,1,param_1);
  return;
}

