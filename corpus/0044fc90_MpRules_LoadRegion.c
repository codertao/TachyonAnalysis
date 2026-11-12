
/* sweep: NOVAWORLD */

void MpRules_LoadRegion(void)

{
  undefined4 uVar1;
  
  DAT_00590d68 = DAT_0058f4e4;
  uVar1 = MpRegion_Clamp(DAT_0058f4e4);
  MpRules_IsGameTypeValid(uVar1);
  DAT_00590238 = GameType_FindIndex(&DAT_00590218);
  Var_LookupEquate(s_REGION_NAMES_00534294,s_NOVAWORLD_0054854c,&DAT_005a5dcc);
  Region_FindByName(DAT_005a5dcc);
  DAT_005a5dc8 = load_rtxt_bin(&DAT_005a5530,0xd100);
  Mem_SetTag(DAT_005a5dc8,&DAT_005a5530);
  (**(code **)(DAT_00590238 + 8))(&DAT_005a64e4);
  if (*(int *)(DAT_00590238 + 0x14) != 0) {
    *(int *)(g_ActiveRules + 0x1c) = *(int *)(DAT_00590238 + 0x14);
  }
  if (*(int *)(DAT_00590238 + 0x18) != 0) {
    *(int *)(g_ActiveRules + 0x3c) = *(int *)(DAT_00590238 + 0x18);
  }
  Spx_LoadSectorTop(&DAT_00590208);
  if (*(code **)(DAT_00590238 + 0x50) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x50))();
  }
  Nop();
  return;
}

