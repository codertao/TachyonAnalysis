
void FUN_00433910(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 local_14 [12];
  undefined4 local_8;
  
  FUN_0048e3d0(&local_8,0x1c,4,s_mine_mount_data_0053f5b4,0xd500);
  WeaponMounts_Init(local_14,local_8,1,param_2);
  FUN_00493590((int *)(param_1 + 0x110),local_14,0xd500,1);
  lVar1 = (longlong)*(int *)(*(int *)(param_1 + 0x110) + 0xcc) * 50000;
  *(uint *)(param_1 + 0x148) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x10) != 0) {
    *(code **)(param_1 + 0x68) = FUN_00445720;
    return;
  }
  *(undefined1 **)(param_1 + 0x68) = &LAB_00433800;
  return;
}

