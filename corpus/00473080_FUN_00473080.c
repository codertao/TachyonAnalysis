
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473080(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = param_3;
  local_18 = (int)(longlong)ROUND((float)param_6 * _DAT_0052e9b4);
  local_c = param_4 - local_18;
  local_8 = param_3 + param_5;
  local_4 = param_4 + param_6;
  FUN_0043e5c0(&DAT_00583420,param_1,&local_10);
  FUN_0043e6a0(&DAT_00583420,param_1,param_2);
  FUN_0043e670(&DAT_00583420,param_1,0x10000);
  FUN_0043e610(&DAT_00583420,param_1,0x400);
  return;
}

