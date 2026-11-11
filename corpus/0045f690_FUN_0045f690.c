
void FUN_0045f690(int param_1,Quadrant *param_2)

{
  SpED_SrvPlayer *pSVar1;
  Quadrant *quadrant;
  int iVar2;
  SpED *pSVar3;
  undefined2 local_14;
  undefined2 uStack_12;
  ushort local_10;
  int local_c;
  int local_8;
  int local_4;
  
  quadrant = (Quadrant *)FUN_00435390(*(int *)(param_1 + 0xf0) + 0x38);
  if (quadrant != (Quadrant *)0x0) {
    FUN_00457bc0(quadrant);
    iVar2 = FUN_004263a0(param_1);
    if (iVar2 != 0) {
      FUN_004271a0(param_1);
    }
    Ent_LeaveQuadrant((SpED *)g_SrvCurShip,param_2);
    if (g_Wingman != 0) {
      FUN_00457ac0(g_Wingman,param_2);
    }
    Ent_SetQuadrant((SpED *)g_SrvCurShip,g_SrvCurConn,quadrant);
    pSVar3 = (SpED *)FUN_00427010(param_2->sector->mainSpx,quadrant,&local_c,&local_14,
                                  *(undefined4 *)(param_1 + 0xf0));
    g_SrvCurConn->jumpGate = pSVar3;
    pSVar1 = g_SrvCurShip;
    (g_SrvCurShip->pos).x = local_c;
    (pSVar1->pos).y = local_8;
    (pSVar1->pos).z = local_4;
    FUN_0045f460(g_SrvCurConn,quadrant);
    SrvSend_EnterQuadrant(&local_c,&local_14,quadrant,0,1,0,g_SrvCurConn);
    (g_SrvCurShip->ang).x = CONCAT22(uStack_12,local_14) << 0x10;
    (g_SrvCurShip->ang).y = CONCAT22(local_10,uStack_12) << 0x10;
    (g_SrvCurShip->ang).z = (uint)local_10 << 0x10;
    clr_bytes(&g_SrvCurShip->vel,0xc);
    if (g_Wingman != 0) {
      *(int *)(g_Wingman + 0x4c) = CONCAT22(uStack_12,local_14) << 0x10;
      *(int *)(g_Wingman + 0x50) = CONCAT22(local_10,uStack_12) << 0x10;
      *(uint *)(g_Wingman + 0x54) = (uint)local_10 << 0x10;
      clr_bytes(g_Wingman + 0xa0,0xc);
      FUN_00499170(g_Wingman,&local_c,*(undefined4 *)(g_Wingman + 0xf8));
      iVar2 = g_Wingman;
      *(int *)(g_Wingman + 0x34) = local_c;
      *(int *)(iVar2 + 0x38) = local_8;
      *(int *)(iVar2 + 0x3c) = local_4;
    }
    g_SrvCurConn->state = 1;
  }
  return;
}

