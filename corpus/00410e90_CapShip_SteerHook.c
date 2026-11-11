
/* root +0x134 while power gens alive (root +0x138 & 0x100) */

void CapShip_SteerHook(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xfc) == 0) || ((*(uint *)(param_1 + 0x138) & 0x100) == 0)) {
    *(code **)(param_1 + 0x134) = CapShip_DriftHook;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x118);
    if (iVar1 == 0) {
      iVar1 = 0x400;
    }
    Entity_ApplyTurnControl
              (0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xf8,*(int *)(param_1 + 0x8c) + 0x84,
               iVar1,param_1 + 0x144,0,1);
    FUN_00410df0(param_1);
    if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0xf) == 0) {
      Vec_DirAngles((vec3 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x100),param_1 + 0xec);
      uVar2 = distance_between((vec3 *)(param_1 + 0x34),*(vec3 **)(param_1 + 0x100));
      if (uVar2 < 0x3e8000) {
        Nav_ReachedWaypoint(param_1,param_1 + 0xec);
        return;
      }
    }
  }
  return;
}

