
/* read BASE_QUADRANT (0x5a5520) + REGION (0x5a5dd0) from ingame.cfg [INGAME] -> galaxy start
   location */

void Ingame_LoadBaseLocation(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Cbin_Open(param_1);
  if (iVar1 != 0) {
    Cbin_GetScalar(s_INGAME_0053486c,s_BASE_QUADRANT_0053f9f0,&DAT_005a5520,0x10,0);
    Cbin_GetScalar(s_INGAME_0053486c,s_REGION_0053f9e8,&DAT_005a5dd0,0x10,0);
    Cbin_Close();
    FUN_00435bf0(&DAT_005a5dd0);
    DAT_005a5dc8 = load_rtxt_bin(&DAT_005a5530,0xd100);
  }
  return;
}

