
/* alloc player-control/viewpoint DCB (g_PlayerCtrlDcb 0x5b3300 from client pool 0x5b3288); seed pos
   +0x34 and vel +0x4c from spawn desc (param+0x18 pos, param+0x24 vel); link to player ship
   g_PlayerShip (+0x8c); set render +0x70 */

void PlayerDcb_Init(int param_1)

{
  int iVar1;
  
  if (GLBL_SOME_CONTEXT == 0) {
    GLBL_SOME_CONTEXT = DcbPool_Alloc(&DAT_005b3288,1,&DAT_005b31c0);
  }
  iVar1 = GLBL_SOME_CONTEXT;
  FUN_0041b850(GLBL_SOME_CONTEXT);
  clr_bytes(&DAT_005b1e80,0x2d8);
  *(undefined2 *)(iVar1 + 0x74) = 1;
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x2c);
  DAT_005b39d4 = *(undefined4 *)(param_1 + 0x18);
  DAT_005b39d8 = *(undefined4 *)(param_1 + 0x1c);
  DAT_005b39dc = *(undefined4 *)(param_1 + 0x20);
  DAT_005b39e0 = *(undefined4 *)(param_1 + 0x24);
  DAT_005b39e4 = *(undefined4 *)(param_1 + 0x28);
  DAT_005b39e8 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 **)(iVar1 + 0x70) = &LAB_00452d10;
  *(code **)(iVar1 + 0x5c) = FUN_00452e40;
  *(undefined4 *)(iVar1 + 0x18) = 0xc0;
  *(int *)(iVar1 + 0x60) = iVar1;
  *(undefined4 *)(iVar1 + 0x28) = DAT_00666afc;
  FUN_004101c0(iVar1,1);
  FUN_00424dd0();
  FUN_00454870(param_1,&DAT_005b1f0c,&DAT_005b1f10);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  *(int *)(iVar1 + 0x8c) = DAT_005b1f0c;
  FUN_004549d0();
  FUN_0049c630(0xffff,0xcccc);
  FUN_00463790(iVar1,DAT_005b1f0c);
  FUN_004280d0(DAT_005b1f0c + 0x160);
  DAT_005b2154 = *(undefined4 *)(param_1 + 0x14);
  FUN_004545f0(iVar1);
  PlayerPower_LoadRates();
  *(code **)(iVar1 + 0x68) = PlayerDcb_Think;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
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

