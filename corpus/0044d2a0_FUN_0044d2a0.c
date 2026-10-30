
void FUN_0044d2a0(void)

{
  int iVar1;
  
  if (DAT_005912e0 != 0) {
    DAT_00562cc0 = DAT_00562cc0 + -1;
    if (DAT_00562cc0 < 1) {
      DAT_00562cc0 = 0x19;
      FUN_0044d1e0();
    }
    thunk_FUN_004a9cf0();
    thunk_FUN_004aa420();
    iVar1 = FUN_004a6d90(&DAT_00591630);
    if ((iVar1 == 0) && (DAT_0055e3f0 != 0)) {
      FUN_0044cab0(0);
    }
    FUN_0044d090();
    return;
  }
  return;
}

