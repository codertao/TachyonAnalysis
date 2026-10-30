
void FUN_00434f80(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    if (*(code **)(param_2 + 0x2c) != (code *)0x0) {
      (**(code **)(param_2 + 0x2c))(param_1,param_2,param_3);
    }
    DAT_005a5540 = DAT_005a5540 + 1;
  }
  return;
}

