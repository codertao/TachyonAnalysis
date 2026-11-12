
/* def+0x6c for guided: client (flag 2) only sends 0x2004 (no local missile); server ->
   Proj_CreateMissile with target +0x90 */

void Weapon_FireMissile(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  uVar1 = Missile_HasLockTarget(param_3);
  if ((param_6 & 2) != 0) {
    Snd_PlayAtPosEx2(1,1,param_1[0x12],param_4,0x10000,param_7 * 2,0);
    NetCli_SendFireGuided(param_4,param_5,*param_1,param_7,param_2,uVar1,DAT_0056579c);
    return;
  }
  local_20 = param_5;
  local_10 = *(undefined4 *)(param_3 + 0x90);
  local_1c = param_6;
  local_18 = param_2;
  local_24 = param_4;
  local_28 = param_3;
  local_14 = 0;
  local_2c = param_1;
  local_8 = DAT_00565794;
  Proj_CreateMissile(&local_2c);
  return;
}

