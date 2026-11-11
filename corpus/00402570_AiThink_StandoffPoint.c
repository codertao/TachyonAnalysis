
/* fly to +0x344 standoff point; target > 16000 away -> ATTACK */

void AiThink_StandoffPoint(int param_1)

{
  vec3 *pvVar1;
  uint uVar2;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) != 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      Ai_ReacquireTarget(param_1);
      return;
    }
    pvVar1 = (vec3 *)(param_1 + 0x34);
    uVar2 = distance_between(pvVar1,(vec3 *)(*(int *)(param_1 + 0x90) + 0x34));
    if (0x3e80000 < uVar2) {
      Ai_SetState(param_1,1);
      return;
    }
    Vec_DirAngles(pvVar1,(vec3 *)(param_1 + 0x344),param_1 + 0xdc);
    uVar2 = distance_between(pvVar1,(vec3 *)(param_1 + 0x344));
    if (uVar2 < 0x1f4000) {
      FUN_00402560(param_1);
    }
  }
  return;
}

