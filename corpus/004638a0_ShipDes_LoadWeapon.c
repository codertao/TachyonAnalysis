
/* sweep: WEAP_%d */

void ShipDes_LoadWeapon(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  str_sprintf(local_70,s_WEAP__d_0054a270,param_1 + 1);
  Cbin_GetScalar(local_70,s_NUM_MOUNTS_0054a264,0,0,&local_7c);
  Cbin_GetScalar(local_70,s_AI_WEAPON_0054a258,local_60,0x1f,0);
  uVar1 = WeaponName_ToId(local_60);
  Mem_AllocZeroTagged(&local_78,local_7c * 0x1c,4,s_mount_data_0054a24c,0xffff);
  uVar2 = 0;
  iVar3 = local_78;
  if (local_7c != 0) {
    do {
      uVar2 = uVar2 + 1;
      str_sprintf(local_40,s_MOUNT__d_POINT_SLOT_0054a238,uVar2);
      Cbin_GetScalar(local_70,local_40,0,0,&local_74);
      ShipDes_ResolvePointSlot(local_74,param_4,iVar3,0x10000);
      iVar3 = iVar3 + 0x1c;
    } while (uVar2 < local_7c);
  }
  WeaponMounts_Init(param_3,local_78,local_7c,uVar1);
  WeaponSys_InitDefault(param_2,param_3,0xffff,1);
  return;
}

