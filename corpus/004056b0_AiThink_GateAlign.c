
/* sweep */

void AiThink_GateAlign(int param_1)

{
  int iVar1;
  uint uVar2;
  vec3 vStack_3c;
  vec3 vStack_30;
  vec3 vStack_24;
  undefined1 auStack_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x90);
  vStack_3c.x = 0;
  vStack_3c.y = 0;
  vStack_3c.z = 0x1388000;
  if (iVar1 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    (**(code **)(*(int *)(iVar1 + 0x8c) + 0x58))(iVar1,4,&vStack_30);
    Rot_FromAngles(auStack_18,&vStack_24);
    some_rotate_by_global(&vStack_3c,&vStack_3c);
    vStack_30.x = vStack_30.x + vStack_3c.x;
    vStack_30.y = vStack_30.y + vStack_3c.y;
    vStack_30.z = vStack_30.z + vStack_3c.z;
    Vec_DirAngles((vec3 *)(param_1 + 0x34),&vStack_30,param_1 + 0xdc);
    uVar2 = distance_between((vec3 *)(param_1 + 0x34),&vStack_30);
    if (uVar2 < 0xc8000) {
      *(code **)(param_1 + 0x304) = AiThink_GateApproach;
    }
  }
  return;
}

