
void FUN_004041f0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00434890(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    if (((*(short *)(param_2 + 0x76) == 1) && (uVar1 = FUN_0048e350(), uVar1 < 15000)) &&
       (iVar3 = FUN_0041f0e0(iVar2,s_HITBY_PLAYER_00532654,0x5dc,*(undefined4 *)(param_1 + 100)),
       iVar3 != 0)) {
      return;
    }
    if (((0xf < *(int *)(param_1 + 0x314)) && (uVar1 = FUN_0048e350(), uVar1 < 15000)) &&
       (iVar3 = FUN_0041f0e0(iVar2,s_NEED_HELP_00532648,0x5dc,*(undefined4 *)(param_1 + 100)),
       iVar3 != 0)) {
      return;
    }
    if ((*(int *)(param_1 + 0x114) < *(int *)(*(int *)(param_1 + 0x8c) + 0xe0)) &&
       (uVar1 = FUN_0048e350(), uVar1 < 15000)) {
      FUN_0041f0e0(iVar2,s_SHIELDS_DOWN_00532638,30000,*(undefined4 *)(param_1 + 100));
    }
  }
  return;
}

