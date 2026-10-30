
void FUN_004363e0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_00536778;
  }
  if (param_2 != -1) {
    uVar1 = FUN_00436380(param_2,param_3 + 1);
    str_sprintf(param_4,s__s__s__d_0053fa9c,param_1,uVar1);
    return;
  }
  str_sprintf(param_4,&DAT_00536768,param_1);
  return;
}

