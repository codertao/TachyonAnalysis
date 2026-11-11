
/* desired aim = current, target = 0, solution flag +0x150 = 0 */

void Turret_ClearTarget(SpED_Turret *self)

{
  int iVar1;
  
  (self->aimAng).x = (self->mountAng).x;
  iVar1 = (self->mountAng).z;
  (self->aimAng).y = (self->mountAng).y;
  (self->aimAng).z = iVar1;
  self->target = (SpED *)0x0;
  (self->aimPoint).x = 0;
  (self->aimPoint).y = 0;
  (self->aimPoint).z = 0;
  self->hasSolution = 0;
  return;
}

