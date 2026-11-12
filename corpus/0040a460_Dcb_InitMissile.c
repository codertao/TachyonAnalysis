
/* init short-life missile DCB (type 0xf, life 5000): think 0x40a250, action +0x80=0x40a1c0 */

void Dcb_InitMissile(SpED *param_1,int param_2)

{
  int iVar1;
  Quadrant *pQVar2;
  void *pvVar3;
  SpED *pSVar4;
  undefined1 local_c [12];
  
  *(int *)&param_1[1].field_0x20 = (param_1->ang).x;
  iVar1 = (param_1->ang).z;
  *(int *)&param_1[1].field_0x24 = (param_1->ang).y;
  *(int *)&param_1[1].field_0x28 = iVar1;
  param_1->poolType = 0xf;
  if ((*(byte *)(param_2 + 0x24) & 0x10) == 0) {
    param_1->think = Dcb_Think_Missile;
  }
  else {
    param_1->think = (void *)0x0;
  }
  pQVar2 = (Quadrant *)(param_1->ang).x;
  param_1[1].target = (SpED *)0x0;
  *(undefined4 *)&param_1[1].snapStamp = 0;
  param_1[1].quadrant = pQVar2;
  pvVar3 = (void *)(param_1->ang).z;
  param_1[1].think = (void *)(param_1->ang).y;
  pSVar4 = param_1[1].next;
  param_1[1].postThink = pvVar3;
  iVar1 = param_1->scale;
  *(undefined4 *)&param_1->field_0xb8 = 0x20000;
  param_1[1].angVel.x = 5000;
  param_1->onDamage = BasePart_OnDamageShielded;
  Turret_SetupWeapon(&param_1[1].field_0x2c,local_c,1,1,*(undefined4 *)&param_1->field_0x58,
                     *(undefined4 *)(&g_TurretSubtypeWeapon + *(int *)&pSVar4->field_0x60 * 4),iVar1
                    );
  param_1[1].onDamage = DAT_005a5540;
  DAT_005a5540 = (void *)((int)DAT_005a5540 + 1);
  pQVar2 = param_1->quadrant;
  param_1[1].aux = *(void **)(*(int *)&param_1[1].field_0x2c + 0x60);
  Quad_LinkDynamicIfAbsent(param_1,&pQVar2->staticSectorMap);
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].onCollide,&param_1->desc[1].isTargetable,param_1);
  return;
}

