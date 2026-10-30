
void FUN_00403c10(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_00434890(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    uVar1 = FUN_0048e350();
    if (uVar1 < 15000) {
      FUN_0041f0e0(iVar2,s_MADE_KILL_00532618,3000,*(undefined4 *)(param_1 + 100));
    }
  }
  return;
}

