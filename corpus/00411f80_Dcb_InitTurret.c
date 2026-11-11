
/* OCF TYPE 2 part: entity type 0xf, hp +0x180 = 50000, weapon = g_TurretSubtypeWeapon[SUB_TYPE],
   range +0x158 = def+0x60 */

void Dcb_InitTurret(SpED *param_1,undefined4 param_2)

{
  int iVar1;
  Quadrant *pQVar2;
  void *pvVar3;
  int iVar4;
  undefined1 local_c [12];
  
  *(int *)&param_1[1].field_0x20 = (param_1->ang).x;
  iVar1 = (param_1->ang).z;
  *(int *)&param_1[1].field_0x24 = (param_1->ang).y;
  *(int *)&param_1[1].field_0x28 = iVar1;
  pQVar2 = (Quadrant *)(param_1->ang).x;
  param_1[1].target = (SpED *)0x0;
  *(undefined4 *)&param_1[1].snapStamp = 0;
  param_1[1].quadrant = pQVar2;
  pvVar3 = (void *)(param_1->ang).z;
  param_1[1].think = (void *)(param_1->ang).y;
  iVar1 = param_1->scale;
  param_1[1].postThink = pvVar3;
  iVar4 = param_1[1].poolSerial;
  *(undefined4 *)&param_1[1].field_0xb8 = param_2;
  param_1->poolType = 0xf;
  *(undefined4 *)&param_1->field_0xb8 = 0x20000;
  param_1[1].angVel.x = 50000;
  param_1->onDamage = Turret_OnDamage;
  param_1->think = Dcb_Think_Turret;
  Turret_SetupWeapon(&param_1[1].field_0x2c,local_c,1,1,*(undefined4 *)&param_1->field_0x58,
                     *(undefined4 *)(&g_TurretSubtypeWeapon + *(int *)(iVar4 + 0x60) * 4),iVar1);
  param_1[1].onDamage = DAT_005a5540;
  DAT_005a5540 = (void *)((int)DAT_005a5540 + 1);
  pQVar2 = param_1->quadrant;
  param_1[1].aux = *(void **)(*(int *)&param_1[1].field_0x2c + 0x60);
  FUN_0045cff0(param_1,&pQVar2->staticSectorMap);
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].onCollide,&param_1->desc[1].getText,param_1);
  return;
}

