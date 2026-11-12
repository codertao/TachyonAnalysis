
/* sweep */

void BW_OnPlayerEnterGame(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 200) != 0) {
    BW_SendRankProgress(*(int *)(param_1 + 200));
    uVar1 = BW_FindBase(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 200));
    BW_SendFactionProgress(uVar1);
    uVar1 = BW_FindBase(*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2));
    BW_ApplyUpgradeTree(param_1,uVar1);
    Ship_InitPower(*(undefined4 *)(param_1 + 200));
    BW_NavToHomeBase(param_1);
  }
  return;
}

