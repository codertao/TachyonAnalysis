
void FUN_004862a0(void)

{
  FUN_004850b0();
  FUN_00440460(&DAT_00583420,s_SNDEVNT_CHANGE_SHIPS_00557b3c);
  if (*(int *)(DAT_0056e3a8 + 0xd0) != 0) {
    FUN_0043ce50(&DAT_00583420,s_BtnShipYardConfig_00557a94,1);
    return;
  }
  FUN_0043ce50(&DAT_00583420,s_BtnShipYardConfig_00557a94,8);
  return;
}

