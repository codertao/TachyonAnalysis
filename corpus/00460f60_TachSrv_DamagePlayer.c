
/* god mode (SP), easy x0.687 (SP), rules +0x84/+0x28/+0x24, kill -> TachSrv_OnShipKilled, sends
   0x1005 */

void TachSrv_DamagePlayer(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_8;
  
  iVar1 = param_1;
  if (((((GLBL_cheat_related1 == 0) || ((g_FlightStateFlags & 4) == 0)) &&
       (*(int *)(*(int *)(param_1 + 0xdc) + 0x1d0) == 0)) &&
      (((g_FlightStateFlags & 4) == 0 || (DAT_0058f1c0 == 0)))) && (0 < *(int *)(param_1 + 0x140)))
  {
    if ((*(code **)(g_ActiveRules + 0x84) != (code *)0x0) &&
       (iVar2 = (**(code **)(g_ActiveRules + 0x84))(param_1,DAT_005653f4), iVar2 == 0)) {
      return;
    }
    uVar3 = Vec_BearingXZ(iVar1 + 0x34,&DAT_005653cc);
    Shield_SplitFrontRear(uVar3,DAT_005653e0,&param_1,&local_8);
    param_1 = DAT_005a663c * param_1 >> 8;
    local_8 = DAT_005a663c * local_8 >> 8;
    if ((GLBL_spacesav[0x2f] == 0) && ((g_FlightStateFlags & 4) != 0)) {
      param_1 = (uint)((longlong)(int)param_1 * 45000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)param_1 * 45000) >> 0x20) << 0x10;
      local_8 = (uint)((longlong)(int)local_8 * 45000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)local_8 * 45000) >> 0x20) << 0x10;
    }
    uVar3 = Shield_ApplyDamageFR
                      (iVar1 + 0x11c,*(int *)(iVar1 + 0x8c) + 0xd0,param_1,local_8,DAT_005653e4,
                       DAT_005653e8,DAT_005653ec);
    if (*(int *)(iVar1 + 0x140) < 1) {
      TachSrv_OnShipKilled(iVar1);
    }
    else {
      if (*(code **)(g_ActiveRules + 0x28) != (code *)0x0) {
        (**(code **)(g_ActiveRules + 0x28))(iVar1,DAT_005653f4);
      }
      DAT_005653f8 = *(undefined4 *)(iVar1 + 0xdc);
      Weapon_PlayImpact(DAT_005653dc,0,uVar3,0,1);
    }
    SrvSend_YouTookDamage(*(undefined4 *)(iVar1 + 0xdc));
  }
  return;
}

