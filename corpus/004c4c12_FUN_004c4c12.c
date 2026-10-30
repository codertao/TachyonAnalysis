
void FUN_004c4c12(void)

{
  if ((DAT_00564f74 == 1) || ((DAT_00564f74 == 0 && (DAT_005615d8 == 1)))) {
    FUN_004c4c4b(0xfc);
    if (DAT_005652ac != (code *)0x0) {
      (*DAT_005652ac)();
    }
    FUN_004c4c4b(0xff);
  }
  return;
}

