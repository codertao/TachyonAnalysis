
undefined4 FUN_00401080(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (0xe < param_2) {
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x33c) + param_2 * 0x10);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(param_1);
  }
  *(uint *)(param_1 + 0x104) = param_2;
  *(undefined1 *)(param_1 + 0x325) = *(undefined1 *)(puVar2 + 3);
  *(undefined4 *)(param_1 + 0x304) = puVar2[1];
  *(undefined1 **)(param_1 + 0x6c) = &LAB_00404aa0;
  return uVar1;
}

