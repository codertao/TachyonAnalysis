
void FUN_00407af0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00407900(param_2,param_3);
  param_2[6] = iVar1;
  if (iVar1 != 0) {
    param_2[0x14] = param_5;
    *param_2 = param_4;
    FUN_00407aa0(param_2,param_1);
    param_2[0xe] = *(undefined4 *)(param_1 + 0x68);
    param_2[0xf] = *(undefined4 *)(param_1 + 0x5c);
    *(undefined1 **)(param_1 + 0x68) = &LAB_00407890;
    *(undefined4 *)(param_1 + 0x5c) = param_6;
  }
  return;
}

