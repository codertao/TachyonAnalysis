
/* turret AI per frame: slew yaw/pitch toward solution (max 0x20000/frame each), fire when error <
   def+0xc; every 32 frames (staggered by +0x154) re-solve lead, every 256 reacquire nearest hostile
    */

void Turret_Think(SpED *self)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int new_tgt;
  int dist_to_tgt;
  int iVar4;
  uint uVar4_semihighbits;
  uint uVar5;
  uint uvar4_highbits;
  uint uVar6;
  uint uVar7;
  vec3 tgt_offset;
  vec3 local_48;
  vec3 local_3c;
  vec3 local_30;
  vec3 local_24;
  vec3 local_18 [2];
  SpED *tgt;
  vec3 *my_position;
  
  iVar1 = *(int *)&self->field_0x100;
  iVar4 = (self->lastPos).x * 0x80 + *(int *)&self->field_0x4c * -0x80;
  uVar4_semihighbits = iVar4 >> 7;
  uvar4_highbits = iVar4 >> 0x1f;
  uVar7 = uVar4_semihighbits ^ uvar4_highbits;
  if ((int)uVar4_semihighbits < 0x20001) {
    if ((int)uVar4_semihighbits < -0x20000) {
      uVar4_semihighbits = 0xfffe0000;
    }
  }
  else {
    uVar4_semihighbits = 0x20000;
  }
  iVar4 = (self->lastPos).y;
  *(uint *)&self->field_0x4c = *(int *)&self->field_0x4c + uVar4_semihighbits;
  iVar4 = iVar4 * 0x80 + *(int *)&self->field_0x50 * -0x80;
  uVar5 = iVar4 >> 7;
  uVar6 = iVar4 >> 0x1f;
  uVar4_semihighbits = uVar5 ^ uVar6;
  if ((int)uVar5 < 0x20001) {
    if ((int)uVar5 < -0x20000) {
      uVar5 = 0xfffe0000;
    }
  }
  else {
    uVar5 = 0x20000;
  }
  *(uint *)&self->field_0x50 = *(int *)&self->field_0x50 + uVar5;
  if ((((int)((uVar7 - uvar4_highbits) + (uVar4_semihighbits - uVar6)) >> 1 < *(int *)(iVar1 + 0xc))
      && (self->field291_0x150 != 0)) && (self->suspected_tgt != 0)) {
    Weapon_TryFire(self,&self->field_0x100,&self->field_0x15c,0x10000,0);
  }
  uVar4_semihighbits = *(uint *)&self->field_0x154 ^ DAT_005897e4;
  if ((uVar4_semihighbits & 0x1f) != 0) {
    return;
  }
  if ((self->suspected_tgt == 0) || ((char)uVar4_semihighbits == '\0')) {
    new_tgt = Ent_FindNearestHostile
                        (self,*(undefined4 *)
                               ((uint)(byte)self->field_0xc2 * 0x10 + 4 + DAT_0058f2e8),0,
                         *(undefined4 *)&self->collision_radius,self,*(undefined4 *)(iVar1 + 0x5c));
    self->suspected_tgt = new_tgt;
    if (new_tgt == 0) goto LAB_00404eb3;
  }
  tgt = (SpED *)self->suspected_tgt;
  my_position = &self->position;
  dist_to_tgt = distance_between(my_position,&tgt->position);
  if (dist_to_tgt <= *(int *)&self->collision_radius) {
    tgt_offset.x = (tgt->position).x - my_position->x;
    tgt_offset.y = (tgt->position).y - (self->position).y;
    tgt_offset.z = (tgt->position).z - (self->position).z;
    local_30.x = -self->currX;
    local_30.y = -self->currY;
    local_30.z = -self->currZ;
    FUN_004b1bb0(local_18,&local_30);
    FUN_004b2410(&tgt_offset,&tgt_offset);
    FUN_004b2410(&tgt->field_0xa0,&local_24);
    iVar4 = (self->position).z;
    tgt_offset.x = tgt_offset.x + my_position->x;
    iVar2 = (self->position).y;
    tgt_offset.y = tgt_offset.y + iVar2;
    piVar3 = *(int **)&self->field_0x108;
    tgt_offset.z = tgt_offset.z + iVar4;
    local_48.x = *piVar3 + my_position->x;
    local_48.z = piVar3[2] + iVar4;
    local_48.y = piVar3[1] + iVar2;
    Ai_LeadAimPoint(&local_48,&tgt_offset,&local_24,tgt,dist_to_tgt,*(undefined4 *)(iVar1 + 0x54),
                    &local_3c,*(undefined4 *)&self[1].field_0x2c);
    if ((0x71c70 < local_3c.y) && (local_3c.y < 0x800001)) {
      (self->someVec).x = local_3c.x;
      (self->someVec).y = local_3c.y;
      (self->someVec).z = local_3c.z;
      FUN_0048e720(&local_3c,(vec3 *)&self->currX,&self->lastPos);
      self->field291_0x150 = 1;
      return;
    }
  }
LAB_00404eb3:
  Turret_ClearTarget(self);
  return;
}

