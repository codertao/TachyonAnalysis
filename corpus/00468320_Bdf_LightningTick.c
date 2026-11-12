
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Bdf_LightningTick(void)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_005b9084 != 0) && (*(int *)(DAT_005b9084 + 0xd8) != 0)) && (DAT_005b9094 == 0)) {
    uVar1 = global_bad_shift_rng();
    if (uVar1 % 1000 < 5) {
      uVar1 = global_bad_shift_rng();
      Snd_Play2D(7,5,0,(uVar1 & 99) + 0x10);
      uVar1 = global_bad_shift_rng();
      DAT_005b908c = uVar1 % 0xc + 0xc;
      _DAT_005b9090 = global_bad_shift_rng();
      _DAT_005b9090 = _DAT_005b9090 & 0xf;
      Hud_SetJamming(DAT_005b908c * 2,0xff);
    }
    if (DAT_005b908c != 0) {
      DAT_005b908c = DAT_005b908c + -1;
      uVar1 = global_bad_shift_rng();
      DAT_005b9088 = (uVar1 % 0x9c + 100) * 0x10000;
    }
    if (DAT_005b9088 >> 0x10 != *(int *)(DAT_005b9084 + 0x34)) {
      iVar2 = *(int *)(DAT_005b9084 + 0x34) * 0x10000 - DAT_005b9088;
      if (0x60000 < iVar2) {
        DAT_005b9088 = DAT_005b9088 + 0x60000;
        DAT_00668f8c = DAT_005b9088 >> 8;
        return;
      }
      if (iVar2 < -0x60000) {
        iVar2 = -0x60000;
      }
      DAT_005b9088 = DAT_005b9088 + iVar2;
      DAT_00668f8c = DAT_005b9088 >> 8;
    }
  }
  return;
}

