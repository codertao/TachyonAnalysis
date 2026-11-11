
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00464e70(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_88;
  undefined1 local_80 [128];
  
  uVar3 = (uint)*(byte *)(*DAT_005b2770 + 4);
  iVar1 = *(int *)(param_2 + 0x10);
  param_3 = param_3 + uVar3;
  if (iVar1 == 0) {
    str_sprintf(local_80,s_WAYGROUP__NO_WAYGROUP_0054a43c);
    uVar4 = 0x808080;
  }
  else {
    str_sprintf(local_80,s_WAYGROUP___d_WAYPOINT___d_0054a454,*(undefined4 *)(iVar1 + 8),
                (uint)(*(int *)(param_2 + 0x14) - *(int *)(iVar1 + 4)) >> 5);
    uVar4 = 0xffff00;
  }
  FUN_0048e970(local_80,DAT_005b2770,0x1c,param_3,uVar4,0xffff,0x10000,2);
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar2 = Vec3_DistanceTo(param_1 + 0x34,*(undefined4 *)(param_2 + 0x14));
    str_sprintf(local_80,s_DIST_TO_WAYPOINT___2_2f_0054a424,(double)((float)uVar2 * _DAT_0052e824));
    param_3 = param_3 + uVar3;
    FUN_0048e970(local_80,DAT_005b2770,0x1c,param_3,uVar4,0xffff,0x10000,2);
    if (*(float *)(param_1 + 0xd4) == _DAT_0052e598) {
      str_sprintf(local_80,s_ETA_TO_WAYPOINT__N_A_0054a3f0);
      FUN_0048e970(local_80,DAT_005b2770,0x1c,param_3 + uVar3,uVar4,0xffff,0x10000,2);
    }
    else {
      local_88 = (uint)(longlong)ROUND(((float)uVar2 / *(float *)(param_1 + 0xd4)) * _DAT_0052e6d0);
      str_sprintf(local_80,s_ETA_TO_WAYPOINT___02d__02d_0054a408,local_88 / 0x3c,local_88 % 0x3c);
      FUN_0048e970(local_80,DAT_005b2770,0x1c,param_3 + uVar3,uVar4,0xffff,0x10000,2);
    }
    param_3 = param_3 + uVar3 * 2;
    uVar4 = FUN_00401020();
    str_sprintf(local_80,s_Next_Waypoint_Cmd___s_0054a3d8,uVar4);
    FUN_0048e970(local_80,DAT_005b2770,0x1c,param_3,0xffffff,0xffff,0x10000,2);
  }
  return param_3;
}

