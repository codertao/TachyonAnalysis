
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_004e9720(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  
  DAT_004e96e0 = in_EAX - param_1;
  if (DAT_004e96e0 < 0) {
    DAT_004e96e0 = -DAT_004e96e0;
  }
  _DAT_004e96f8 = unaff_EBX - param_2;
  if (_DAT_004e96f8 < 0) {
    _DAT_004e96f8 = -_DAT_004e96f8;
  }
  DAT_004e96e4 = _DAT_004e96f8;
  DAT_004e96d0 = in_EAX;
  DAT_004e96d4 = param_1;
  DAT_004e96d8 = unaff_EBX;
  DAT_004e96dc = param_2;
  if (_DAT_004e96f8 < DAT_004e96e0) {
    _DAT_004e96f8 = DAT_004e96e0;
    iVar1 = DAT_0060448c;
    if (param_1 <= in_EAX) {
      DAT_004e96d0 = param_1;
      DAT_004e96d4 = in_EAX;
      DAT_004e96d8 = param_2;
      DAT_004e96dc = unaff_EBX;
    }
  }
  else {
    iVar1 = DAT_00604490;
    if (param_2 <= unaff_EBX) {
      DAT_004e96d0 = param_1;
      DAT_004e96d4 = in_EAX;
      DAT_004e96d8 = param_2;
      DAT_004e96dc = unaff_EBX;
    }
  }
  return CONCAT44(iVar1,DAT_004e96d0 * DAT_0060448c);
}

