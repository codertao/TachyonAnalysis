
void FUN_00425fe0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,10,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b850(iVar1);
    *(int *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(code **)(iVar1 + 0x70) = FUN_00425d10;
    *(code **)(iVar1 + 0x5c) = FUN_00425c70;
    *(int *)(iVar1 + 0x60) = iVar1;
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 0x134);
    *(undefined4 *)(iVar1 + 0x2c) = 0xff;
    *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(param_2 + 0x120);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0x90;
    *(undefined4 *)(iVar1 + 0x1c) = 0x10000;
    *(undefined4 *)(iVar1 + 0x2c) = 0xff;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(int *)(iVar1 + 0xd4) = param_1;
    *(int *)(param_1 + 0xd8) = iVar1;
    Model_SelectState((undefined4 *)(iVar1 + 0x18),0);
  }
  return;
}

