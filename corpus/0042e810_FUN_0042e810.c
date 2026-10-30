
void FUN_0042e810(void)

{
  int iVar1;
  
  FUN_004b5620(0x20);
  FUN_0049e8b0();
  FUN_00468690(1);
  if (DAT_005b00b0 == 0) {
    FUN_0042e780();
  }
  FUN_00430320();
  FUN_004af290(0x28);
  FUN_0041c3e0(0);
  FUN_0042e460(DAT_005b3300);
  FUN_0042e6e0();
  if (DAT_005b00bc == 0) {
    DAT_005b00b4 = FUN_0042e700(0,DAT_005b0080);
    FUN_0042e700(*(int *)(DAT_005b0080 + 0x30) << 2,DAT_005b0080);
    iVar1 = DAT_005b0080;
  }
  else {
    DAT_005b00b4 = FUN_0042e700(0,DAT_005b008c);
    FUN_0042e700(*(int *)(DAT_005b008c + 0x30) << 2,DAT_005b008c);
    iVar1 = DAT_005b008c;
  }
  FUN_0042e700(*(int *)(iVar1 + 0x30) * -4,iVar1);
  FUN_0045c500(DAT_005b00b0,DAT_005b00b4,0xf1,&LAB_0042e220,1,0x50000);
  FUN_0045c670(0xffffffff,0xfffe0000,0,1);
  return;
}

