
void FUN_0047e7c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_REGION_0053fc08,&local_4);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_SECTOR_0053fbf4,&local_8);
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_REGION_00552710,0xffffffff);
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_SECTOR_00552700,0xffffffff);
  iVar1 = FUN_0047a900(local_4,local_8);
  if (iVar1 != 0) {
    iVar2 = FUN_0047a6d0(DAT_0057132c,DAT_00571328,*(undefined4 *)(iVar1 + 0x8c),
                         *(undefined4 *)(iVar1 + 0x88));
    if (iVar2 != 0) {
      FUN_0047a3a0(&DAT_005713e0);
      FUN_0047c0f0(iVar1,0);
      goto LAB_0047e894;
    }
  }
  FUN_0046e980();
  FUN_0047c0f0(0,0);
LAB_0047e894:
  if (DAT_00571340 != 0) {
    FUN_004376f0(local_4,local_8,*(undefined4 *)(DAT_0058b064 + 100));
    if (DAT_005b2c8c == 1) {
      DAT_005b2c8c = 2;
    }
  }
  return;
}

