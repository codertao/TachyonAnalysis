
/* hold slot (0, +600, -4000) behind/above protected entity */

void AiThink_Escort(int param_1)

{
  vec3 *pvVar1;
  uint uVar2;
  int iVar3;
  vec3 vStack_30;
  vec3 vStack_24;
  undefined1 auStack_18 [24];
  
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    iVar3 = *(int *)(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x312) = 0x400;
    *(undefined1 *)(param_1 + 0x327) = 0;
    if (iVar3 == 0) {
      Ai_ReacquireTarget(param_1);
      return;
    }
    vStack_30.x = 0;
    vStack_30.y = 0x258000;
    vStack_30.z = -0xfa0000;
    Rot_FromAngles(auStack_18,(vec3 *)(iVar3 + 0x4c));
    some_rotate_by_global(&vStack_30,&vStack_30);
    vStack_24.x = *(int *)(iVar3 + 0x34) + vStack_30.x;
    vStack_24.y = *(int *)(iVar3 + 0x38) + vStack_30.y;
    vStack_24.z = *(int *)(iVar3 + 0x3c) + vStack_30.z;
    pvVar1 = (vec3 *)(param_1 + 0x34);
    Vec_DirAngles(pvVar1,&vStack_24,param_1 + 0xdc);
    Ent_AnglesToLocal(iVar3,param_1 + 0xdc);
    uVar2 = distance_between(pvVar1,&vStack_24);
    if (uVar2 < 0x258000) {
      Ai_SetState(param_1,1);
    }
    if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0x7f) == 0) {
      uVar2 = distance_between(pvVar1,(vec3 *)(iVar3 + 0x34));
      if ((uVar2 < 0xfa0001) && (iVar3 = Ai_IsBehind(param_1,iVar3,0), iVar3 == 0)) {
        return;
      }
      Ai_SetState(param_1,1);
    }
  }
  return;
}

