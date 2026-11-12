
/* sweep */

undefined * Loadout_WeaponLabel(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == -1) {
    return &DAT_0053f234;
  }
  puVar1 = (undefined *)WeaponName_FromId(param_1);
  return puVar1;
}

