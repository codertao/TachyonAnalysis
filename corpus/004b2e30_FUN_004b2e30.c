
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2e30(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_90;
  int local_8c;
  vec3 local_84;
  vec3 local_78;
  vec3 local_6c;
  vec3 local_60;
  uint local_54;
  int iStack_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x48);
  local_38 = iVar1;
  if (iVar1 != 0) {
    if ((*param_1 & 0x10) == 0) {
      local_90 = 65536.0;
    }
    else {
      local_90 = (float)*(int *)(param_1 + 4);
    }
    if (param_5 != 0) {
      local_54 = param_5;
      iStack_50 = 0;
      local_90 = (float)param_5 * _DAT_0052e5d8 * local_90;
    }
    call_math_todo_with_rotation
              (local_18,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c));
    DAT_005a6330 = 0x10;
    _DAT_005a6480 = 0x80ff;
    piVar4 = *(int **)(iVar1 + 0x18);
    local_4c = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      do {
        call_copy_mathresult_to_global(local_18);
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)*piVar4);
        local_84.x = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(*piVar4 + 4));
        local_84.y = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(*piVar4 + 8));
        local_84.z = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)piVar4[1]);
        local_60.x = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[1] + 4));
        local_60.y = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[1] + 8));
        local_60.z = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)piVar4[2]);
        local_6c.x = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[2] + 4));
        local_6c.y = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[2] + 8));
        local_6c.z = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)piVar4[3] * (float)_DAT_0052ef60);
        local_78.x = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[3] + 4) * (float)_DAT_0052ef60)
        ;
        local_78.y = local_8c;
        local_8c = (int)(longlong)ROUND(local_90 * *(float *)(piVar4[3] + 8) * (float)_DAT_0052ef60)
        ;
        local_78.z = local_8c;
        some_rotate_by_global(&local_84,&local_84);
        some_rotate_by_global(&local_60,&local_60);
        some_rotate_by_global(&local_6c,&local_6c);
        some_rotate_by_global(&local_78,&local_78);
        call_copy_mathresult_to_global(&DAT_00666ac8);
        FUN_004b2410(&local_84,&local_84);
        FUN_004b2410(&local_60,&local_60);
        FUN_004b2410(&local_6c,&local_6c);
        FUN_004b2410(&local_78,&local_78);
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar2 = *(int *)(param_1 + 0x28);
        local_84.y = local_84.y + iVar1;
        iVar3 = *(int *)(param_1 + 0x30);
        local_84.z = local_84.z + iVar3;
        local_60.x = local_60.x + iVar2;
        local_60.y = local_60.y + iVar1;
        local_60.z = local_60.z + iVar3;
        local_84.x = local_84.x + iVar2;
        local_6c.x = local_6c.x + iVar2;
        local_6c.y = local_6c.y + iVar1;
        local_6c.z = local_6c.z + iVar3;
        local_78.x = local_78.x + local_84.x;
        local_78.y = local_78.y + local_84.y;
        local_78.z = local_78.z + local_84.z;
        local_24 = local_84.x;
        local_20 = local_84.y;
        local_1c = local_84.z;
        FUN_004b2e00(&local_84,&local_40);
        FUN_004b2e00(&local_60,&local_48);
        FUN_004b2e00(&local_6c,&local_54);
        FUN_004b2e00(&local_78,&local_2c);
        FUN_004b2e00(&local_24,&local_34);
        FUN_004abf90(local_40 >> 7,local_3c >> 7,local_48 >> 7,local_44 >> 7,param_2);
        FUN_004abf90(local_40 >> 7,local_3c >> 7,(int)local_54 >> 7,iStack_50 >> 7,param_2);
        FUN_004abf90((int)local_54 >> 7,iStack_50 >> 7,local_48 >> 7,local_44 >> 7,param_2);
        if (param_3 != 0) {
          FUN_004abf90(local_34 >> 7,local_30 >> 7,local_2c >> 7,local_28 >> 7,param_4);
        }
        local_4c = local_4c + 1;
        piVar4 = piVar4 + 0x12;
      } while (local_4c < *(uint *)(local_38 + 0xc));
    }
    return;
  }
  FUN_004b19f0(param_1);
  return;
}

