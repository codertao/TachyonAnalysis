
/* Adv Blast Torpedo: homes without the 45-degree lock-loss, decoys still apply; within 6.25 units
   or expiry -> splash */

void Torp_ThinkAdvBlast(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  uVar1 = param_1;
  if (iVar2 != 0) {
    Proj_SteerToward(param_1,(vec3 *)(iVar2 + 0x34),iVar2 + 0x4c,
                     *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x54),
                     *(undefined4 *)(param_1 + 0xec));
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar2 + 0x34));
    Missile_CheckDecoys(param_1);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar2;
  if ((iVar2 == 0) || (uVar1 < 0x64000)) {
    Proj_OnHitSplash(param_1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xec) + *(int *)(*(int *)(param_1 + 0xdc) + 0x8c);
    *(int *)(param_1 + 0xec) = iVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x88);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0xec) = iVar2;
      return;
    }
  }
  return;
}

