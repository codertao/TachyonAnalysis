
void FUN_004790e0(void)

{
  int iVar1;
  
  g_NextMode = g_StarbaseScreen;
  FUN_00439f70(&DAT_00583420,s_ImageJobsBg_0054e950);
  FUN_004788b0();
  FUN_00440c80();
  FUN_004e4b65(0);
  FUN_0048b6f0(0);
  if (((DAT_00563644 != 0) && (iVar1 = *(int *)(DAT_00563644 + 0x180), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    FUN_0043f620(&DAT_00583420,iVar1 + 0xcc,0x20000);
  }
  FUN_0046dd30(0,0);
  FUN_0046d870();
  return;
}

