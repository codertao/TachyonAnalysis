
/* root +0x134 while power gens alive (root +0x138 & 0x100) */

void CapShip_SteerHook(int param_1)

{
  int mode;
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xfc) == 0) || ((*(uint *)(param_1 + 0x138) & 0x100) == 0)) {
    *(code **)(param_1 + 0x134) = CapShip_DriftHook;
  }
  else {
    mode = *(int *)(param_1 + 0x118);
    if (mode == 0) {
      mode = 0x400;
    }
    Entity_ApplyTurnControl
              (0,*(float *)(param_1 + 0xd4),(float *)(param_1 + 0xf8),
               (ShipFlight *)(*(int *)(param_1 + 0x8c) + 0x84),mode,(PowerBlock *)(param_1 + 0x144),
               0,1.4013e-45);
    CapShip_ApplyThrust(param_1);
    if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0xf) == 0) {
      Vec_DirAngles((vec3 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x100),param_1 + 0xec);
      uVar1 = distance_between((vec3 *)(param_1 + 0x34),*(vec3 **)(param_1 + 0x100));
      if (uVar1 < 0x3e8000) {
        Nav_ReachedWaypoint(param_1,param_1 + 0xec);
        return;
      }
    }
  }
  return;
}

