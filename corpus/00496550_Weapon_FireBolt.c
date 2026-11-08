
/* def+0x6c for guns: create bolt, post-think by owner; flag 2 (client) -> sound + send 0x2001;
   server -> SrvSend_ProjectileFired 0x1002 */

void Weapon_FireBolt(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                    uint param_6,int param_7,byte param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_44 = *param_5;
  local_40 = param_5[1];
  local_3c = param_5[2];
  if ((*(int *)(param_3 + 0x90) == 0) || ((param_8 & 0x80) == 0)) {
    Vec_RotateByOrientation(param_2 + 0xc,&local_44);
  }
  else {
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_34 = *(undefined4 *)(param_2 + 0x10);
    local_30 = *(undefined4 *)(param_2 + 0x14);
    FUN_004964d0(param_3,param_1,*(int *)(param_3 + 0x90),&local_38,param_2);
    Vec_RotateByOrientation(&local_38,&local_44);
  }
  local_20 = &local_44;
  local_14 = 0;
  local_10 = 0;
  local_28 = param_3;
  local_1c = param_6;
  local_18 = param_2;
  local_24 = param_4;
  local_2c = param_1;
  local_8 = DAT_00565794;
  iVar1 = Proj_CreateBolt(&local_2c);
  if (iVar1 != 0) {
    if (param_1[0x3a] == 0) {
      if ((param_6 & 2) == 0) {
        *(code **)(iVar1 + 0x6c) = Proj_PostThinkServer;
      }
      else {
        *(code **)(iVar1 + 0x6c) = Proj_PostThinkOwned;
      }
    }
    else {
      *(int *)(iVar1 + 0x6c) = param_1[0x3a];
    }
    if ((param_6 & 2) != 0) {
      FUN_00466620(1,1,param_1[0x12],iVar1,0x10000,param_7 * 2,0);
      NetCli_SendFire(iVar1 + 0x34,iVar1 + 0x4c,*param_1,param_7,DAT_0056579c);
      return;
    }
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_3 + 0x78);
    }
    SrvSend_ProjectileFired
              (iVar1 + 0x34,iVar1 + 0x4c,*param_1,param_7,0,0,0,*(undefined4 *)(iVar1 + 100),uVar2);
    if (*param_1 == 0x1d) {
      *(code **)(iVar1 + 0x6c) = Proj_PostThinkServerLightTurret;
    }
  }
  return;
}

