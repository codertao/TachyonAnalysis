
void FUN_004079c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + 0x1c;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_004101c0(param_2,3);
    FUN_004102c0(5);
    FUN_00410200(0);
    FUN_004106f0(0);
    puVar1 = *(undefined4 **)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x34) = puVar1[6];
    FUN_0040f5b0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    FUN_00407380(param_1,puVar1,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

