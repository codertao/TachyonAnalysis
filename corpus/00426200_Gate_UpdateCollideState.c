
/* set entity +0xc4 collision override = desc+0x160 (open pak) or +0x164 (closed pak); post mission
   event */

void Gate_UpdateCollideState(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = FUN_00436160((int)*(short *)(*(int *)(param_1 + 0xf0) + 0x48),
                          *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x4a));
  if (local_10 < 1) {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x160);
    *(undefined4 *)(param_1 + 0xe8) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x164);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    local_14 = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x20);
    local_c = 0;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_18 = 2;
    Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  }
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  return;
}

