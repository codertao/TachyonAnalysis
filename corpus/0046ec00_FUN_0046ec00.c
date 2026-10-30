
void FUN_0046ec00(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  puVar2 = &DAT_005842d0;
  do {
    iVar1 = puVar2[-2];
    if (iVar1 == -1) {
      FUN_004abcc0(0x1f,puVar2[-1],*puVar2,puVar2[1]);
      iVar1 = 0x1f;
    }
    if (puVar2[5] != 0) {
      FUN_00452180(2);
      local_10 = (uint)((longlong)(int)puVar2[-0x13] * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)(int)puVar2[-0x13] * (longlong)DAT_005a67e4) >> 0x20)
                 << 0x10;
      local_c = puVar2[-0x14];
      FUN_004abf90((uint)((longlong)local_c * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)local_c * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   local_10,(uint)((longlong)(int)puVar2[-0x10] * (longlong)DAT_005a67e4) >> 0x10 |
                            (int)((ulonglong)((longlong)(int)puVar2[-0x10] * (longlong)DAT_005a67e4)
                                 >> 0x20) << 0x10,
                   (uint)((longlong)(int)puVar2[-0xf] * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)puVar2[-0xf] * (longlong)DAT_005a67e4) >> 0x20)
                   << 0x10,iVar1);
      if (((puVar2[4] != 0) && (puVar2[2] != 0)) && (puVar2[-4] != 0)) {
        FUN_00452180(4);
        local_10 = puVar2[-0x12];
        FUN_004ace30((uint)((longlong)(int)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)(int)local_10 * (longlong)DAT_005a67e4) >> 0x20) <<
                     0x10,(uint)((longlong)(int)puVar2[-0x11] * (longlong)DAT_005a67e4) >> 0x10 |
                          (int)((ulonglong)((longlong)(int)puVar2[-0x11] * (longlong)DAT_005a67e4)
                               >> 0x20) << 0x10,
                     (uint)((longlong)(int)puVar2[-4] * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)(int)puVar2[-4] * (longlong)DAT_005a67e4) >> 0x20)
                     << 0x10,iVar1);
        iVar1 = puVar2[-4];
        local_20 = (puVar2[-0x12] - iVar1) + -1;
        local_18 = iVar1 + 1 + puVar2[-0x12];
        local_14 = puVar2[-0x11] + 1 + iVar1;
        local_1c = (puVar2[-0x11] - iVar1) + -1;
        if (puVar2[-7] == 0) {
          piVar3 = &local_20;
        }
        else {
          piVar3 = (int *)0x0;
        }
        Ui_RefreshWindow(DAT_005879a0,param_1,piVar3,0);
      }
      if (puVar2[6] != 0) {
        return;
      }
    }
    local_8 = local_8 + 1;
    puVar2 = puVar2 + 0x1b;
    if (0x7f < local_8) {
      return;
    }
  } while( true );
}

