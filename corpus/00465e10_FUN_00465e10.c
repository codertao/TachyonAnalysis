
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465e10(int param_1,int param_2)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = DAT_005897b0;
  if (param_2 != -1) {
    iVar1 = GLBL_spacesav[0x54];
  }
  local_8 = (ulonglong)(iVar1 - 0x28);
  DAT_005897b8 = 0x14;
  local_8._0_4_ =
       (undefined4)
       (longlong)ROUND(((float)local_8 * _DAT_0052eb84 + _DAT_0052e594) * (float)param_2);
  _DAT_005897bc = (undefined4)local_8;
  if (DAT_005897b4 < param_1) {
    DAT_005897b4 = param_1;
  }
  return;
}

