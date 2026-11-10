
/* post mission event {0,0,0,hull%}; low-hull warning < 1/4 */

void SpRules_OnPlayerDamaged(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = Shield_GetMax(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0);
  local_c = FUN_0048ec60(*(int *)(param_1 + 300) + *(int *)(param_1 + 0x124) >> 1,uVar1);
  local_c = 100 - local_c;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  iVar2 = Power_GetHullMax(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,1);
  if (*(int *)(param_1 + 0x140) < iVar2 >> 2) {
    Chatter_PlayRandom(0);
  }
  return;
}

