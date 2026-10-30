
void FUN_0048a490(void)

{
  int iVar1;
  
  if (DAT_0056c488 != 0) {
    iVar1 = FUN_00469330();
    if (DAT_0056c488 == iVar1) {
      FUN_0043ce50(&DAT_00583420,s_BtnWingHire_005596c0,8);
      Ui_SetButtonFlag(&DAT_00583420,s_BtnWingHire_005596c0,0x80000);
      FUN_0043ce50(&DAT_00583420,s_BtnWingFire_005596cc,1);
      FUN_0043c150(&DAT_00583420,s_BtnWingFire_005596cc,0x80000);
    }
  }
  FUN_0048a620();
  FUN_0048a0c0();
  return;
}

