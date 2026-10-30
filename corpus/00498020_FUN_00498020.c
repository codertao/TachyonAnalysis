
int FUN_00498020(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  local_1c = -0x10000;
  iVar1 = DcbPool_Alloc(&DAT_005b32b0,0x12,*(undefined4 *)(param_1 + 100));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined **)(iVar1 + 0xe4) = &DAT_0055a4a8 + param_3 * 0xc;
  *(int *)(iVar1 + 0xe0) = param_1;
  *(undefined4 *)(iVar1 + 0xd4) = param_2;
  *(undefined4 *)(iVar1 + 0x58) = DAT_00565518;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(code **)(iVar1 + 0x68) = FUN_00497ed0;
  *(undefined2 *)(iVar1 + 0x74) = 1;
  *(code **)(iVar1 + 0x70) = FUN_00492d30;
  uVar2 = FUN_0048e350();
  iVar3 = (uVar2 & 7) + 2;
  FUN_004b1bb0(local_18,(undefined4 *)(param_1 + 0x4c));
  FUN_004b24d0(&local_24,&local_24);
  *(int *)(iVar1 + 0x34) = iVar3 * local_24 + *(int *)(param_1 + 0x34);
  *(int *)(iVar1 + 0x38) = iVar3 * local_20 + *(int *)(param_1 + 0x38);
  *(int *)(iVar1 + 0x3c) = iVar3 * local_1c + *(int *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FUN_0041b850(iVar1);
  return iVar1;
}

