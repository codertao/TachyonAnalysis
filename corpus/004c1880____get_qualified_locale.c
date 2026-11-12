
/* CRT */

undefined4 ___get_qualified_locale(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_00565194 == (code *)0x0) {
    iVar1 = _IsThisWindowsNT();
    if (iVar1 == 0) {
      DAT_00565194 = _crtGetLocaleInfoA;
    }
    else {
      DAT_00565194 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_00565184 = param_1;
    if (*param_1 != '\0') {
      _TranslateName(&PTR_s_american_00561f80,0x40,&DAT_00565184);
    }
    DAT_00565188 = param_1 + 0x40;
    if ((DAT_00565188 != (char *)0x0) && (*DAT_00565188 != '\0')) {
      _TranslateName(&PTR_s_america_00561ec8,0x16,&DAT_00565188);
    }
    DAT_0056518c = 0;
    if ((DAT_00565184 != (char *)0x0) && (*DAT_00565184 != '\0')) {
      if ((DAT_00565188 == (char *)0x0) || (*DAT_00565188 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      goto LAB_004c193d;
    }
    if ((DAT_00565188 != (char *)0x0) && (*DAT_00565188 != '\0')) {
      _GetLcidFromCountry();
      goto LAB_004c193d;
    }
  }
  _GetLcidFromDefault();
LAB_004c193d:
  if ((((DAT_0056518c == 0) || (uVar2 = _ProcessCodePage(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_00565174,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_00565174;
    param_2[1] = (undefined2)DAT_00565190;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_00565194)(DAT_00565174,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_00565194)(DAT_00565190,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    __itoa(uVar2,param_3 + 0x80,10);
  }
  return 1;
}

