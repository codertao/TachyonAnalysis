
void FUN_004951b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004950a0(param_1);
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar1 = *(int *)(param_1 + 200);
    if ((iVar1 != 0) &&
       (((**(uint **)(*(int *)(param_1 + 100) + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0)) {
      uVar2 = FUN_0048b2b0(param_1,*(undefined4 *)
                                    ((uint)*(byte *)(iVar1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8),0,
                           0xfa0000,iVar1,3);
      *(undefined4 *)(param_1 + 0x90) = uVar2;
    }
  }
  else {
    if (0x400000 < (int)((DAT_005656bc ^ (int)DAT_005656bc >> 0x1f) - ((int)DAT_005656bc >> 0x1f)))
    {
      *(undefined4 *)(param_1 + 0x90) = 0;
      return;
    }
    if (0x400000 < (int)((DAT_005656c0 ^ (int)DAT_005656c0 >> 0x1f) - ((int)DAT_005656c0 >> 0x1f)))
    {
      *(undefined4 *)(param_1 + 0x90) = 0;
      return;
    }
  }
  return;
}

