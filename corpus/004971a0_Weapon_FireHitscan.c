
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* weapon 0x17: flag 2 (client) -> local stepped hitscan + send 0x2001; else SrvSend_ProjectileFired
    */

void Weapon_FireHitscan(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,uint param_6,int param_7)

{
  int iVar1;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = param_3;
  local_20 = param_5;
  local_1c = param_6;
  local_14 = 0;
  local_18 = param_2;
  local_24 = param_4;
  local_2c = param_1;
  local_10 = 0;
  local_c = 1;
  iVar1 = Proj_CreateHitscan(&local_2c);
  if (iVar1 != 0) {
    if ((param_6 & 2) != 0) {
      Snd_PlayAtPosEx(1,1,param_1[0x12],iVar1,0x10000,param_7 * 2);
      NetCli_SendFire(iVar1 + 0x34,iVar1 + 0x4c,*param_1,param_7,DAT_0056579c);
      _DAT_005b1ed8 = _DAT_005b1ed8 + _DAT_0052e59c;
      return;
    }
    SrvSend_ProjectileFired
              (iVar1 + 0x34,iVar1 + 0x4c,*param_1,param_7,0,0,0,*(undefined4 *)(iVar1 + 100),0);
  }
  return;
}

