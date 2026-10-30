
int FUN_00421980(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,int param_7,int param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  
  if (param_9 != 0) {
    if (param_3 == 0) {
      param_3 = 0x10000;
    }
    iVar2 = FUN_0048e440(param_1,&DAT_005b9600);
    if (0x800 < (uint)((ulonglong)((longlong)iVar2 * (longlong)param_3) >> 0x20)) {
      return 0;
    }
  }
  iVar2 = FUN_0041b790(&DAT_005b32d8,8,&DAT_005b31c0);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar2);
  *(undefined4 *)(iVar2 + 0x58) = param_2;
  *(undefined2 *)(iVar2 + 0x74) = 2;
  *(undefined1 **)(iVar2 + 0x70) = &LAB_00421280;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  piVar1 = (int *)(iVar2 + 0x34);
  *piVar1 = *param_1;
  *(int *)(iVar2 + 0x38) = param_1[1];
  *(int *)(iVar2 + 0x3c) = param_1[2];
  *(int *)(iVar2 + 0x1c) = param_3;
  *(undefined1 **)(iVar2 + 0x68) = &LAB_00421600;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x94;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0xff;
  if (param_7 == 0) {
    *(undefined4 *)(iVar2 + 0x84) = 0xfffffffc;
  }
  else {
    *(int *)(iVar2 + 0x84) = -param_7;
  }
  *(int *)(iVar2 + 0x78) = *param_5;
  *(int *)(iVar2 + 0x7c) = param_5[1];
  *(int *)(iVar2 + 0x80) = param_5[2];
  if (param_8 != 0) {
    *piVar1 = *piVar1 + *(int *)(iVar2 + 0x78) * param_8;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + *(int *)(iVar2 + 0x7c) * param_8;
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + *(int *)(iVar2 + 0x80) * param_8;
  }
  *(undefined4 *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  DAT_005a6728 = DAT_005a6728 + 1;
  if (DAT_005a672c <= DAT_005a6728) {
    DAT_005a672c = DAT_005a6728;
  }
  return iVar2;
}

