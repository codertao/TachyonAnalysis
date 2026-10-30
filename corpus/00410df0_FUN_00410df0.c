
void FUN_00410df0(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0x3f) == 0) {
    iVar1 = param_1 + 0xd4;
  }
  else {
    iVar1 = 0;
  }
  Entity_ThrustToWorld
            (param_1,*(undefined4 *)(param_1 + 0xf8),*(int *)(param_1 + 0x8c) + 0x84,iVar1);
  return;
}

