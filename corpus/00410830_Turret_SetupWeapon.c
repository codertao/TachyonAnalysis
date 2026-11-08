
/* 'turret mount data': mount points from pak, WeaponSys_Init(flag 4) */

void Turret_SetupWeapon(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  FUN_0048e3d0(&local_4,param_3 * 0x1c,4,s_turret_mount_data_00533ebc,0xd500);
  iVar1 = local_4;
  for (iVar2 = param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_00463810(param_4,param_5,iVar1,param_7);
    iVar1 = iVar1 + 0x1c;
  }
  WeaponMounts_Init(param_2,local_4,param_3,param_6);
  FUN_00493590(param_1,param_2,0xd500,1);
  return;
}

