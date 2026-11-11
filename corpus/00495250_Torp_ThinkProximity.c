
/* Blast Torpedo: unguided, after 50 frames proximity fuse 43.75 units (every 8 frames) ->
   Proj_OnHitSplash */

void Torp_ThinkProximity(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x3c);
  ((vec3 *)(param_1 + 0x34))->x = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = iVar2 + *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = iVar1 + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar2;
  uVar3 = 0x13880000;
  if ((iVar2 < *(int *)(*(int *)(param_1 + 0xdc) + 0x3c) + -0x32) &&
     (((**(uint **)(*(int *)(param_1 + 100) + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0)) {
    iVar2 = Ent_FindNearestHostile(param_1,0xff,0,0x2bc000,*(undefined4 *)(param_1 + 200),3);
    if (iVar2 != 0) {
      uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar2 + 0x34));
    }
  }
  if ((*(int *)(param_1 + 0xd4) == 0) || (uVar3 < 0x2bc000)) {
    Proj_OnHitSplash(param_1);
  }
  return;
}

