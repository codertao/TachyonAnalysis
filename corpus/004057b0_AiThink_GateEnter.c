
/* sweep */

void AiThink_GateEnter(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  vec3 local_48;
  vec3 local_3c;
  undefined1 local_30 [4];
  int iStack_2c;
  undefined1 auStack_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x90);
  local_3c.x = *(int *)(param_1 + 0x4c);
  local_48.x = 0;
  local_48.y = 0;
  local_48.z = 0x7d0000;
  local_3c.y = 0;
  local_3c.z = 0;
  if (iVar1 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    (**(code **)(*(int *)(iVar1 + 0x8c) + 0x58))(iVar1,4,local_30);
    Rot_FromAngles(auStack_18,&local_3c);
    some_rotate_by_global(&local_48,&local_48);
    local_48.x = local_48.x + *(int *)(param_1 + 0x34);
    local_48.z = local_48.z + *(int *)(param_1 + 0x3c);
    local_48.y = iStack_2c;
    Vec_DirAngles(param_1 + 0x34,&local_48,param_1 + 0xdc);
    uVar2 = *(int *)(param_1 + 0x38) - local_48.y;
    uVar3 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar3) - uVar3) < 0x64000) {
      *(code **)(param_1 + 0x304) = AiThink_GateAlign;
    }
  }
  return;
}

