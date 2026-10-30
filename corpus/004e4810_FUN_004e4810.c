
undefined8 __fastcall FUN_004e4810(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_EAX;
  
  if (param_3 == 1) {
    PTR_FUN_004e3053 = &LAB_004e3c94;
  }
  else if (param_3 == 2) {
    PTR_FUN_004e3053 = &LAB_004e3dbb;
  }
  else if (param_3 == 3) {
    PTR_FUN_004e3053 = &LAB_004e3e58;
  }
  else {
    PTR_FUN_004e3053 = FUN_004e3d34;
  }
  return CONCAT44(param_2,in_EAX);
}

