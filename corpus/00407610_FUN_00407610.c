
void FUN_00407610(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_0041b790(&DAT_005b32d8,8,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b8b0(iVar1);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    *(code **)(iVar1 + 0x70) = FUN_00496a90;
    *(undefined1 **)(iVar1 + 0x68) = &LAB_004074f0;
    *(undefined4 *)(iVar1 + 0x18) = 0x94;
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x3c);
    iVar2 = *(int *)(param_2 + 0x4c) >> 0x10;
    *(int *)(iVar1 + 0x90) = iVar2;
    *(int *)(iVar1 + 0x84) = (*(int *)(param_2 + 0x80) - *(int *)(param_2 + 0x3c)) / iVar2;
    *(int *)(iVar1 + 0x88) = (*(int *)(param_2 + 0x84) - *(int *)(param_2 + 0x40)) / iVar2;
    FUN_00407560(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),&local_18,
                 *(undefined4 *)(param_2 + 0x44));
    FUN_00407560(param_1,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),&local_c,
                 *(undefined4 *)(param_2 + 0x88));
    *(int *)(iVar1 + 0x34) = local_18;
    *(int *)(iVar1 + 0x38) = local_14;
    *(int *)(iVar1 + 0x3c) = local_10;
    *(int *)(iVar1 + 0x78) = (local_c - local_18) / *(int *)(iVar1 + 0x90);
    *(int *)(iVar1 + 0x7c) = (local_8 - local_14) / *(int *)(iVar1 + 0x90);
    *(int *)(iVar1 + 0x80) = (local_4 - local_10) / *(int *)(iVar1 + 0x90);
    DAT_005a6728 = DAT_005a6728 + 1;
    if (DAT_005a672c <= DAT_005a6728) {
      DAT_005a672c = DAT_005a6728;
    }
  }
  return;
}

