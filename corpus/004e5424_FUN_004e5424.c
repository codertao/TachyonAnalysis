
undefined8 __fastcall
FUN_004e5424(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 in_EAX;
  
  DAT_00502914 = (param_3 & 0xff) << 0x10 | (param_4 & 0xff) << 8 | param_5 & 0xff;
  return CONCAT44(param_2,in_EAX);
}

