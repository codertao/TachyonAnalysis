
/* god mode (SP), easy x0.687 (SP), rules +0x84/+0x28/+0x24, kill -> TachSrv_OnShipKilled, sends
   0x1005 */

void __cdecl TachSrv_DamagePlayer(SpED_SrvPlayer *self)

{
  SpED_SrvPlayer *pSVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_8;
  
  pSVar1 = self;
  if (((((GLBL_cheat_related1 == 0) || ((g_FlightStateFlags & 4) == 0)) && (self->conn->dead == 0))
      && (((g_FlightStateFlags & 4) == 0 || (DAT_0058f1c0 == 0)))) && (0 < (self->power).hull)) {
    if ((*(code **)(g_ActiveRules + 0x84) != (code *)0x0) &&
       (iVar2 = (**(code **)(g_ActiveRules + 0x84))(self,DAT_005653f4), iVar2 == 0)) {
      return;
    }
    uVar3 = Vec_BearingXZ(&pSVar1->pos,&DAT_005653cc);
    Shield_SplitFrontRear(uVar3,DAT_005653e0,&self,&local_8);
    self = (SpED_SrvPlayer *)((uint)(g_PlayerDamageScale * (int)self) >> 8);
    local_8 = g_PlayerDamageScale * local_8 >> 8;
    if ((GLBL_spacesav[0x2f] == 0) && ((g_FlightStateFlags & 4) != 0)) {
      self = (SpED_SrvPlayer *)
             ((uint)((longlong)(int)self * 45000) >> 0x10 |
             (int)((ulonglong)((longlong)(int)self * 45000) >> 0x20) << 0x10);
      local_8 = (uint)((longlong)(int)local_8 * 45000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)local_8 * 45000) >> 0x20) << 0x10;
    }
    uVar3 = Shield_ApplyDamageFR
                      (&pSVar1->power,&pSVar1->desc[1].getText,self,local_8,DAT_005653e4,
                       DAT_005653e8,DAT_005653ec);
    if ((pSVar1->power).hull < 1) {
      TachSrv_OnShipKilled(pSVar1);
    }
    else {
      if (*(code **)(g_ActiveRules + 0x28) != (code *)0x0) {
        (**(code **)(g_ActiveRules + 0x28))(pSVar1,DAT_005653f4);
      }
      DAT_005653f8 = pSVar1->conn;
      Weapon_PlayImpact(DAT_005653dc,0,uVar3,0,1);
    }
    SrvSend_YouTookDamage(pSVar1->conn);
  }
  return;
}

