
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004061b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  float local_10c;
  longlong local_108;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  local_10c = 0.0;
  str_sprintf(local_100,s__s_FRAME__02d_00532798,param_1,param_3);
  uVar1 = Cbin_CountEntries(local_100,s_PART_DEST_005327e4);
  param_2[1] = uVar1;
  Cbin_GetParam(local_100,&DAT_005327dc,0,0,&local_10c,2,1);
  local_108 = (longlong)ROUND(local_10c * _DAT_0052e548);
  *param_2 = (undefined4)local_108;
  iVar2 = Cbin_GetParam(local_100,s_PAUSE_005327d4,0,0,&local_10c,2,1);
  if (iVar2 != 0) {
    local_108 = (longlong)ROUND(local_10c * _DAT_0052e548);
    param_2[3] = (undefined4)local_108;
  }
  Cbin_GetParam(local_100,s_SCALE_005327cc,0,0,&local_10c,2,1);
  local_108 = (longlong)ROUND(local_10c * _DAT_0052e544);
  param_2[7] = (undefined4)local_108;
  iVar2 = Cbin_GetParam(local_100,s_INTENSITY_005327c0,0,0,&local_10c,2,1);
  if (iVar2 == 0) {
    param_2[8] = 0xffffffff;
  }
  else {
    local_108 = (longlong)ROUND(local_10c * _DAT_0052e544);
    param_2[8] = (undefined4)local_108;
  }
  iVar2 = Cbin_GetParam(local_100,s_SOUND_00532778,local_80,0x7f,0,4,1);
  if (iVar2 != 0) {
    uVar1 = FUN_00406170(local_80);
    param_2[9] = uVar1;
    Cbin_GetParam(local_100,s_SOUND_00532778,0,0,&local_10c,2,2);
    local_108 = (longlong)ROUND(local_10c * _DAT_0052e548);
    param_2[10] = (undefined4)local_108;
  }
  if (param_2[1] != 0) {
    FUN_0048e3d0(param_2 + 2,param_2[1] * 0x1c,4,s_KEYFRAME_PART_BUFFER_005327a8,0xcccc);
    Cbin_SelectGroup(local_100);
    uVar3 = 0;
    puVar4 = (undefined4 *)param_2[2];
    if (param_2[1] != 0) {
      do {
        FUN_0049bdb0(s_PART_DEST_005327e4,local_80,0x20,0,4,1);
        uVar1 = FUN_00406130(local_80);
        *puVar4 = uVar1;
        FUN_0049b930(s_PART_DEST_005327e4,0,0,&local_10c,2,2);
        local_108 = (longlong)ROUND(local_10c * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[1] = (undefined4)local_108;
        FUN_0049b930(s_PART_DEST_005327e4,0,0,&local_10c,2,3);
        local_108 = (longlong)ROUND(local_10c * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[2] = (undefined4)local_108;
        FUN_0049b930(s_PART_DEST_005327e4,0,0,&local_10c,2,4);
        uVar3 = uVar3 + 1;
        local_108 = (longlong)ROUND(local_10c * _DAT_0052e540 * (float)_DAT_0052e538);
        puVar4[3] = (undefined4)local_108;
        puVar4 = puVar4 + 7;
      } while (uVar3 < (uint)param_2[1]);
    }
  }
  return;
}

