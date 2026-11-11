
/* turret DCB think (+0x68): range flags; runs Turret_Think only while root +0x138 has 8 (weapon
   generator alive) and root +0x130 bit 1 clear */

void Dcb_Think_Turret(SpED_Turret *param_1)

{
  Dcb_SetRangeFlags(&param_1->power,&param_1->desc[1].getText,(SpED *)param_1);
  if (((*(byte *)(*(int *)&param_1->field_0xdc + 0x138) & 8) != 0) &&
     ((*(byte *)(*(int *)&param_1->field_0xdc + 0x130) & 1) == 0)) {
    Turret_Think(param_1);
    (param_1->power).laserEnergy = 40000;
  }
  return;
}

