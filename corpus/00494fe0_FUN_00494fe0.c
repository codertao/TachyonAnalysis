
void FUN_00494fe0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  if ((((*(uint *)(param_1 + 0xd0) ^ DAT_005897e4) & 0x1f) != 0) ||
     (iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x2c), iVar4 == 0)) {
    return;
  }
  do {
    uVar1 = FUN_0048e440(param_1 + 0x34,iVar4 + 0x34);
    if (uVar1 < 0xa28000) {
      FUN_0040f380(param_1 + 0x34,iVar4 + 0x34,&local_c);
      iVar2 = local_c * 0x80 + *(int *)(param_1 + 0x4c) * -0x80;
      iVar3 = local_8 * 0x80 + *(int *)(param_1 + 0x50) * -0x80;
      uVar1 = iVar2 >> 0x1f;
      if (((int)((iVar2 >> 7 ^ uVar1) - uVar1) < 0x1c71c6) &&
         (uVar1 = iVar3 >> 0x1f, (int)((iVar3 >> 7 ^ uVar1) - uVar1) < 0x1c71c6)) {
        FUN_00494fb0(param_1);
        return;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x9c);
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

