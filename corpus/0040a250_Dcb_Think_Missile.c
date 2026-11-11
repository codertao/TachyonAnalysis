
/* short-life guided-missile think (DCB +0x68, installed by 0x40a460): advance + proximity detonate
    */

void Dcb_Think_Missile(SpED_Turret *param_1)

{
  int iVar1;
  
  Dcb_SetRangeFlags(&param_1->power,&param_1->desc[1].isTargetable,(SpED *)param_1);
  iVar1 = *(int *)&param_1->field_0xe8;
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf8) & 8) != 0)) && (*(short *)(iVar1 + 0xfc) != 0)) {
    Turret_Think(param_1);
    (param_1->power).laserEnergy = 40000;
  }
  return;
}

