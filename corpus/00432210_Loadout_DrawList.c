
/* sweep */

void Loadout_DrawList(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_80 [128];
  
  iVar3 = 0;
  iVar2 = 0x90;
  puVar1 = &DAT_005a68d4;
  if (0 < DAT_005a6a54) {
    do {
      bVar4 = iVar3 != DAT_005a6a58;
      Loadout_FormatItem(puVar1,local_80);
      Text_DrawAligned(local_80,DAT_005a68c0,0x2c,iVar2,(bVar4 - 1 & 0xff40ff41) + 0xffffff,0xffff,
                       0x10000,2);
      iVar2 = iVar2 + DAT_005a68d0;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 3;
    } while (iVar3 < DAT_005a6a54);
  }
  return;
}

