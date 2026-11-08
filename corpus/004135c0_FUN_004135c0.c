
void FUN_004135c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 != 0) {
    if ((*(byte *)(*(int *)(iVar2 + 0xe4) + 0x34) & 6) != 0) {
      FUN_00413590(iVar2);
      return;
    }
    if (*(int *)(iVar2 + 0xdc) != 0) {
      iVar2 = *(int *)(iVar2 + 0xdc);
    }
    uVar1 = FUN_004648a0(iVar2,*(undefined4 *)(iVar2 + 0xd8),iVar2 + 0xec,s_CAPSHIP_DEBUG_00533f1c);
    uVar1 = FUN_00464e70(iVar2,iVar2 + 0xec,uVar1);
    FUN_00413380(iVar2,uVar1);
  }
  return;
}

