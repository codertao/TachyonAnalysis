
/* sweep */

void BW_ApplyUpgradeTree(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar2 = BW_FindUpgradeTree(*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2));
  if (iVar2 != 0) {
    piVar5 = *(int **)(iVar2 + 4);
    iVar2 = *piVar5;
    piVar3 = piVar5;
    while (iVar2 != -1) {
      if ((piVar3[2] < 2) && (iVar2 == 1)) {
        uVar6 = uVar6 | 1 << ((byte)piVar3[1] & 0x1f);
      }
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 4;
      iVar2 = *piVar1;
    }
    clr_bytes(param_1 + 0x164,0x60);
    iVar2 = *piVar5;
    while (iVar2 != -1) {
      if ((piVar5[2] < 2) && (iVar2 == 0)) {
        uVar4 = WeaponDef_Get(piVar5[1],uVar6 & 0x100000);
        BW_GiveWeaponIfAllowed(param_1,uVar4);
      }
      piVar3 = piVar5 + 4;
      piVar5 = piVar5 + 4;
      iVar2 = *piVar3;
    }
    *(uint *)(param_1 + 0x158) = uVar6;
  }
  return;
}

