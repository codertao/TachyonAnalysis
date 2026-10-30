
int FUN_0040ed40(int *param_1,int *param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = *param_1 - *param_2 >> 3;
  local_20 = param_1[1] - param_2[1] >> 3;
  local_1c = param_1[2] - param_2[2] >> 3;
  FUN_0052db6a(local_18,-DAT_005b95e8,-DAT_005b95ec,-DAT_005b95f0);
  FUN_0052dbcd(local_18);
  FUN_004b2410(&local_24,&local_24);
  iVar1 = FUN_004e086c(local_24,-local_1c);
  return iVar1 >> 0x10;
}

