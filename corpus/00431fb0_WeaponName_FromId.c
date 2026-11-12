
/* sweep */

void WeaponName_FromId(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = WeaponDef_Get(param_1);
  Rtxt_GetText(DAT_005a6140,*(undefined4 *)(iVar1 + 0x4c));
  return;
}

