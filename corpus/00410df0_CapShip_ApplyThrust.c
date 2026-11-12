
/* sweep */

void CapShip_ApplyThrust(SpED *param_1)

{
  SpED *pSVar1;
  
  if (((param_1[1].ang.z ^ DAT_005897e4) & 0x3f) == 0) {
    pSVar1 = param_1 + 1;
  }
  else {
    pSVar1 = (SpED *)0x0;
  }
  Entity_ThrustToWorld(param_1,*(undefined4 *)&param_1[1].field_0x24,param_1->desc + 1,pSVar1);
  return;
}

