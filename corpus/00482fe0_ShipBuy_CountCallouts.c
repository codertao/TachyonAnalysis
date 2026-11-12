
/* sweep: guess */

char * ShipBuy_CountCallouts(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = &DAT_0056fac0;
  uVar2 = 0;
  do {
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 0x16c;
  } while (uVar2 < 0x10);
  return (char *)0x0;
}

