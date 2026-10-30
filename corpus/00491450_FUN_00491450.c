
void FUN_00491450(void)

{
  int iVar1;
  
  iVar1 = DAT_0056589c;
  while( true ) {
    if (DAT_00565a34._2_1_ == '\0') {
      if (iVar1 < 0x81) {
        DAT_0056589c = 0x9f;
        return;
      }
      DAT_0056589c = iVar1 + -1;
      return;
    }
    DAT_00563e58 = DAT_00563e58 + 1;
    DAT_0056589c = DAT_005b9014 + -1;
    if (DAT_0056589c < DAT_00563e58) {
      DAT_0056589c = 0xffffffff;
      return;
    }
    if (0 < iVar1) {
      DAT_0056589c = iVar1 + -1;
    }
    if ((&DAT_005b3a38)[DAT_0056589c * 0x44] == '\0') {
      FUN_00491450();
    }
    if ((DAT_00565a38 == '\0') && (DAT_0056589c == DAT_00565890)) {
      FUN_00491450();
    }
    if (*(code **)(DAT_005b1dc4 + 0x90) == (code *)0x0) break;
    if (DAT_00565a34._3_1_ != '\0') {
      return;
    }
    iVar1 = (**(code **)(DAT_005b1dc4 + 0x90))();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = DAT_0056589c;
    if ((&DAT_005b3a60)[DAT_0056589c * 0x11] == DAT_005b3a24) {
      return;
    }
  }
  return;
}

