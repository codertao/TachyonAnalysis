
void FUN_004365a0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  uVar1 = FUN_0048e800(DAT_005a6140,0x5e);
  if (param_2 < 2) {
    str_sprintf(local_80,uVar1,param_2,param_3);
  }
  else {
    str_sprintf(local_c0,&PTR_DAT_0053fac8,param_3);
    str_sprintf(local_80,uVar1,param_2,local_c0);
  }
  FUN_004c82b6(local_80);
  FUN_0045d900(local_80,1,0,0,0,param_1,0xffffffff);
  return;
}

