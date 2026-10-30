
int FUN_0048acd0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x10000;
  local_8 = 0x10000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0xffff0000;
  local_10 = 0;
  if (DAT_0056c2e0 == 0) {
    return 0;
  }
  FUN_004b1bb0(local_34,&DAT_0056c2d4);
  FUN_004b24d0(&local_1c,&local_1c);
  FUN_004b1bb0(local_34,param_1 + 0x4c);
  FUN_004e054e(&local_10);
  FUN_004b24d0(&local_10,&local_10);
  iVar1 = FUN_004e058e(&local_1c,&local_10);
  uVar2 = (uint)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x10 |
          (int)((ulonglong)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x20) << 0x10;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  return (int)uVar2 >> 8;
}

