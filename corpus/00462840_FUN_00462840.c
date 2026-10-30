
void FUN_00462840(void)

{
  int iVar1;
  
  if ((g_FlightStateFlags & 2) == 0) {
    if ((((byte)DAT_005897e4 & 0x3f) != 0) && (iVar1 = FUN_004250c0(), iVar1 == 0)) {
      return;
    }
    FUN_00452180(1);
    FUN_00452460();
    FUN_004625a0();
    FUN_004624c0();
    FUN_0048cf10();
    FUN_00425080();
    FUN_00452150();
    FUN_004521c0();
    DAT_005a6520 = DAT_005a6520 + 1;
  }
  return;
}

