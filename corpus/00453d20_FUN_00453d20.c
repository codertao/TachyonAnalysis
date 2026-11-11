
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453d20(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_38 [24];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_005b2148 == 0) {
    if (param_1 == 0) {
      _DAT_005b2140 = 0;
      DAT_005b2138 = DAT_005b213c;
      return;
    }
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      _DAT_005b2140 = 0;
      DAT_005b2138 = DAT_005b213c;
      return;
    }
    if (*(int *)(param_1 + 0x8c) != 0) {
      pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78);
      if ((pcVar1 != (code *)0x0) && (iVar3 = (*pcVar1)(param_1,10,0), iVar3 == 0)) {
        DAT_005b2138 = DAT_005b213c;
        _DAT_005b2140 = 0;
        return;
      }
      iVar3 = GLBL_SOME_CONTEXT;
      uVar4 = Vec3_DistanceTo(GLBL_SOME_CONTEXT + 0x34,(int *)(param_1 + 0x34));
      if (DAT_005b2144 < uVar4) {
        _DAT_005b2140 = 0;
        DAT_005b2138 = DAT_005b213c;
        return;
      }
      local_20 = *(int *)(param_1 + 0x34) - *(int *)(iVar3 + 0x34);
      local_1c = *(int *)(param_1 + 0x38) - *(int *)(iVar3 + 0x38);
      local_18 = *(int *)(param_1 + 0x3c) - *(int *)(iVar3 + 0x3c);
      FUN_004b1be0(local_38,iVar3 + 0x4c);
      FUN_004b2410(&local_20,&local_20);
      if (0 < local_18) {
        local_c = DAT_005a67d4;
        local_8 = DAT_005a67d8;
        FUN_004b2e00(&local_20,local_14);
        lVar2 = (longlong)DAT_005a67e4;
        uVar4 = FUN_0048e480(local_14,&local_c);
        if (uVar4 < ((uint)(lVar2 * 0x5a00) >> 0x10 |
                    (int)((ulonglong)(lVar2 * 0x5a00) >> 0x20) << 0x10)) {
          if ((DAT_005b2138 == 0) || (DAT_005b2138 = DAT_005b2138 + -1, DAT_005b2138 == 0)) {
            _DAT_005b2140 = 1;
            return;
          }
        }
        else {
          DAT_005b2138 = DAT_005b2138 + 1;
          if (DAT_005b213c < DAT_005b2138) {
            DAT_005b2138 = DAT_005b213c;
          }
          _DAT_005b2140 = 0;
        }
        return;
      }
      _DAT_005b2140 = 0;
      DAT_005b2138 = DAT_005b213c;
      return;
    }
  }
  _DAT_005b2140 = 0;
  DAT_005b2138 = DAT_005b213c;
  return;
}

