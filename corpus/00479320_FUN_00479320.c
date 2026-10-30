
void FUN_00479320(void)

{
  int iVar1;
  
  FUN_0043bf10(&DAT_00583420,s_JOB_CONTRACT_BROKEN_005522ac);
  iVar1 = Job_FindActive();
  if (iVar1 != 0) {
    FUN_0043ce50(&DAT_00583420,s_BtnJobAccept_00552170,1);
    FUN_0043c150(&DAT_00583420,s_BtnJobAccept_00552170,0x80000);
    FUN_0043ce50(&DAT_00583420,s_BtnJobBreak_00552180,8);
    Ui_SetButtonFlag(&DAT_00583420,s_BtnJobBreak_00552180,0x80000);
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,0);
    FUN_00468ff0(*(undefined4 *)(iVar1 + 0x134),*(undefined4 *)(iVar1 + 0x138));
    FUN_00478b90();
    FUN_00478930();
  }
  FUN_0046ae30();
  return;
}

