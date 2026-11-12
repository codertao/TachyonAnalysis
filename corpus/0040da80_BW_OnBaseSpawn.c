
/* sweep */

void BW_OnBaseSpawn(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BW_RegisterBase(param_2,*(undefined4 *)(param_1 + 100));
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x18) = param_1;
    uVar2 = BW_StartCreditsForLevel(GLBL_spacesav[0x6b]);
    BW_AddBaseCredits(iVar1,uVar2);
    Starbase_SetDockState(param_1,*(undefined4 *)(iVar1 + 4));
  }
  return;
}

