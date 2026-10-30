
void FUN_0044ff40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00590238 + 0x5c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x5c))(param_1,param_2);
  }
  (**(code **)(DAT_00590238 + 0x10))(param_1);
  if (*(char *)(param_2 + 0x44) == '\0') {
    *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  }
  else {
    uVar1 = FUN_0044f810(param_2 + 0x44,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c8) = uVar1;
    FUN_0045dcb0(param_2 + 0x44,uVar1);
  }
  FUN_0044fec0(param_1,param_2);
  FUN_0044ff20(param_1);
  if (*(code **)(DAT_00590238 + 0x34) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x34))(param_1);
  }
  return;
}

