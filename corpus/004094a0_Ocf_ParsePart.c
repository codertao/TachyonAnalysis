
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* part_NN: SCALE, ANGLES, ROTATE, TYPE (flags = 1<<(TYPE-1) at +0x34), SUB_TYPE +0x60, PART_ID,
   HITPOINTS, docks, ATTACH, SOUND_LOOP */

void Ocf_ParsePart(int param_1,float param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_6c;
  longlong local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  fVar2 = param_2;
  str_sprintf(local_60,s_PART__02d_00532c78,param_2);
  Cbin_SelectGroup(local_60);
  iVar3 = Cbin_GetScalar(local_60,&DAT_00532c58,local_40,0x1f,0);
  if (iVar3 != 0) {
    FUN_004093c0(param_1,local_40);
  }
  *(float *)(param_1 + 0x44) = fVar2;
  Cbin_GetParam(local_60,s_SCALE_005327cc,0,0,&param_2,2,1);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e544);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ANGLES_00532d44,0,0,&param_2,2,1);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ANGLES_00532d44,0,0,&param_2,2,2);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x14) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ANGLES_00532d44,0,0,&param_2,2,3);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ROTATE_00532d3c,0,0,&param_2,2,1);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ROTATE_00532d3c,0,0,&param_2,2,2);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_68;
  Cbin_GetParam(local_60,s_ROTATE_00532d3c,0,0,&param_2,2,3);
  local_68 = (longlong)ROUND(param_2 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_68;
  Cbin_GetParam(local_60,&DAT_00532d34,0,0,(int *)(param_1 + 0x38),1,1);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x34) = 1 << ((char)iVar3 - 1U & 0x1f);
  }
  Cbin_GetParam(local_60,s_SUB_TYPE_00532d28,0,0,param_1 + 0x60,1,1);
  Cbin_GetParam(local_60,s_PART_ID_00532d20,0,0,param_1 + 0x58,1,1);
  piVar1 = (int *)(param_1 + 0x5c);
  Cbin_GetParam(local_60,s_HITPOINTS_00532acc,0,0,piVar1,1,1);
  iVar3 = Cbin_GetParam(local_60,&DAT_00532d18,0,0,&local_6c,1,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
    Cbin_GetParam(local_60,&DAT_00532d18,0,0,&param_2,2,2);
    local_68 = (longlong)ROUND(param_2 * _DAT_0052e544);
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_68;
  }
  iVar3 = Cbin_GetParam(local_60,s_LAUNCH_DOCK_00532d0c,0,0,&local_6c,1,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
  }
  iVar3 = Cbin_GetParam(local_60,s_CREDIT_POWERPLANT_00532cf8,0,0,&local_6c,1,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x2000;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
  }
  iVar3 = Cbin_GetParam(local_60,s_LAND_DOCK_00532cec,0,0,&local_6c,1,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
    Cbin_GetParam(local_60,s_LAND_DOCK_00532cec,0,0,&param_2,2,2);
    local_68 = (longlong)ROUND(param_2 * _DAT_0052e544);
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_68;
  }
  iVar3 = Cbin_GetParam(local_60,s_RELOAD_DOCK_00532ce0,0,0,&local_6c,1,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x200;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
    iVar3 = Cbin_GetParam(local_60,s_RELOAD_DOCK_00532ce0,0,0,&param_2,2,2);
    if (iVar3 != 0) {
      local_68 = (longlong)ROUND(param_2 * _DAT_0052e544);
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_68;
    }
  }
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x34) & 0x2000) == 0) {
      *piVar1 = (-(uint)((*(uint *)(param_1 + 0x34) & 0x4000) != 0) & 0x1e3660) + 20000;
    }
    else {
      *piVar1 = 400000;
    }
  }
  iVar4 = Cbin_GetParam(local_60,s_ATTACH_00532cd8,local_40,0x40,0,4,1);
  iVar3 = param_3;
  if (iVar4 != 0) {
    iVar4 = FUN_00409370(param_3,local_40);
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      FUN_00409460(param_1,local_40,iVar3);
    }
    Cbin_GetParam(local_60,s_ATTACH_00532cd8,0,0,param_1 + 0x20,1,2);
    Cbin_GetParam(local_60,s_ATTACH_00532cd8,0,0,param_1 + 0x24,1,3);
  }
  iVar4 = Cbin_GetParam(local_60,s_SOUND_LOOP_00532ccc,local_40,0x40,0,4,1);
  if (iVar4 != 0) {
    uVar5 = FUN_00409420(*(undefined4 *)(iVar3 + 8),local_40);
    *(undefined4 *)(param_1 + 0x48) = uVar5;
  }
  return;
}

