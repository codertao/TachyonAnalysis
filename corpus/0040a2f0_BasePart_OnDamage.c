
/* sweep */

void BasePart_OnDamage(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (0 < *(int *)(param_1 + 0xbc)) {
    if ((*(code **)(g_ActiveRules + 0x84) != (code *)0x0) &&
       (iVar1 = (**(code **)(g_ActiveRules + 0x84))(param_1,DAT_005653f4), iVar1 == 0)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xbc) - ((uint)(DAT_005653e8 * DAT_005653e0) >> 8);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 < 1) {
      local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
      local_c = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x58);
      uStack_18 = 1;
      uStack_10 = 0xe;
      uStack_8 = 0xffffffff;
      uStack_4 = 0xffffffff;
      Mission_PostEvent(&uStack_18,*(undefined4 *)(param_1 + 100));
      SrvSend_EntityDestroyed(param_1 + 0x34,3,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
      BasePart_Remove(param_1);
      return;
    }
    Weapon_PlayImpact(DAT_005653dc,0,2,0xb,1);
    if (*(code **)(g_ActiveRules + 0xa4) != (code *)0x0) {
      (**(code **)(g_ActiveRules + 0xa4))(*(undefined4 *)(param_1 + 0xdc),param_1,1,DAT_005653f4);
    }
  }
  return;
}

