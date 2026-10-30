
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_004ec020(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 in_EAX;
  
  _DAT_004ec070 = param_3;
  _DAT_004ec074 = param_4;
  DAT_004e4adc = (uint)*(byte *)(param_3 + 2);
  DAT_004e4ae0 = (uint)*(byte *)((int)param_3 + 9);
  DAT_004ec08c = *param_3;
  return CONCAT44(param_2,in_EAX);
}

