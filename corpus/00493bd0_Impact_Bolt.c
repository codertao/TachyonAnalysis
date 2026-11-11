
/* kind 1: client spark / server 0x1004 (SrvSend_ProjectileImpact via 0x423420); else client boom /
   server 0x1003 */

void Impact_Bolt(int param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_2 == 1) {
    if (param_1 != 0) {
      ShieldFx_SpawnLocal(&DAT_005653c0,&DAT_005653cc,DAT_005653fc,DAT_005653f0);
      return;
    }
    ShieldFx_Broadcast(&DAT_005653c0,&DAT_005653cc,DAT_005653fc,DAT_005653d8,DAT_005653f8,
                       DAT_00565408,DAT_0056540c);
  }
  else {
    if (param_1 != 0) {
      FUN_004231f0(0,0,&DAT_005653cc,0,DAT_005653f0);
      return;
    }
    SrvSend_EntityDestroyed(&DAT_005653cc,0,0,0,DAT_005653f8,DAT_00565408,DAT_005653d8,DAT_0056540c)
    ;
  }
  if ((DAT_005653f4 != 0) && (param_4 != 0)) {
    Weapon_CountHit(DAT_005653f4);
  }
  return;
}

