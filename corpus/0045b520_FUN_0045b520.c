
void FUN_0045b520(void)

{
  code *pcVar1;
  
  if (DAT_0058f1c0 != 0) {
    pcVar1 = *(code **)(DAT_0058f1c0 + 0x13c);
    FUN_0045b430(DAT_0058f1c0);
    FUN_004107c0(0,0);
    DAT_0058f1d8 = 0;
    DAT_0058f1d4 = 0;
    FUN_004103b0();
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  return;
}

