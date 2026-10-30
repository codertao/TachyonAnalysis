
undefined8 __fastcall FUN_004e53d6(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_EAX;
  
  if (DAT_00604488 == 0x20) {
    FUN_004e4b74(5);
  }
  else if (DAT_00604488 == 0x10) {
    FUN_004e4b74(3);
  }
  else if (param_3 == 0) {
    FUN_004e4b74(1);
  }
  else {
    FUN_004e4b74(2);
  }
  return CONCAT44(param_2,in_EAX);
}

