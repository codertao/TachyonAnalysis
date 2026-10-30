
void FUN_00493ca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (param_1 != 0x26) {
    iVar1 = FUN_00493120(param_1);
    if (*(code **)(iVar1 + 0x68) != (code *)0x0) {
      (**(code **)(iVar1 + 0x68))(param_2,param_3,param_4,param_5);
    }
  }
  return;
}

