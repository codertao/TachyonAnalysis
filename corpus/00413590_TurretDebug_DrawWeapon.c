
/* sweep */

void TurretDebug_DrawWeapon(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = EntDebug_DrawInfo(param_1,0,0,s_TURRET_DEBUG_00532e6c);
  AiDebug_DrawHardware(s_WEAPON_00532e64,param_1 + 0x100,uVar1);
  return;
}

