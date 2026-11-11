
/* OR of g_ShipSystemTable bits whose installed var is nonzero (SP join -> connection +0x158) */

uint Systems_GetInstalledBits(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  if (g_ShipSystemTable != (undefined *)0x0) {
    puVar3 = &DAT_005361c0;
    do {
      if (*(int *)puVar3[-1] != 0) {
        uVar2 = uVar2 | *puVar3;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 3;
    } while (*puVar1 != 0);
  }
  return uVar2;
}

