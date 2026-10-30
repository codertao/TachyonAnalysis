
void FUN_00433760(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if (((((*(uint *)(param_1 + 0x10c) ^ DAT_005897e4) & 0x3f) == 0) &&
      (Dcb_UpdateEngineAudio(param_1,*(undefined4 *)(param_1 + 0xd8)),
      *(int *)(*(int *)(param_1 + 0x8c) + 400) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 100) + 8), iVar2 = DAT_0058f2e8, iVar3 != 0)) {
    while (((*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + iVar2) &
            *(uint *)((uint)*(byte *)(iVar3 + 0xc2) * 0x10 + iVar2)) == 0 ||
           (puVar1 = (undefined *)FUN_0048e440(param_1 + 0x34,iVar3 + 0x34), iVar2 = DAT_0058f2e8,
           &DAT_00578000 <= puVar1))) {
      iVar3 = *(int *)(iVar3 + 0x94);
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_00433640(param_1);
  }
  return;
}

