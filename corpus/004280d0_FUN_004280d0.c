
void FUN_004280d0(int param_1)

{
  int iVar1;
  
  if (DAT_005b00c0 == 0) {
    iVar1 = FUN_0042dd00(param_1);
    if ((iVar1 == 0) || (param_1 == 0)) {
      FUN_0042dd00(s_GALSPAN_HUD_00536744);
    }
    FUN_00427d90();
    FUN_00427b30(&DAT_005b01e0);
    FUN_004277a0(1);
    FUN_00427ef0();
    FUN_00450ba0();
    DAT_005b00c0 = 1;
  }
  return;
}

