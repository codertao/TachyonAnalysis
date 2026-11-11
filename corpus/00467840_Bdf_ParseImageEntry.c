
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse one IMAGE/SUN entry into a 0x64-byte record */

void Bdf_ParseImageEntry(float param_1,undefined4 *param_2,int param_3)

{
  vec3 *fvec;
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  fVar1 = param_1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar4 = FUN_0049bdb0(param_1,local_28,0x10,0,4,1);
  if (iVar4 != 0) {
    FUN_0049b930(fVar1,local_38,0x10,0,4,2);
    iVar4 = param_3;
    if (param_3 != 0) {
      FUN_004b1ca0(0x30000400);
    }
    puVar2 = param_2;
    ModelPool_Load(param_2,local_28,local_38,local_38,&g_FxModelPool,0);
    FUN_004b1ca0(0);
    FUN_0049b930(fVar1,0,0,&param_1,2,3);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    uVar3 = local_58;
    FUN_0049b930(fVar1,0,0,&param_1,2,4);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    local_40 = local_58;
    if (iVar4 == 0) {
      FUN_0049b930(fVar1,0,0,&param_1,2,5);
      local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e544);
      puVar2[5] = local_58;
    }
    else {
      puVar2[5] = iVar4;
    }
    FUN_0049b930(fVar1,0,0,&param_1,2,6);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e544);
    puVar2[7] = local_58;
    call_math_todo_with_rotation(local_18,uVar3,local_40,0);
    call_copy_mathresult_to_global(local_18);
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

