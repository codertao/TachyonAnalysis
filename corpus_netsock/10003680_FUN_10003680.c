
void FUN_10003680(void)

{
  uint uVar1;
  uint uVar2;
  int iStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uVar2 = 0;
  FUN_100034a0(DAT_100198a8);
  while (DAT_100199bc == 0) {
    uVar1 = FUN_10005830();
    while (uVar1 != 0) {
      FUN_100052e0(DAT_10019c5c,DAT_10019c64,&iStack_c,(u_short *)&uStack_8,&uStack_4);
      if (iStack_c != 0) {
        FUN_10003630(iStack_c,(short)uStack_8);
      }
      uVar1 = FUN_10005830();
    }
    uVar2 = uVar2 + 1;
    if (0x32 < uVar2) {
      uVar2 = 0;
      FUN_100034a0(DAT_100198a8);
    }
    Sleep(0x14);
    FUN_100035f0();
  }
  DAT_100199b8 = 0;
  _endthread();
  return;
}

