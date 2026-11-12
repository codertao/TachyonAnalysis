
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Flight_Enter scene setup: init server pools, load vars.cfg, set up world; called by Flight_Enter
    */

void Flight_SceneSetup(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [22];
  
  DAT_006691e4 = 0;
  g_MissionEndReason = 0;
  Wingman_ClearSlots();
  Mem_DumpAllPoolsToFile(s_menumem_txt_005496c4);
  puVar2 = &DAT_005897e0;
  for (iVar1 = 0x62b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_58;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  clr_bytes(&g_MissionEndFlag,0xc);
  NetSrv_RegisterGameCallbacks(local_58);
  Mem_AllocZeroTagged(&DAT_0058b084,DAT_005897e0 * 6,4,s_SCORE_BUFFER_005496b4,0xbbbb);
  Nop();
  Server_InitDcbPools();
  Rng_WarmUp();
  if (g_CurrentSavPath == '\0') {
    g_CurrentSavPath = s_player00_sav_005496a4[0];
    g_CurrentSavPath_1._0_1_ = s_player00_sav_005496a4[1];
    g_CurrentSavPath_1._1_1_ = s_player00_sav_005496a4[2];
    g_CurrentSavPath_1._2_1_ = s_player00_sav_005496a4[3];
    DAT_005a6684 = s_player00_sav_005496a4[4];
    DAT_005a6684_1._0_1_ = s_player00_sav_005496a4[5];
    DAT_005a6684_1._1_1_ = s_player00_sav_005496a4[6];
    DAT_005a6684_1._2_1_ = s_player00_sav_005496a4[7];
    DAT_005a6688 = s_player00_sav_005496a4[8];
    DAT_005a6688_1._0_1_ = s_player00_sav_005496a4[9];
    DAT_005a6688_1._1_1_ = s_player00_sav_005496a4[10];
    DAT_005a6688_1._2_1_ = s_player00_sav_005496a4[0xb];
    DAT_005a668c = s_player00_sav_005496a4[0xc];
  }
  VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&DAT_005a6148,0xbbbb,1);
  Nop();
  Races_Init();
  AiShip_ResetGlobals();
  Nop();
  Nop(s_gamelog_txt_00549698);
  Rules_Init();
  Flight_InitServerUi();
  Flight_LoadAssetsIfClient();
  Sp_ApplyDifficulty(GLBL_spacesav[0x2f]);
  Mem_CountTagged(0xffff,0xbbbb);
  return;
}

