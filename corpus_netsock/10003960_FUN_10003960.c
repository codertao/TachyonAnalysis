
void FUN_10003960(void)

{
  uint uVar1;
  int iStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  while (DAT_100199e8 == 0) {
    uVar1 = FUN_10005830();
    while (uVar1 != 0) {
      FUN_100052e0(DAT_10019c5c,DAT_10019c64,&iStack_c,(u_short *)&uStack_8,&uStack_4);
      if (iStack_c != 0) {
        FUN_10003840(iStack_c,(short)uStack_8);
      }
      uVar1 = FUN_10005830();
    }
    FUN_10003770(DAT_100199e0);
    if (DAT_100199e8 != 0) break;
    Sleep(1000);
  }
  if (DAT_10019af0 != 0) {
    DAT_100199e4 = 0;
  }
  _endthread();
  return;
}

