
int FUN_0042e700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,0xe,&DAT_005b31c0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x34) = 0x6d600000;
  *(undefined4 *)(iVar1 + 0x38) = 0x6d600000;
  *(undefined4 *)(iVar1 + 0x3c) = param_1;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined1 **)(iVar1 + 0x68) = &LAB_0042e6f0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x58) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = 0x10;
  *(undefined4 *)(iVar1 + 0x1c) = 0x40000;
  *(code **)(iVar1 + 0x70) = FUN_0042e4e0;
  FUN_004b2950((undefined4 *)(iVar1 + 0x18),0);
  FUN_0041b850(iVar1);
  return iVar1;
}

