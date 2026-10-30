
undefined4 FUN_00414e60(int param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  if (((DAT_005b9094 == 0) && (DAT_005b3300 != 0)) &&
     (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0)) {
    iVar1 = FUN_004197f0(DAT_005b3300 + 0x34,param_1 + 0x34,local_c,
                         *(int *)(DAT_005b3300 + 100) + 0x14,DAT_005b3300,param_1,0,&DAT_00414e30);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0xce) = 0;
      return 1;
    }
    *(undefined2 *)(param_1 + 0xce) = 1;
  }
  return 0;
}

