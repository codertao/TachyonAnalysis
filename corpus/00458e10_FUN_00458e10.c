
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458e10(undefined4 param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_48;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  fVar1 = param_3;
  str_sprintf(local_20,s_TEXT_ACTION__02d_00549120,param_3);
  *(float *)(param_2 + 0x24) = fVar1;
  Cbin_GetParam(local_20,s_START_00549118,0,0,&param_3,2,1);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 4) = local_48;
  Cbin_GetParam(local_20,s_START_00549118,0,0,&param_3,2,2);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 8) = local_48;
  Cbin_GetParam(local_20,s_START_00549118,0,0,&param_3,2,3);
  if (param_3 <= _DAT_0052e59c) {
    if (param_3 < _DAT_0052e598) {
      param_3 = 0.0;
    }
  }
  else {
    param_3 = 1.0;
  }
  local_48._0_2_ = (ushort)(longlong)ROUND(param_3 * _DAT_0052eb20);
  *(uint *)(param_2 + 0xc) = (uint)(ushort)local_48;
  Cbin_GetParam(local_20,s_START_00549118,0,0,&param_3,2,4);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 0x10) = local_48;
  Cbin_GetParam(local_20,s_FINISH_00549110,0,0,&param_3,2,1);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 0x14) = local_48;
  Cbin_GetParam(local_20,s_FINISH_00549110,0,0,&param_3,2,2);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 0x18) = local_48;
  Cbin_GetParam(local_20,s_FINISH_00549110,0,0,&param_3,2,3);
  if (param_3 <= _DAT_0052e59c) {
    if (param_3 < _DAT_0052e598) {
      param_3 = 0.0;
    }
  }
  else {
    param_3 = 1.0;
  }
  local_48._0_2_ = (ushort)(longlong)ROUND(param_3 * _DAT_0052eb20);
  *(uint *)(param_2 + 0x1c) = (uint)(ushort)local_48;
  Cbin_GetParam(local_20,s_FINISH_00549110,0,0,&param_3,2,4);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e544);
  *(undefined4 *)(param_2 + 0x20) = local_48;
  Cbin_GetParam(local_20,s_JUSTIFY_00549108,local_40,0x20,0,4,1);
  iVar2 = str_cmp(local_40,s_RIGHT_00549100);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_2 + 0x2c) | 8;
  }
  else {
    iVar2 = str_cmp(local_40,s_CENTER_005490f8);
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_2 + 0x2c) | 4;
    }
    else {
      iVar2 = str_cmp(local_40,s_BOTTOM_005490f0);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(param_2 + 0x2c) | 0x20;
      }
      else {
        iVar2 = str_cmp(local_40,s_VERTCENTERED_005490e0);
        if (iVar2 == 0) {
          uVar3 = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        else {
          iVar2 = str_cmp(local_40,s_CENTER_VERTCENTERED_005490cc);
          if (iVar2 == 0) {
            uVar3 = *(uint *)(param_2 + 0x2c) | 0x14;
          }
          else {
            iVar2 = str_cmp(local_40,s_CENTER_BOTTOM_005490bc);
            if (iVar2 == 0) {
              uVar3 = *(uint *)(param_2 + 0x2c) | 0x24;
            }
            else {
              iVar2 = str_cmp(local_40,s_RIGHT_VERTCENTERED_005490a8);
              if (iVar2 == 0) {
                uVar3 = *(uint *)(param_2 + 0x2c) | 0x18;
              }
              else {
                iVar2 = str_cmp(local_40,s_RIGHT_BOTTOM_00549098);
                if (iVar2 != 0) goto LAB_00459167;
                uVar3 = *(uint *)(param_2 + 0x2c) | 0x28;
              }
            }
          }
        }
      }
    }
  }
  *(uint *)(param_2 + 0x2c) = uVar3;
LAB_00459167:
  Cbin_GetParam(local_20,s_SHADOW_00549090,local_40,0x20,0,4,1);
  iVar2 = str_cmp(local_40,&DAT_00541270);
  if (iVar2 == 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
  }
  Cbin_GetParam(local_20,s_BILINEAR_00549084,local_40,0x20,0,4,1);
  iVar2 = str_cmp(local_40,s_FALSE_00541294);
  if (iVar2 == 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x80;
  }
  Cbin_GetParam(local_20,&DAT_005327dc,0,0,&param_3,2,1);
  local_48 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e548);
  *(undefined4 *)(param_2 + 0x28) = local_48;
  return;
}

