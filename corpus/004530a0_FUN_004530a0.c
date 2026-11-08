
void FUN_004530a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005b20d4;
  iVar1 = (&DAT_005b20d4)[param_1];
  if (1 < DAT_005b20d0) {
    if (DAT_005b20d0 == 2) {
      DAT_005b20d4 = DAT_005b20d8;
      DAT_005b20d8 = uVar2;
    }
    else {
      (&DAT_005b20d4)[param_1] = iVar1 + 1U;
      if (DAT_005b20d0 <= iVar1 + 1U) {
        (&DAT_005b20d4)[param_1] = 0;
      }
    }
    if (iVar1 != (&DAT_005b20d4)[param_1]) {
      FUN_00497cb0(GLBL_SOME_CONTEXT,&DAT_005b1f10 + iVar1 * 0xe,&DAT_005b20e0);
      FUN_00466590(1,10,0,0xff);
    }
  }
  return;
}

