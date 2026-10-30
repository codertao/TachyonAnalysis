
void FUN_00423630(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b8b0(iVar1);
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(code **)(iVar1 + 0x70) = FUN_004235b0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined1 **)(iVar1 + 0x68) = &LAB_004235f0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0x90;
    *(undefined4 *)(iVar1 + 0x1c) = 0x320000;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xff;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
  }
  return;
}

