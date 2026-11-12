
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse one IMAGE/SUN entry into a 0x64-byte record */

void Bdf_ParseImageEntry(float param_1,undefined4 *param_2,int param_3)

{
  vec3 *fvec;
  float fVar1;
  undefined4 *puVar2;
  int a0;
  int iVar3;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  float local_18 [6];
  
  fVar1 = param_1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar3 = Cbin_FindParam_Global(param_1,local_28,0x10,0,4,1);
  if (iVar3 != 0) {
    Cbin_GetParamN(fVar1,local_38,0x10,0,4,2);
    iVar3 = param_3;
    if (param_3 != 0) {
      Pak_SetForcedTexFlags(0x30000400);
    }
    puVar2 = param_2;
    ModelPool_Load(param_2,local_28,local_38,local_38,&g_FxModelPool,0);
    Pak_SetForcedTexFlags(0);
    Cbin_GetParamN(fVar1,0,0,&param_1,2,3);
    local_58 = (int)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    a0 = local_58;
    Cbin_GetParamN(fVar1,0,0,&param_1,2,4);
    local_58 = (int)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    local_40 = local_58;
    if (iVar3 == 0) {
      Cbin_GetParamN(fVar1,0,0,&param_1,2,5);
      local_58 = (int)(longlong)ROUND(param_1 * _DAT_0052e544);
      puVar2[5] = local_58;
    }
    else {
      puVar2[5] = iVar3;
    }
    Cbin_GetParamN(fVar1,0,0,&param_1,2,6);
    local_58 = (int)(longlong)ROUND(param_1 * _DAT_0052e544);
    puVar2[7] = local_58;
    call_Math_SinCos3(local_18,a0,local_40,0);
    call_Rot_SetSinCos(local_18);
    fvec = (vec3 *)(puVar2 + 3);
    some_rotate_by_global(fvec,fvec);
    puVar2[6] = 0x50;
    puVar2[0x16] = *puVar2;
    puVar2[10] = 8;
    Model_SelectState(puVar2 + 6,0);
    Vec_DirAngles(fvec,&local_50,puVar2 + 0x13);
  }
  return;
}

