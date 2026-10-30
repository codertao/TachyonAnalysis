
undefined8 __fastcall
FUN_004e42db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            byte *param_5,int param_6)

{
  undefined4 in_EAX;
  int iVar1;
  byte *pbVar2;
  
  DAT_004e3033 = param_6;
  DAT_004e3007 = param_3;
  DAT_004e3037 = param_4;
  DAT_004e303b = param_5;
  FUN_004e4168();
  iVar1 = DAT_004e3033;
  pbVar2 = DAT_004e303b;
  do {
    *pbVar2 = (&DAT_00603484)[*pbVar2];
    pbVar2 = pbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return CONCAT44(param_2,in_EAX);
}

