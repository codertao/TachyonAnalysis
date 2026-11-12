
/* sweep */

void Teletype_ResetAll(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    Teletype_ResetSlot(uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

