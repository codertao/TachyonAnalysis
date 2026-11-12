
/* sweep */

void WeaponDefs_ResolveModels(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (g_WeaponDefs[0].id != 0x26) {
    piVar4 = &g_WeaponDefs[0].modelSlot;
    do {
      if ((piVar4[0xf] != 0) && (iVar2 = Model_GetAttachCount(*(undefined4 *)*piVar4), iVar2 != 0))
      {
        puVar3 = (undefined4 *)Pak_GetAttachPoint(*(undefined4 *)*piVar4,0);
        piVar4[0x13] = *puVar3;
        piVar4[0x14] = puVar3[1];
        piVar4[0x15] = puVar3[2];
      }
      piVar1 = piVar4 + 0x27;
      piVar4 = piVar4 + 0x44;
    } while (*piVar1 != 0x26);
  }
  return;
}

