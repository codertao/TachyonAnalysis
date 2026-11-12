
/* capship part post-think calling CapPart_CollideTargetDrone */

void CapPart_CollisionPostThink(int param_1)

{
  if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 7) == 0) {
    Coll_CapPartProximity
              (param_1 + 0x34,*(int *)(param_1 + 100) + 0x14,param_1,CapPart_CollideTargetDrone);
  }
  return;
}

