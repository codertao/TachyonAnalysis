
undefined8 __fastcall FUN_004e4b74(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_EAX;
  
  if (param_3 == 1) {
    DAT_004e4860 = &PTR_LAB_00521fd0;
    DAT_004e4864 = 0;
  }
  else if (param_3 == 2) {
    DAT_004e4860 = &PTR_LAB_00523140;
    DAT_004e4864 = 1;
  }
  else if (param_3 == 3) {
    DAT_004e4860 = &PTR_LAB_00505180;
    DAT_004e4864 = 0;
  }
  else if (param_3 == 5) {
    DAT_004e4860 = &PTR_LAB_00502350;
    DAT_004e4864 = 1;
  }
  FUN_004e53c0();
  return CONCAT44(param_2,in_EAX);
}

