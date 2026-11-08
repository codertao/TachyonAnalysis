
void FUN_00458200(void)

{
  int iVar1;
  
  clr_bytes(&DAT_0058f2e0,0xc);
  iVar1 = Cbin_Open(s_race_cfg_00548db8);
  if (iVar1 != 0) {
    FUN_00457fa0();
    FUN_004581d0();
    return;
  }
  return;
}

