
undefined4 * FUN_004614e0(int param_1,int *param_2,undefined4 *param_3,byte param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  *param_3 = *(undefined4 *)(param_1 + 0x78);
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 0x7e);
  *(undefined1 *)((int)param_3 + 6) = *(undefined1 *)(param_1 + 0xc1);
  if (*(code **)(DAT_005b1dc4 + 0x1c) != (code *)0x0) {
    uVar1 = (**(code **)(DAT_005b1dc4 + 0x1c))(param_1);
    *(undefined1 *)((int)param_3 + 7) = uVar1;
  }
  *(byte *)((int)param_3 + 5) = *(byte *)(param_1 + 0xc0) | param_4;
  uVar2 = FUN_0048e870(*(int *)(param_1 + 0x34) - *param_2);
  *(undefined2 *)(param_3 + 2) = uVar2;
  uVar2 = FUN_0048e870(*(int *)(param_1 + 0x38) - param_2[1]);
  *(undefined2 *)((int)param_3 + 10) = uVar2;
  uVar2 = FUN_0048e870(*(int *)(param_1 + 0x3c) - param_2[2]);
  *(undefined2 *)(param_3 + 3) = uVar2;
  *(char *)(param_3 + 5) = (char)(*(int *)(param_1 + 0x4c) >> 0x11);
  *(char *)((int)param_3 + 0x15) = (char)(*(int *)(param_1 + 0x50) >> 0x11);
  *(char *)((int)param_3 + 0x16) = (char)(*(int *)(param_1 + 0x54) >> 0x11);
  uVar2 = FUN_0048e870(*(undefined4 *)(param_1 + 0xa0));
  *(undefined2 *)((int)param_3 + 0xe) = uVar2;
  uVar2 = FUN_0048e870(*(undefined4 *)(param_1 + 0xa4));
  *(undefined2 *)(param_3 + 4) = uVar2;
  uVar2 = FUN_0048e870(*(undefined4 *)(param_1 + 0xa8));
  *(undefined2 *)((int)param_3 + 0x12) = uVar2;
  *(undefined2 *)(param_1 + 0x7c) = DAT_0058b080;
  return param_3 + 6;
}

