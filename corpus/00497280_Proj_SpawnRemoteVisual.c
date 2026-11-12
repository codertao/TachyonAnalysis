
/* 0x1002 on client: create via def+0x70, fast-forward by age, post-think Proj_PostThinkVisual* only
   within 10000 units (MP) */

void Proj_SpawnRemoteVisual
               (vec3 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
               undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  WeaponDef *local_2c;
  undefined4 local_28;
  vec3 *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_c;
  
  local_24 = param_1;
  local_18 = 0;
  local_c = 0;
  local_20 = param_2;
  local_1c = param_5;
  local_14 = param_4;
  local_28 = param_7;
  local_2c = g_WeaponDefs + param_3;
  iVar2 = (*g_WeaponDefs[param_3].create)(&local_2c);
  if (iVar2 != 0) {
    if ((g_WeaponDefs[param_3].field_0xd8 & 2) == 0) {
      Proj_Launch(iVar2,param_2,0,param_4);
    }
    uVar3 = distance_between(param_1,(vec3 *)&DAT_005b9600);
    if ((uVar3 < 0x2710000) || ((g_FlightStateFlags & 4) == 0)) {
      iVar1 = g_WeaponDefs[param_3].id;
      if ((iVar1 == 0x1d) || (((iVar1 == 0x1e || (iVar1 == 0x1f)) || (iVar1 == 0x20)))) {
        *(code **)(iVar2 + 0x6c) = Proj_PostThinkVisualTurret;
      }
      else {
        *(code **)(iVar2 + 0x6c) = Proj_PostThinkVisual;
      }
    }
    if ((param_5 & 2) != 0) {
      Snd_PlayAtPosEx(1,1,*(undefined4 *)&g_WeaponDefs[param_3].field_0x48,iVar2,0x10000,param_6 * 2
                      ,(DAT_005b39d0 - param_4) + -1);
    }
  }
  return;
}

