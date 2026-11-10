
void FUN_00424d00(SpED *param_1)

{
  int iVar1;
  
  *(undefined4 *)&param_1->field_0xec = *(undefined4 *)&param_1->field_0x4c;
  *(undefined4 *)&param_1->field_0xf0 = *(undefined4 *)&param_1->field_0x50;
  param_1->currX = *(undefined4 *)&param_1->field_0x54;
  *(int *)&param_1->field_0xe0 = (param_1->position).x;
  iVar1 = (param_1->position).z;
  *(int *)&param_1->field_0xe4 = (param_1->position).y;
  *(int *)&param_1->field_0xe8 = iVar1;
  DAT_005b1edc = 0;
  DAT_005b1ee8 = 0;
  DAT_005aeebc = 0;
  DAT_005b1ee0 = 0x400;
  Entity_ApplyTurnControl
            (DAT_005b1eec,DAT_005b1ecc,&DAT_005b1ed0,DAT_005b1f0c + 0x84,0x400,&g_PlayerPower,
             DAT_005b2154 & 0x400,DAT_005b9020);
  Entity_ThrustToWorld(param_1,DAT_005b1ed0,DAT_005b1f0c + 0x84,&DAT_005b1ecc);
  FUN_004248e0(param_1);
  FUN_004249c0(param_1);
  FUN_00424970();
  return;
}

