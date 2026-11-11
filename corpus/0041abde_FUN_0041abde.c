
void FUN_0041abde(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,SpED *param_7)

{
  SpED *pSVar1;
  Desc *pDVar2;
  undefined4 uVar3;
  SpED *unaff_ESI;
  
  Quad_LinkDynamic(unaff_ESI);
  (unaff_ESI->pos).x = *param_2;
  (unaff_ESI->pos).y = param_2[1];
  (unaff_ESI->pos).z = param_2[2];
  (unaff_ESI->ang).x = *param_3;
  (unaff_ESI->ang).y = param_3[1];
  (unaff_ESI->ang).z = param_3[2];
  unaff_ESI->scale = 0x10000;
  *(undefined4 *)&unaff_ESI->field_0xb8 = 0x10000;
  unaff_ESI->think = &LAB_0041a710;
  unaff_ESI->postThink = (void *)0x0;
  unaff_ESI->onCollide = (void *)0x0;
  *(undefined4 *)&unaff_ESI->field_0x18 = 0x10;
  *(undefined4 *)&unaff_ESI->field_0x28 = 0x18;
  pDVar2 = DAT_005b29c8;
  unaff_ESI[1].prev = param_7;
  unaff_ESI->desc = pDVar2;
  unaff_ESI->netFlags = 3;
  unaff_ESI->stateFlags = 4;
  unaff_ESI[1].pool = (Pool *)0x1;
  if (param_7 == (SpED *)0x0) {
    pSVar1 = DAT_005b29c8[1].clientInit;
    unaff_ESI[1].next = pSVar1;
    *(SpED **)&unaff_ESI->field_0x58 = pSVar1;
    unaff_ESI[1].pendingNext = DAT_005b29c8[1].clientInit;
    unaff_ESI->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].m24;
  }
  else if (param_7 == (SpED *)0x1) {
    pSVar1 = DAT_005b29c8[1].getText;
    unaff_ESI[1].next = pSVar1;
    *(SpED **)&unaff_ESI->field_0x58 = pSVar1;
    unaff_ESI[1].pendingNext = DAT_005b29c8[1].getText;
    unaff_ESI->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].getName;
  }
  else if (param_7 == (SpED *)0x2) {
    pSVar1 = DAT_005b29c8[1].clientInit;
    unaff_ESI[1].next = pSVar1;
    *(SpED **)&unaff_ESI->field_0x58 = pSVar1;
    unaff_ESI[1].pendingNext = DAT_005b29c8[1].clientInit;
    unaff_ESI->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].m24;
    uVar3 = TargetDrone_Spawn();
    *(undefined4 *)&unaff_ESI[1].field_0x20 = uVar3;
  }
  FUN_0045cbf0();
  FUN_0041a830(param_2,param_3,param_4,param_5,param_6);
  return;
}

