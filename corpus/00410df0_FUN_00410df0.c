
void FUN_00410df0(SpED *param_1)

{
  undefined1 *puVar1;
  
  if (((*(uint *)&param_1->field_0x128 ^ DAT_005897e4) & 0x3f) == 0) {
    puVar1 = &param_1->field_0xd4;
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  Entity_ThrustToWorld(param_1,param_1->currY,*(int *)&param_1->field_0x8c + 0x84,puVar1);
  return;
}

