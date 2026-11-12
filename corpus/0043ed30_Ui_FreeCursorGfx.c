
/* sweep */

void Ui_FreeCursorGfx(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  Vid_SetFlag_602328(0);
  Vid_SetFlag_60232c(0);
  Input_SetVar3e6c(0);
  if (DAT_005a5504 == 1) {
    if (DAT_005a5484 != 0) {
      OurFreeMem(DAT_005a5484);
    }
    puVar2 = &DAT_005a5480;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    Ui_HideCursor();
  }
  return;
}

