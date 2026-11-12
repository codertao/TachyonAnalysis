
/* turret AI per frame: slew yaw/pitch toward solution (max 0x20000/frame each), fire when error <
   def+0xc; every 32 frames (staggered by +0x154) re-solve lead, every 256 reacquire nearest hostile
    */

void Turret_Think(SpED_Turret *self)

{
  int iVar1;
  WeaponDef *pWVar2;
  vec3 *pvVar3;
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
  
  iVar1 = (self->ang).x;
  pWVar2 = self->weapon;
  iVar4 = (self->aimAng).x * 0x80 + iVar1 * -0x80;
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
  iVar4 = (self->aimAng).y;
  (self->ang).x = iVar1 + uVar4_semihighbits;
  iVar1 = (self->ang).y;
  iVar4 = iVar4 * 0x80 + iVar1 * -0x80;
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
  (self->ang).y = iVar1 + uVar5;
  if ((((int)((uVar7 - uvar4_highbits) + (uVar4_semihighbits - uVar6)) >> 1 < pWVar2->aimTolerance)
      && (self->hasSolution != 0)) && (self->target != (SpED *)0x0)) {
    Weapon_TryFire(self,&self->weapon,&self->power,0x10000,0);
  }
  uVar4_semihighbits = self->thinkSeed ^ DAT_005897e4;
  if ((uVar4_semihighbits & 0x1f) != 0) {
    return;
  }
  if ((self->target == (SpED *)0x0) || ((char)uVar4_semihighbits == '\0')) {
    new_tgt = Ent_FindNearestHostile
                        (self,*(undefined4 *)((uint)self->team * 0x10 + 4 + DAT_0058f2e8),0,
                         self->range,self,pWVar2->aiTargetMask);
    self->target = (SpED *)new_tgt;
    if (new_tgt == 0) goto LAB_00404eb3;
  }
  tgt = self->target;
  my_position = &self->pos;
  dist_to_tgt = distance_between(my_position,&tgt->pos);
  if (dist_to_tgt <= self->range) {
    tgt_offset.x = (tgt->pos).x - my_position->x;
    tgt_offset.y = (tgt->pos).y - (self->pos).y;
    tgt_offset.z = (tgt->pos).z - (self->pos).z;
    local_30.x = -(self->mountAng).x;
    local_30.y = -(self->mountAng).y;
    local_30.z = -(self->mountAng).z;
    Rot_FromAngles(local_18,&local_30);
    Rot_ApplyCurrent(&tgt_offset,&tgt_offset);
    Rot_ApplyCurrent(&tgt->vel,&local_24);
    iVar1 = (self->pos).z;
    tgt_offset.x = tgt_offset.x + my_position->x;
    iVar4 = (self->pos).y;
    tgt_offset.y = tgt_offset.y + iVar4;
    pvVar3 = self->muzzleOffset;
    tgt_offset.z = tgt_offset.z + iVar1;
    local_48.x = pvVar3->x + my_position->x;
    local_48.z = pvVar3->z + iVar1;
    local_48.y = pvVar3->y + iVar4;
    Ai_LeadAimPoint(&local_48,&tgt_offset,&local_24,tgt,dist_to_tgt,pWVar2->speed,&local_3c,
                    *(undefined4 *)&self->field_0x18c);
    if ((0x71c70 < local_3c.y) && (local_3c.y < 0x800001)) {
      (self->aimPoint).x = local_3c.x;
      (self->aimPoint).y = local_3c.y;
      (self->aimPoint).z = local_3c.z;
      Vec_AnglesToward(&local_3c,&self->mountAng,&self->aimAng);
      self->hasSolution = 1;
      return;
    }
  }
LAB_00404eb3:
  Turret_ClearTarget(self);
  return;
}

