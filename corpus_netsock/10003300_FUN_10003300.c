
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003300(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  u_short uStack_a;
  int iStack_8;
  uint uStack_4;
  
  DVar1 = timeGetTime();
  uVar5 = 1;
  while (DAT_10019b40 == 0) {
    uVar2 = FUN_10005830();
    while (uVar2 != 0) {
      FUN_100052e0(DAT_10019c5c,DAT_10019c64,&iStack_8,&uStack_a,&uStack_4);
      if (DAT_10019ca2 != 0) {
        iVar3 = rand();
        uVar5 = iVar3 >> 4 & DAT_10019ca2;
      }
      if ((iStack_8 != 0) && (uVar5 != 0)) {
        FUN_10002f50(iStack_8);
      }
      uVar2 = FUN_10005830();
    }
    FUN_10003290();
    if (DAT_10019b4c != 0) {
      FUN_100031a0();
    }
    if (DAT_10019bf8 != 0) {
      FUN_100031c0();
    }
    if (DAT_10019c10 != 0) {
      FUN_10003210();
    }
    DVar4 = timeGetTime();
    if ((((DVar1 + 1000 < DVar4) &&
         (DAT_10019c50 = DAT_10019c50 + 1, DVar1 = DVar4, 0xf < DAT_10019c50)) &&
        (DAT_10019c54 == 0)) && (DAT_10019c58 = DAT_10019c58 + 1, 0xe < DAT_10019c58)) {
      DAT_10019c58 = 0;
      FUN_10003260(DAT_10019c50);
    }
    FUN_100020d0(DVar4);
    if ((0x78 < DAT_10019c50) && (DAT_10019c54 == 0)) {
      FUN_10002f20();
    }
    Sleep(10);
  }
  FUN_10003ad0((int *)&DAT_10019c24);
  FUN_10003ad0((int *)&DAT_10019c38);
  _DAT_10019b44 = 0;
  _endthread();
  return;
}

