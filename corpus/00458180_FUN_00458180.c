
void FUN_00458180(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) * 0x10 + DAT_0058f2e8;
  uVar1 = FUN_00458120(param_1,s_ENEMY_00548db0);
  *(undefined4 *)(iVar3 + 4) = uVar1;
  uVar1 = FUN_00458120(param_1,s_FRIENDLY_00548da4);
  *(undefined4 *)(iVar3 + 8) = uVar1;
  uVar2 = FUN_00458100(param_1);
  uVar2 = *(uint *)(iVar3 + 8) | uVar2;
  *(uint *)(iVar3 + 8) = uVar2;
  *(uint *)(iVar3 + 0xc) = ~(*(uint *)(iVar3 + 4) | uVar2);
  return;
}

