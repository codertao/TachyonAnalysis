
/* sweep: guess */

void MpRules_CopyLoadout(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x164);
  psVar4 = (short *)(param_2 + 0x58);
  iVar2 = 8;
  do {
    if (*psVar4 == 0) {
      *puVar3 = 0;
    }
    else {
      uVar1 = WeaponDef_Get(*psVar4 + -1);
      *puVar3 = uVar1;
      uVar1 = WeaponDef_GetSafe(uVar1,*(uint *)(param_2 + 0x54) & 0x100000);
      puVar3[1] = uVar1;
    }
    psVar4 = psVar4 + 1;
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

