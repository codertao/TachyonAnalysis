
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_004e8c40(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  
  DAT_004e8c28 = in_EAX - param_1;
  if (DAT_004e8c28 < 0) {
    DAT_004e8c28 = -DAT_004e8c28;
  }
  _DAT_004e8c38 = unaff_EBX - param_2;
  if (_DAT_004e8c38 < 0) {
    _DAT_004e8c38 = -_DAT_004e8c38;
  }
  DAT_004e8c2c = _DAT_004e8c38;
  DAT_004e8c18 = in_EAX;
  DAT_004e8c1c = param_1;
  DAT_004e8c20 = unaff_EBX;
  DAT_004e8c24 = param_2;
  if (_DAT_004e8c38 < DAT_004e8c28) {
    _DAT_004e8c38 = DAT_004e8c28;
    iVar1 = DAT_0060448c;
    if (param_1 <= in_EAX) {
      DAT_004e8c18 = param_1;
      DAT_004e8c1c = in_EAX;
      DAT_004e8c20 = param_2;
      DAT_004e8c24 = unaff_EBX;
    }
  }
  else {
    iVar1 = DAT_00604490;
    if (param_2 <= unaff_EBX) {
      DAT_004e8c18 = param_1;
      DAT_004e8c1c = in_EAX;
      DAT_004e8c20 = param_2;
      DAT_004e8c24 = unaff_EBX;
    }
  }
  return CONCAT44(iVar1,DAT_004e8c18 * DAT_0060448c);
}

