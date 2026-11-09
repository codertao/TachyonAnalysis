
void FUN_10003e90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if (puVar1[0x27] != 0) {
        FUN_10004490(puVar1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x2f;
    } while (uVar2 < DAT_100198b8);
  }
  return;
}

