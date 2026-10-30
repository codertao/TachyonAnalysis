
undefined4 FUN_00456f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar1 = FUN_00456bd0(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0045db70(param_1);
      FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
      FUN_00462300(param_1);
      *(undefined4 *)(param_1 + 0xdc) = 1;
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
      *(code **)(param_1 + 0x68) = FUN_00456850;
      *(undefined1 *)(param_1 + 0xc3) = 1;
    }
  }
  return 0;
}

