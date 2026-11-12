
/* sweep */

void Loadout_AddSystems(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(DAT_005b1f0c + 0x63c) != 0) {
    do {
      Loadout_AddItem(2,0xffffffff,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(DAT_005b1f0c + 0x63c));
  }
  uVar2 = 0;
  do {
    iVar3 = 1 << ((byte)uVar2 & 0x1f);
    iVar1 = Bits_Test(iVar3,DAT_005b2154);
    if (iVar1 != 0) {
      Loadout_FindSystemSlot(uVar2,iVar3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return;
}

