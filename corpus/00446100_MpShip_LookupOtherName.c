
/* sweep */

void MpShip_LookupOtherName(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (DAT_005a3160 != 0)) {
    iVar1 = Rtxt_LookupSafe(DAT_005a3160,s_OTHER_SHIP_NAMES_00533a5c,param_1);
    if (iVar1 != 0) {
      str_sprintf(param_2,&DAT_00536768,iVar1);
      return;
    }
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}

