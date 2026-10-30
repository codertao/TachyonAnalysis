
void FUN_00432f60(void)

{
  undefined1 local_10 [16];
  
  if (DAT_005b2b48 < 4) {
    DAT_005b2b48 = 4;
  }
  else if (0x18 < DAT_005b2b48) {
    DAT_005b2b48 = 0x18;
  }
  if (DAT_005b2b4c < 4) {
    DAT_005b2b4c = 4;
  }
  else if (0x18 < DAT_005b2b4c) {
    DAT_005b2b4c = 0x18;
  }
  FUN_0049e700(local_10,DAT_005b2b44,1,DAT_005b2b48);
  FUN_0049e6e0(1);
  FUN_00457700();
  if (DAT_005b2d08 != 0) {
    FUN_0049e790(DAT_005b2b40,local_10);
  }
  FUN_004a7590(0);
  return;
}

