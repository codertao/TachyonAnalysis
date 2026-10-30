
void FUN_00420da0(int param_1)

{
  if (param_1 == 0) {
    FUN_00430210(&PTR_DAT_0053e760);
    FUN_004250f0(1,0);
  }
  else if (param_1 == 1) {
    FUN_00430210(&PTR_DAT_0053e780);
    FUN_004250f0(6,0);
    g_MissionEndFlag = 1;
    DAT_005b7e38 = 1;
    FUN_00466590(0x11,0,0,0xff);
    return;
  }
  FUN_00466590(0x11,0,0,0xff);
  return;
}

