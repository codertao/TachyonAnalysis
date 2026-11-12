
/* sweep */

undefined * Loadout_SystemLabel(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == -1) {
    return &DAT_0053f234;
  }
  puVar1 = (undefined *)Systems_NameForBit(param_1);
  return puVar1;
}

