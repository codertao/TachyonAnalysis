
void FUN_00424d00(SpED *param_1)

{
  int iVar1;
  
  *(int *)&param_1[1].field_0x18 = (param_1->ang).x;
  iVar1 = (param_1->ang).z;
  param_1[1].scale = (param_1->ang).y;
  *(int *)&param_1[1].field_0x20 = iVar1;
  param_1[1].pendingNext = (SpED *)(param_1->pos).x;
  iVar1 = (param_1->pos).z;
  param_1[1].poolSerial = (param_1->pos).y;
  *(int *)&param_1[1].linked = iVar1;
  DAT_005b1edc = 0;
  DAT_005b1ee8 = 0;
  DAT_005aeebc = 0;
  DAT_005b1ee0 = 0x400;
  Entity_ApplyTurnControl
            (DAT_005b1eec,DAT_005b1ecc,(float *)&DAT_005b1ed0,(ShipFlight *)(DAT_005b1f0c + 0x84),
             0x400,&g_PlayerPower,DAT_005b2154 & 0x400,DAT_005b9020);
  Entity_ThrustToWorld(param_1,DAT_005b1ed0,DAT_005b1f0c + 0x84,&DAT_005b1ecc);
  FUN_004248e0(param_1);
  FUN_004249c0(param_1);
  FUN_00424970();
  return;
}

