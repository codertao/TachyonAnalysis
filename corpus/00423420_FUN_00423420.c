
void FUN_00423420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 local_c [12];
  
  FUN_0040f380(param_1,param_2,local_c);
  SrvSend_ProjectileImpact(param_2,param_4,local_c,param_3,param_5,param_6,param_7);
  return;
}

