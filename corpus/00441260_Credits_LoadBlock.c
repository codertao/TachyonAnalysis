
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Credits_LoadBlock(int param_1,float param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int local_8;
  
  fVar2 = param_4;
  uVar1 = param_2;
  Cbin_FindSection(param_2,param_4);
  Cbin_GetParam_Ctx(uVar1,s_BLOCK_DELAY_0053fffc,0,0,&param_4,2,1,fVar2);
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_FILE_0053fff0,param_1 + 0x40,0x3f,0,4,1,fVar2);
  param_2 = 1.0;
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_DELAY_0053ffe4,0,0,&param_2,2,1,fVar2);
  local_8 = (int)(longlong)ROUND(param_2 * _DAT_0052e548);
  *(int *)(param_1 + 0x80) = local_8;
  Cbin_GetParam_Ctx(uVar1,s_AUDIO_VARVAL_0053ffd4,0,0,param_1 + 0x8c,1,1,fVar2);
  iVar3 = Cbin_GetParam_Ctx(uVar1,s_AUDIO_VOLUME_0053ffc4,0,0,(undefined4 *)(param_1 + 0x88),1,1,
                            fVar2);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0xff;
  }
  local_8 = (int)(longlong)ROUND(param_4);
  if (local_8 == -1) {
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  else {
    local_8 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
    *(int *)(param_1 + 0x120) = local_8;
  }
  Cbin_GetParam_Ctx(uVar1,s_PAK_DELAY_0053ffb8,0,0,&param_4,2,1,fVar2);
  local_8 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
  *(int *)(param_1 + 0xb0) = local_8;
  *(int *)(param_1 + 0xb4) = local_8;
  Cbin_GetParam_Ctx(uVar1,s_TEXT_DELAY_0053ffac,0,0,&param_4,2,1,fVar2);
  local_8 = (int)(longlong)ROUND(param_4 * _DAT_0052e548);
  *(int *)(param_1 + 0xa4) = local_8;
  Cbin_GetField_Ctx(uVar1,s_DELAY_IMAGE_0053ffa0,0,0,param_1 + 0xb8,fVar2);
  Cbin_GetField_Ctx(uVar1,s_TEXT_CLEAR_0053ff94,0,0,param_1 + 0xc4,fVar2);
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  Cbin_GetField_Ctx(uVar1,s_USE_IMAGE_0053ff88,0,0,param_1 + 200,fVar2);
  Cbin_FindSection(uVar1,fVar2);
  Cbin_FindParam(s_IMAGE_AREA_0053fe24,param_1 + 0xcc,0x1f,0,4,1,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,param_1 + 0xec,0xf,0,4,2,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x10c,1,3,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x110,1,4,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,param_1 + 0x114,1,5,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,(undefined4 *)(param_1 + 0x118),1,6,fVar2);
  Cbin_GetParamN_Ctx(s_IMAGE_AREA_0053fe24,0,0,(undefined4 *)(param_1 + 0x11c),1,7,fVar2);
  return;
}

