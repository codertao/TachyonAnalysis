
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Anim_ParseCameraFrame(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float local_90;
  longlong local_8c;
  int local_84;
  undefined1 local_80 [128];
  
  local_84 = 0;
  local_90 = 0.0;
  str_sprintf(local_80,s__s_CAMERA_FRAME__02d_005327f0,param_1,param_3);
  iVar1 = Cbin_GetParam(local_80,&PTR_s__00545534_0xf_0053282c,0,0,&local_84,1,1);
  if ((iVar1 != 0) && (local_84 != 0)) {
    param_2[4] = param_2[4] | 1;
  }
  Cbin_GetParam(local_80,&DAT_005327dc,0,0,&local_90,2,1);
  local_8c = (longlong)ROUND(local_90 * _DAT_0052e548);
  param_2[5] = (undefined4)local_8c;
  Cbin_GetParam(local_80,s_PAUSE_005327d4,0,0,&local_90,2,1);
  local_8c = (longlong)ROUND(local_90 * _DAT_0052e548);
  param_2[6] = (undefined4)local_8c;
  Cbin_GetParam(local_80,s_CAMERA_DEST_00532820,0,0,&local_90,2,1);
  local_8c = (longlong)ROUND(local_90 * _DAT_0052e54c);
  *param_2 = (undefined4)local_8c;
  FUN_0049b930(s_CAMERA_DEST_00532820,0,0,&local_90,2,2);
  local_8c = (longlong)ROUND(local_90 * _DAT_0052e540 * (float)_DAT_0052e538);
  param_2[1] = (undefined4)local_8c;
  FUN_0049b930(s_CAMERA_DEST_00532820,0,0,&local_90,2,3);
  local_8c._0_4_ = (undefined4)(longlong)ROUND(local_90 * _DAT_0052e540 * (float)_DAT_0052e538);
  param_2[2] = (undefined4)local_8c;
  return;
}

