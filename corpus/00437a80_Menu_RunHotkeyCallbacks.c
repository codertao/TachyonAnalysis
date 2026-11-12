
/* sweep */

void Menu_RunHotkeyCallbacks(void)

{
  int *piVar1;
  int *piVar2;
  
  if ((DAT_00562bd0 == 0) && (DAT_0053fc50 != 0)) {
    piVar2 = &DAT_0053fc54;
    do {
      if ((*piVar2 != 0) && ((code *)piVar2[1] != (code *)0x0)) {
        (*(code *)piVar2[1])();
        *piVar2 = 0;
      }
      piVar1 = piVar2 + 2;
      piVar2 = piVar2 + 3;
    } while (*piVar1 != 0);
  }
  return;
}

