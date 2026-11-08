
void FUN_00493a50(void)

{
  clr_bytes(&DAT_00565460,0x340);
  clr_bytes(&DAT_005653c0,0x54);
  clr_bytes(&DAT_00565420,0x40);
  FUN_00493650();
  FUN_004936c0();
  DAT_00565798 = Ent_CreateType0a(s_weapon_desc_0055d4fc,0xffffffff,0);
  return;
}

