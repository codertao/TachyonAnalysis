
void FUN_004050e0(int param_1,undefined1 param_2)

{
  int *piVar1;
  short *psVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar3 = *(undefined1 *)(param_1 + 0xc2);
  *(undefined1 *)(param_1 + 0xc2) = param_2;
  iVar4 = FUN_004344d0(uVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_004344a0(param_1);
    if (iVar4 != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 100) + 0x4c);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)(param_1 + 100) + 0x50);
      *piVar1 = *piVar1 + 1;
    }
  }
  else {
    iVar4 = FUN_004344a0(param_1);
    if (iVar4 == 0) {
      Mission_PostEnemyStatus(*(undefined4 *)(param_1 + 100));
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    psVar2 = (short *)(*(int *)(param_1 + 0x90) + 200);
    *psVar2 = *psVar2 + -1;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar3 = (**(code **)(g_ActiveRules + 0x1c))(param_1,*(undefined4 *)(param_1 + 100));
  SrvSend_Allegiance(*(undefined4 *)(param_1 + 0x78),uVar3);
  return;
}

