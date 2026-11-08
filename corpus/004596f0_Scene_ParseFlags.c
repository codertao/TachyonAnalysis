
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* .sen header: END_MISSION 1, NO_AI_COLLIDE 2 (parsed, never read), EXILE 4, END_MISSION_TO_CREDITS
   0x10, _TO_MAIN 0x20 -> scene +0x134 */

void Scene_ParseFlags(uint *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  float local_d0;
  longlong local_cc;
  undefined1 local_c4 [4];
  undefined1 local_c0 [64];
  char local_80 [128];
  
  Cbin_GetParam(&DAT_00549258,s_CAMERA_00549260,0,0,&local_d0,2,1);
  local_cc = (longlong)ROUND(local_d0 * _DAT_0052e54c);
  param_1[7] = (uint)local_cc;
  Cbin_GetParam(&DAT_00549258,s_CAMERA_00549260,0,0,&local_d0,2,2);
  local_cc = (longlong)ROUND(local_d0 * _DAT_0052e540 * (float)_DAT_0052e538);
  param_1[4] = (uint)local_cc;
  Cbin_GetParam(&DAT_00549258,s_CAMERA_00549260,0,0,&local_d0,2,3);
  puVar4 = (undefined4 *)param_1[1];
  uVar3 = 0;
  local_cc = (longlong)ROUND(local_d0 * _DAT_0052e540 * (float)_DAT_0052e538);
  param_1[5] = (uint)local_cc;
  if (*param_1 != 0) {
    do {
      str_sprintf(local_c0,s__s_POS_00549250,*puVar4);
      iVar1 = Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,1);
      if (iVar1 != 0) {
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e54c);
        puVar4[5] = (uint)local_cc;
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,2);
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e54c);
        puVar4[6] = (uint)local_cc;
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,3);
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e54c);
        puVar4[0xd] = puVar4[0xd] | 8;
        puVar4[7] = (uint)local_cc;
      }
      str_sprintf(local_c0,s__s_ANGLE_00549244,*puVar4);
      iVar1 = Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,1);
      if (iVar1 != 0) {
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[2] = (uint)local_cc;
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,2);
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[3] = (uint)local_cc;
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,&local_d0,2,3);
        local_cc = (longlong)ROUND(local_d0 * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[4] = (uint)local_cc;
        puVar4[0xd] = puVar4[0xd] | 8;
      }
      str_sprintf(local_c0,s__s_HUE_0054923c,*puVar4);
      iVar1 = Cbin_GetParam(&DAT_00549258,local_c0,0,0,puVar4 + 8,1,1);
      if (iVar1 != 0) {
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,puVar4 + 9,1,2);
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,puVar4 + 10,1,3);
        Cbin_GetParam(&DAT_00549258,local_c0,0,0,puVar4 + 0xb,1,4);
        puVar4[0xd] = puVar4[0xd] | 0x20;
      }
      str_sprintf(local_c0,s__s_SET_00549234,*puVar4);
      iVar1 = Cbin_GetParam(&DAT_00549258,local_c0,local_80,0x80,0,4,1);
      if (iVar1 != 0) {
        pcVar2 = _strstr(local_80,s__CAMERA_ANCHOR_00549224);
        if (pcVar2 != (char *)0x0) {
          puVar4[0xd] = puVar4[0xd] | 4;
        }
        pcVar2 = _strstr(local_80,s_RUN_AI_0054921c);
        if (pcVar2 != (char *)0x0) {
          puVar4[0xd] = puVar4[0xd] | 0x10;
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x19;
    } while (uVar3 < *param_1);
  }
  param_1[0x4d] = 0;
  iVar1 = Cbin_GetScalar(&DAT_00549258,s_END_MISSION_00549210,0,0,local_c4);
  if (iVar1 != 0) {
    param_1[0x4d] = param_1[0x4d] | 1;
  }
  iVar1 = Cbin_GetScalar(&DAT_00549258,s_END_MISSION_TO_CREDITS_005491f8,0,0,local_c4);
  if (iVar1 != 0) {
    param_1[0x4d] = param_1[0x4d] | 0x10;
  }
  iVar1 = Cbin_GetScalar(&DAT_00549258,s_END_MISSION_TO_MAIN_005491e4,0,0,local_c4);
  if (iVar1 != 0) {
    param_1[0x4d] = param_1[0x4d] | 0x20;
  }
  iVar1 = Cbin_GetScalar(&DAT_00549258,s_NO_AI_COLLIDE_005491d4,0,0,local_c4);
  if (iVar1 != 0) {
    param_1[0x4d] = param_1[0x4d] | 2;
  }
  iVar1 = Cbin_GetParam(&DAT_00549258,s_EXILE_005491cc,0,0,param_1 + 0x28,1,1);
  if (iVar1 != 0) {
    Cbin_GetParam(&DAT_00549258,s_EXILE_005491cc,param_1 + 0x29,0xf,0,4,2);
    Cbin_GetParam(&DAT_00549258,s_EXILE_005491cc,param_1 + 0x2d,0xf,0,4,3);
    Cbin_GetParam(&DAT_00549258,s_EXILE_005491cc,param_1 + 0x31,0x1f,0,4,4);
    Cbin_GetParam(&DAT_00549258,s_EXILE_005491cc,param_1 + 0x39,0x1f,0,4,5);
    param_1[0x4d] = param_1[0x4d] | 4;
  }
  iVar1 = Cbin_GetParam(&DAT_00549258,&DAT_005491c8,param_1 + 0x41,0x10,0,4,1);
  if (iVar1 != 0) {
    Cbin_GetParam(&DAT_00549258,&DAT_005491c8,param_1 + 0x45,0x20,0,4,2);
  }
  return;
}

