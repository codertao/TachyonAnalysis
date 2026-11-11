
/* alloc player-control/viewpoint DCB (g_PlayerCtrlDcb 0x5b3300 from client pool 0x5b3288); seed pos
   +0x34 and vel +0x4c from spawn desc (param+0x18 pos, param+0x24 vel); link to player ship
   g_PlayerShip (+0x8c); set render +0x70 */

void PlayerDcb_Init(int param_1)

{
  SpED *pSVar1;
  
  if (GLBL_SOME_CONTEXT == (SpED *)0x0) {
    GLBL_SOME_CONTEXT = (SpED *)DcbPool_Alloc(&DAT_005b3288,1,&DAT_005b31c0);
  }
  pSVar1 = GLBL_SOME_CONTEXT;
  Quad_LinkDynamic(GLBL_SOME_CONTEXT);
  clr_bytes(&DAT_005b1e80,0x2d8);
  *(undefined2 *)&pSVar1->field_0x74 = 1;
  (pSVar1->pos).x = *(int *)(param_1 + 0x18);
  (pSVar1->pos).y = *(int *)(param_1 + 0x1c);
  (pSVar1->pos).z = *(int *)(param_1 + 0x20);
  (pSVar1->ang).x = *(int *)(param_1 + 0x24);
  (pSVar1->ang).y = *(int *)(param_1 + 0x28);
  (pSVar1->ang).z = *(int *)(param_1 + 0x2c);
  DAT_005b39d4 = *(int *)(param_1 + 0x18);
  DAT_005b39d8 = *(undefined4 *)(param_1 + 0x1c);
  DAT_005b39dc = *(undefined4 *)(param_1 + 0x20);
  DAT_005b39e0 = *(int *)(param_1 + 0x24);
  DAT_005b39e4 = *(undefined4 *)(param_1 + 0x28);
  DAT_005b39e8 = *(undefined4 *)(param_1 + 0x2c);
  pSVar1->render = &LAB_00452d10;
  pSVar1->preRender = FUN_00452e40;
  *(undefined4 *)&pSVar1->field_0x18 = 0xc0;
  *(SpED **)&pSVar1->field_0x60 = pSVar1;
  *(undefined4 *)&pSVar1->field_0x28 = DAT_00666afc;
  FUN_004101c0(pSVar1,1);
  FUN_00424dd0();
  FUN_00454870(param_1,&DAT_005b1f0c,&DAT_005b1f10);
  *(undefined4 *)&pSVar1->field_0x58 = *(undefined4 *)&DAT_005b1f0c[4].field_0x80;
  pSVar1->desc = DAT_005b1f0c;
  FUN_004549d0();
  FUN_0049c630(0xffff,0xcccc);
  FUN_00463790(pSVar1,DAT_005b1f0c);
  FUN_004280d0(&DAT_005b1f0c[2].query);
  DAT_005b2154 = *(undefined4 *)(param_1 + 0x14);
  FUN_004545f0(pSVar1);
  PlayerPower_LoadRates();
  pSVar1->think = PlayerDcb_Think;
  pSVar1->postThink = (void *)0x0;
  if (DAT_005b3398 == 0) {
    DAT_005b3398 = 1;
    if (*(code **)(g_ActiveRules + 0x94) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00454e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(g_ActiveRules + 0x94))();
      return;
    }
  }
  return;
}

