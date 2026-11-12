
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Scene_LoadCameraFrame(undefined4 param_1,int *param_2,float param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  ppuVar4 = &PTR_s_MOVETO_R_00548ed0;
  str_sprintf(local_60,s_CAMERA_FRAME__02d_005492c0,param_3);
  Cbin_GetParam(local_60,&DAT_005327dc,0,0,&param_3,2,1);
  local_68 = (int)(longlong)ROUND(param_3 * _DAT_0052e548);
  *param_2 = local_68;
  if (local_68 < 1) {
    *param_2 = 1;
  }
  Cbin_GetParam(local_60,s_PAUSE_005327d4,0,0,&param_3,2,1);
  local_68 = (int)(longlong)ROUND(param_3 * _DAT_0052e548);
  param_2[1] = local_68;
  iVar3 = Cbin_GetParam(local_60,s_TARGET_00534a58,local_40,0x20,0,4,1);
  if (iVar3 != 0) {
    iVar3 = Scene_FindMember(param_1,local_40);
    param_2[6] = iVar3;
  }
  iVar3 = Cbin_GetParam(local_60,s_ANCHOR_005492b8,local_40,0x20,0,4,1);
  puVar2 = PTR_s_MOVETO_R_00548ed0;
  if (iVar3 != 0) {
    iVar3 = Scene_FindMember(param_1,local_40);
    param_2[7] = iVar3;
    puVar2 = PTR_s_MOVETO_R_00548ed0;
  }
  while (puVar2 != (undefined *)0x0) {
    iVar3 = Cbin_GetParam(local_60,*ppuVar4,0,0,&param_3,2,1);
    if ((iVar3 != 0) && ((code *)ppuVar4[1] != (code *)0x0)) {
      (*(code *)ppuVar4[1])(param_2,local_60,*ppuVar4,param_3);
    }
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 2;
    puVar2 = *ppuVar1;
  }
  iVar3 = Cbin_GetParam(local_60,s_END_SCENE_005492ac,0,0,&param_3,2,1);
  if (iVar3 != 0) {
    param_2[8] = param_2[8] | 2;
  }
  return;
}

