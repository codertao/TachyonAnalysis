
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* first-time starbase setup: backdrop, vars.cfg, tachyon.mnu, Starbase_LoadConfig, sbf */

undefined4 Starbase_Init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004455f0();
  if (GLBL_UI_ELEM_LIST == 0) {
    Bdf_LoadBackdrop(&DAT_00587a24);
    FUN_0046f100();
    iVar1 = VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&g_PlayerVarStore,0xa101,1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0046ffd0(&GLBL_UI_ELEM_LIST,s_cbStarBaseHover_0054b0d0);
    uVar2 = FUN_00469830(&GLBL_UI_ELEM_LIST);
    uVar2 = FUN_0046f550(uVar2);
    iVar1 = FUN_00439560(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00439610(s_tachyon_mnu_0054e744,&GLBL_UI_ELEM_LIST);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_00469830(&GLBL_UI_ELEM_LIST);
    iVar1 = Starbase_LoadConfig(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
    set_some_glbl_scalar(GLBL_spacesav[0x53]);
    _DAT_005833e8 = 0xff;
    _DAT_005833ec = 0xffffffff;
    _DAT_005833f0 = 0;
    if (DAT_005a673c != 0) {
      FUN_0046f4c0();
      DAT_005a6148 = g_PlayerVarStore;
    }
    iVar1 = FUN_00432b70(1);
    if (iVar1 == 0) {
      FUN_00471610();
      return 0;
    }
  }
  return 1;
}

