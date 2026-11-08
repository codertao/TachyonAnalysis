
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043b430(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = Ui_FindWindowDef(param_1,param_2);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xf0) & 4) != 0)) {
    if (*(int *)(iVar2 + 100) != 0) {
      local_20 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x54));
      _DAT_00562bf0 = (*(float *)(iVar2 + 0x54) - (float)local_20) + _DAT_00562bf0;
      local_20 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x58));
      _DAT_00562bf4 = (*(float *)(iVar2 + 0x58) - (float)local_20) + _DAT_00562bf4;
      local_10 = *(int *)(iVar2 + 0x44);
      local_20 = (int)(longlong)ROUND(_DAT_00562bf0);
      iVar1 = local_20;
      local_8 = *(int *)(iVar2 + 0x4c) + local_10;
      local_c = *(int *)(iVar2 + 0x48);
      local_4 = *(int *)(iVar2 + 0x50) + local_c;
      local_20 = (int)(longlong)ROUND(_DAT_00562bf4);
      Ui_RefreshWindow(param_1,iVar2,&local_10,0);
      local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x54));
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + local_18 + iVar1;
      local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x58));
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + local_18 + local_20;
      *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + -1;
      if (iVar1 != 0) {
        _DAT_00562bf0 = _DAT_00562bf0 - (float)iVar1;
      }
      if (local_20 != 0) {
        _DAT_00562bf4 = _DAT_00562bf4 - (float)local_20;
      }
      if ((*(float *)(iVar2 + 0x54) < _DAT_0052e598) &&
         (iVar1 = *(int *)(iVar2 + 0x44), iVar1 < 0x280)) {
        if (*(int *)(iVar2 + 0xe8) == 0) {
          local_8 = *(int *)(iVar2 + 0x4c);
        }
        else {
          local_8 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x166c);
        }
        local_8 = local_8 + iVar1;
        local_c = *(int *)(iVar2 + 0x48);
        local_10 = iVar1;
        if (*(int *)(iVar2 + 0xe8) == 0) {
          local_4 = *(int *)(iVar2 + 0x50) + local_c;
        }
        else {
          local_4 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x1670) + local_c;
        }
      }
      if ((_DAT_0052e598 < *(float *)(iVar2 + 0x54)) && (*(int *)(iVar2 + 0x44) != 0)) {
        local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x54));
        local_10 = *(int *)(iVar2 + 0x44) + local_18 * -2;
        local_8 = *(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x4c);
        local_c = *(int *)(iVar2 + 0x48);
        if (*(int *)(iVar2 + 0xe8) == 0) {
          local_4 = *(int *)(iVar2 + 0x50);
        }
        else {
          local_4 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x1670);
        }
        local_4 = local_4 + local_c;
      }
      if (*(float *)(iVar2 + 0x58) < _DAT_0052e598) {
        local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x58));
        local_c = *(int *)(iVar2 + 0x48) + local_18 * 2;
        local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x58));
        local_4 = local_c + local_18 * -2;
        local_10 = *(int *)(iVar2 + 0x44);
        if (*(int *)(iVar2 + 0xe8) == 0) {
          local_8 = *(int *)(iVar2 + 0x4c);
        }
        else {
          local_8 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x166c);
        }
        local_8 = local_8 + local_10;
      }
      if ((_DAT_0052e598 < *(float *)(iVar2 + 0x58)) && (*(int *)(iVar2 + 0x48) != 0)) {
        local_18 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x58));
        local_c = *(int *)(iVar2 + 0x48) + local_18 * -2;
        local_4 = *(int *)(iVar2 + 0x48);
        local_10 = *(int *)(iVar2 + 0x44);
        if (*(int *)(iVar2 + 0xe8) == 0) {
          local_8 = *(int *)(iVar2 + 0x4c);
        }
        else {
          local_8 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x166c);
        }
        local_8 = local_8 + local_10;
      }
      if (local_10 < 0) {
        local_10 = 0;
      }
      else if (0x27f < local_10) {
        local_10 = 0x27f;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      else if (0x1df < local_c) {
        local_c = 0x1df;
      }
      if (local_8 < 0) {
        local_8 = 0;
      }
      else if (0x27f < local_8) {
        local_8 = 0x27f;
      }
      if (local_4 < 0) {
        local_4 = 0;
      }
      else if (0x1df < local_4) {
        local_4 = 0x1df;
      }
      Ui_RefreshWindow(param_1,iVar2 + 0x68,&local_10,1);
      return 1;
    }
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x5c);
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x60);
    clear_flags(iVar2 + 0xf0,4);
    Ui_RefreshWindow(param_1,iVar2 + 0x68,0,0);
    _DAT_00562bf0 = 0.0;
    _DAT_00562bf4 = 0.0;
    if (*(code **)(iVar2 + 0x108) != (code *)0x0) {
      (**(code **)(iVar2 + 0x108))(iVar2);
    }
  }
  return 0;
}

