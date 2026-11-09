
int FUN_10004c00(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_10004b30();
  if (iVar1 == 0) {
    uVar2 = FUN_10004af0();
    if (DAT_10019858 != 0) {
      iVar1 = FUN_10004bd0();
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = FUN_10004b90();
    }
    if ((int)uVar2 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    DAT_1001985c = uVar2 + 10;
    DAT_10019854 = (int)malloc(DAT_1001985c);
    if ((void *)DAT_10019854 == (void *)0x0) {
      return 0x271e;
    }
    DAT_100096b8 = 0;
    iVar1 = 0;
  }
  return iVar1;
}

