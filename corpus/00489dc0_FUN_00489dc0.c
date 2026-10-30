
void FUN_00489dc0(void)

{
  int iVar1;
  
  g_NextMode = g_StarbaseScreen;
  FUN_00439f70(&DAT_00583420,s_ImageWingBg_00559714);
  FUN_00440c80();
  FUN_0048a060();
  if (((DAT_0056c488 != 0) && (iVar1 = *(int *)(DAT_0056c488 + 0xd8), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    FUN_0043f620(&DAT_00583420,iVar1 + 0xcc,0x20000);
  }
  FUN_0048b6f0(0);
  FUN_004e4b65(0);
  FUN_0046dd30(0,0);
  return;
}

