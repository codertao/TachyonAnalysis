
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004359c0(void)

{
  int iVar1;
  
  FUN_0048e380(&DAT_005a5520,0x910);
  FUN_00434460(1);
  Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xd100);
  iVar1 = DAT_005a6540;
  if (DAT_005a6540 == 0) {
    iVar1 = FUN_00435930(s_PLAYER_MAIN_VARS_00534198,s_PLAYER_SIDE_0053f968);
  }
  _DAT_0058b074 = iVar1;
  DAT_005a5df4 = iVar1;
  DAT_005a5df0 = FUN_004580a0(iVar1);
  FUN_00434510();
  FUN_0048e1d0();
  return;
}

