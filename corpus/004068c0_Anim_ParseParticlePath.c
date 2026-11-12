
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Anim_ParseParticlePath
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float local_110;
  longlong local_10c;
  int local_104;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  local_104 = 0;
  local_110 = 0.0;
  str_sprintf(local_100,s__s_PARTICLE_PATH__02d_00532808,param_1,param_3);
  Cbin_GetParam(local_100,&DAT_005328e8,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e548);
  *param_2 = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_LIFETIME_005328dc,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e548);
  param_2[1] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_PARTICLES_005328d0,local_80,0x7f,0,4,1);
  uVar1 = Anim_FindPathDefine(local_80,param_4);
  param_2[2] = uVar1;
  Cbin_GetParam(local_100,s_SRC_PART_005328c4,local_80,0x7f,0,4,1);
  uVar1 = Anim_FindPartIndex(local_80);
  param_2[3] = uVar1;
  Cbin_GetParam(local_100,s_SRC_PART_005328c4,0,0,param_2 + 4,1,2);
  Cbin_GetParam(local_100,s_SRC_START_005328b8,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[5] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_SRC_START_005328b8,0,0,&local_110,2,2);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[6] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_SRC_START_005328b8,0,0,&local_110,2,3);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[7] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_SRC_END_005328b0,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[10] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_SRC_END_005328b0,0,0,&local_110,2,2);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0xb] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_SRC_END_005328b0,0,0,&local_110,2,3);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0xc] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_PART_005328a4,local_80,0x7f,0,4,1);
  uVar1 = Anim_FindPartIndex(local_80);
  param_2[0x14] = uVar1;
  Cbin_GetParam(local_100,s_DEST_PART_005328a4,0,0,param_2 + 0x15,1,2);
  Cbin_GetParam(local_100,s_DEST_START_00532898,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x16] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_START_00532898,0,0,&local_110,2,2);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x17] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_START_00532898,0,0,&local_110,2,3);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x18] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_END_0053288c,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x1b] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_END_0053288c,0,0,&local_110,2,2);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x1c] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_DEST_END_0053288c,0,0,&local_110,2,3);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e544);
  param_2[0x1d] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_VOLUME_START_0053287c,0,0,&local_104,1,1);
  param_2[8] = local_104 << 0x10;
  Cbin_GetParam(local_100,s_VOLUME_END_00532870,0,0,&local_104,1,1);
  param_2[0xd] = local_104 << 0x10;
  Cbin_GetParam(local_100,s_PARTICLE_LIFE_START_0053285c,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e550);
  param_2[9] = (undefined4)local_10c;
  Cbin_GetParam(local_100,s_PARTICLE_LIFE_END_00532848,0,0,&local_110,2,1);
  local_10c = (longlong)ROUND(local_110 * _DAT_0052e550);
  param_2[0xe] = (undefined4)local_10c;
  Anim_PathComputeDeltas(param_2);
  return;
}

