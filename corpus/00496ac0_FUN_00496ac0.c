
void FUN_00496ac0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,3,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b8b0(iVar1);
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined4 *)(iVar1 + 0x58) = DAT_00565614;
    *(code **)(iVar1 + 0x70) = FUN_00496a90;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined1 **)(iVar1 + 0x68) = &LAB_00496aa0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xff;
    *(undefined4 *)(iVar1 + 0x1c) = 0x10000;
    FUN_004b2950((undefined4 *)(iVar1 + 0x18),0);
    *(undefined4 *)(iVar1 + 0xf4) = param_2;
    *(undefined4 *)(iVar1 + 0xd4) = 0xaa;
  }
  return;
}

