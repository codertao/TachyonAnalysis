
/* sweep */

void BW_OnPlayerSpawn(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(iVar1 + 0xfc) = 1;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  BW_SendRankProgress(iVar1);
  uVar2 = BW_FindBase(*(undefined1 *)(iVar1 + 0xc2),iVar1);
  BW_SendFactionProgress(uVar2);
  uVar2 = BW_FindBase(*(undefined1 *)(iVar1 + 0xc2));
  BW_ApplyUpgradeTree(param_1,uVar2);
  BW_NavToHomeBase(param_1);
  return;
}

