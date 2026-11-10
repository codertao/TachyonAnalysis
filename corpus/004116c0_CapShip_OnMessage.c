
/* desc+0x34 order handler: 0 HYPERSPACE, 1 ACTIVATE, 3 EXPLODE, 7 SET_IDENTIFIED, 8 CHANGE_RACE,
   0xf CHANGE_WP, 0x13/0x14 objective on/off, 0x19 WEAPONS_ACTIVATE (+0x130 bit 1), 0x1a set speed,
   0x1d RESTORE_POWERPLANT, 0x1e TIMED_EXPLODE (arg*50 frames) */

uint CapShip_OnMessage(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    CapShip_MsgHyperspace(param_1,param_3);
    return 0;
  case 1:
    CapShip_MsgActivate(param_1,param_3);
    return 0;
  case 3:
    CapShip_StartDeath(param_1,1000);
    return 0;
  case 4:
    return (uint)*(byte *)(param_1 + 0x106);
  case 5:
    if ((*(int *)(param_1 + 0xd8) != 0) &&
       ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x80) != 0)) {
      return *(uint *)(*(int *)(param_1 + 0x8c) + 0x168);
    }
    break;
  case 6:
    return *(uint *)(*(int *)(param_1 + 0x8c) + 0x16c);
  case 7:
    Ent_SetIdentified(param_1,param_1 + 0xec,param_3);
    return 0;
  case 8:
    FUN_00411650(param_1,param_3);
    return 0;
  case 0xf:
    Nav_ChangeRoute(param_1,param_1 + 0xec,param_3);
    return 0;
  case 0x11:
    if ((param_3 & 4) != 0) {
      Power_DrainShields(param_1 + 0x144,4,0x50);
      return 0;
    }
    break;
  case 0x13:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 0x20;
    SrvSend_ThreatList(*(undefined4 *)(param_1 + 0x78),0x13,*(undefined4 *)(param_1 + 100));
    return 0;
  case 0x14:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xdf;
    SrvSend_ThreatList(*(undefined4 *)(param_1 + 0x78),0x14,*(undefined4 *)(param_1 + 100));
    return 0;
  case 0x19:
    CapShip_MsgWeapons(param_1,param_3);
    return 0;
  case 0x1a:
    uVar1 = FlightModel_SolveThrottle
                      (*(int *)(param_1 + 0x8c) + 0x84,(float)param_3,param_1 + 0x144,0,1);
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    return 0;
  case 0x1d:
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x100;
    uVar1 = FUN_00434830(param_1,*(int *)(param_1 + 0xd8),
                         *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x5c),0);
    FUN_004346d0(uVar1);
    break;
  case 0x1e:
    CapShip_StartDeath(param_1,param_3 * 0x32);
    return 0;
  }
  return 0;
}

