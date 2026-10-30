
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00470050(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004455f0();
  if (DAT_00583420 == 0) {
    Bdf_LoadBackdrop(&DAT_00587a24);
    FUN_0046f100();
    iVar1 = VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&g_PlayerVarStore,0xa101,1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0046ffd0(&DAT_00583420,s_cbStarBaseHover_0054b0d0);
    uVar2 = FUN_00469830(&DAT_00583420);
    uVar2 = FUN_0046f550(uVar2);
    iVar1 = FUN_00439560(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00439610(s_tachyon_mnu_0054e744,&DAT_00583420);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_00469830(&DAT_00583420);
    iVar1 = FUN_0046c700(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00450770(&DAT_005b2b78,&DAT_005b2b88);
    FUN_004b55f0(DAT_005b2d0c);
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

