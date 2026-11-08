
/* subsystem damage; at 0 posts mission event {1,obj,14,partId} */

void CapPart_OnDamage(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (0 < *(int *)(param_1 + 0xbc)) {
    iVar1 = *(int *)(param_1 + 0xbc) - ((uint)(DAT_005653e8 * DAT_005653e0) >> 8);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 < 1) {
      uStack_14 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 0xd8) + 0x20);
      uStack_c = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x58);
      uStack_18 = 1;
      uStack_10 = 0xe;
      uStack_8 = 0xffffffff;
      uStack_4 = 0xffffffff;
      Mission_PostEvent(&uStack_18,*(undefined4 *)(param_1 + 100));
      SrvSend_EntityDestroyed(param_1 + 0x34,3,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
      CapPart_Destroyed(param_1);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0xbc);
      return;
    }
    Weapon_PlayImpact(DAT_005653dc,0,2,0xb,1);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0xbc);
  }
  return;
}

