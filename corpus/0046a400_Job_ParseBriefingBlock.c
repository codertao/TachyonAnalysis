
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse one BLOCK%d briefing step (pak/image/audio/text) [inferred] */

void Job_ParseBriefingBlock
               (int param_1,float param_2,undefined4 param_3,float param_4,undefined4 param_5,
               undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int local_28;
  undefined1 local_20 [32];
  
  fVar2 = param_4;
  uVar1 = param_2;
  Cbin_FindSection(param_2,param_4);
  Cbin_GetParam_Ctx(uVar1,s_BLOCK_DELAY_0053fffc,0,0,&param_4,2,1,fVar2);
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_FILE_0053fff0,param_1 + 0x40,0x3f,0,4,1,fVar2);
  param_2 = 1.0;
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_DELAY_0053ffe4,0,0,&param_2,2,1,fVar2);
  local_28 = (int)(longlong)ROUND(param_2 * _DAT_0052e548);
  *(int *)(param_1 + 0x80) = local_28;
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_VARVAL_0053ffd4,0,0,param_1 + 0x8c,1,1,fVar2);
  iVar3 = Cbin_GetParam_Ctx(uVar1,s_AUDIO_VOLUME_0053ffc4,0,0,(undefined4 *)(param_1 + 0x88),1,1,
                            fVar2);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0xff;
  }
  local_28 = (int)(longlong)ROUND(param_4);
  if (local_28 == -1) {
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  else {
    local_28 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
    *(int *)(param_1 + 0x120) = local_28;
  }
  Cbin_GetParam_Ctx(uVar1,s_PAK_DELAY_0053ffb8,0,0,&param_4,2,1,fVar2);
  local_28 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
  *(int *)(param_1 + 0xb0) = local_28;
  *(int *)(param_1 + 0xb4) = local_28;
  Cbin_GetParam_Ctx(uVar1,s_TEXT_DELAY_0053ffac,0,0,&param_4,2,1,fVar2);
  local_28 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
  *(int *)(param_1 + 0xa4) = local_28;
  Cbin_GetField_Ctx(uVar1,s_DELAY_IMAGE_0053ffa0,0,0,param_1 + 0xb8,fVar2);
  Cbin_GetField_Ctx(uVar1,s_TEXT_CLEAR_0053ff94,0,0,param_1 + 0xc4,fVar2);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
  Cbin_GetField_Ctx(uVar1,s_NO_TEXT_0054ab04,0,0,param_1 + 0xac,fVar2);
  Cbin_GetField_Ctx(uVar1,s_TT_LONG_GROUP_0054aaf4,local_20,0x1f,0,fVar2);
  Cbin_GetField_Ctx(uVar1,s_TT_ID_LONG_0054aae8,param_1 + 0x20,0x1f,0,fVar2);
  iVar3 = Cbin_GetField_Ctx(uVar1,s_FONT_LONG_0054aadc,param_1,0x1f,0,fVar2);
  if (iVar3 == 0) {
    str_sprintf(param_1,param_5);
  }
  uVar4 = Rtxt_Lookup(param_3,local_20,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  Cbin_FindSection(uVar1,fVar2);
  iVar3 = Cbin_FindParam(s_TEXT_RECT_0054aad0,0,0,(undefined4 *)(param_1 + 0x94),1,1,fVar2);
  if (iVar3 == 0) {
    if (param_6 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = *param_6;
      *(undefined4 *)(param_1 + 0x98) = param_6[1];
      *(undefined4 *)(param_1 + 0x9c) = param_6[2];
      *(undefined4 *)(param_1 + 0xa0) = param_6[3];
    }
  }
  else {
    Cbin_GetParamN_Ctx(s_TEXT_RECT_0054aad0,0,0,param_1 + 0x98,1,2,fVar2);
    Cbin_GetParamN_Ctx(s_TEXT_RECT_0054aad0,0,0,param_1 + 0x9c,1,3,fVar2);
    Cbin_GetParamN_Ctx(s_TEXT_RECT_0054aad0,0,0,param_1 + 0xa0,1,4,fVar2);
  }
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  Cbin_GetField_Ctx(uVar1,s_USE_IMAGE_0053ff88,0,0,param_1 + 200,fVar2);
  Cbin_FindSection(uVar1,fVar2);
  Cbin_FindParam(s_IMAGE_AREA_0053fe24,param_1 + 0xcc,0x1f,0,4,1,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,param_1 + 0xec,0xf,0,4,2,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x10c,1,3,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x110,1,4,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x114,1,5,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,(undefined4 *)(param_1 + 0x118),1,6,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x11c,1,7,fVar2);
  FUN_00469ee0(uVar1,param_1 + 0xc0,fVar2,param_7);
  return;
}

