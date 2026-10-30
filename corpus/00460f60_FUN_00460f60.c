
void FUN_00460f60(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_8;
  
  iVar1 = param_1;
  if (((((DAT_005a661c == 0) || ((g_FlightStateFlags & 4) == 0)) &&
       (*(int *)(*(int *)(param_1 + 0xdc) + 0x1d0) == 0)) &&
      (((g_FlightStateFlags & 4) == 0 || (DAT_0058f1c0 == 0)))) && (0 < *(int *)(param_1 + 0x140)))
  {
    if ((*(code **)(DAT_005b1dc4 + 0x84) != (code *)0x0) &&
       (iVar2 = (**(code **)(DAT_005b1dc4 + 0x84))(param_1,DAT_005653f4), iVar2 == 0)) {
      return;
    }
    uVar3 = FUN_0048e630(iVar1 + 0x34,&DAT_005653cc);
    FUN_004192c0(uVar3,DAT_005653e0,&param_1,&local_8);
    param_1 = DAT_005a663c * param_1 >> 8;
    local_8 = DAT_005a663c * local_8 >> 8;
    if ((DAT_005b2c7c == 0) && ((g_FlightStateFlags & 4) != 0)) {
      param_1 = (uint)((longlong)(int)param_1 * 45000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)param_1 * 45000) >> 0x20) << 0x10;
      local_8 = (uint)((longlong)(int)local_8 * 45000) >> 0x10 |
                (int)((ulonglong)((longlong)(int)local_8 * 45000) >> 0x20) << 0x10;
    }
    uVar3 = FUN_004191f0(iVar1 + 0x11c,*(int *)(iVar1 + 0x8c) + 0xd0,param_1,local_8,DAT_005653e4,
                         DAT_005653e8,DAT_005653ec);
    if (*(int *)(iVar1 + 0x140) < 1) {
      FUN_0045fc30(iVar1);
    }
    else {
      if (*(code **)(DAT_005b1dc4 + 0x28) != (code *)0x0) {
        (**(code **)(DAT_005b1dc4 + 0x28))(iVar1,DAT_005653f4);
      }
      DAT_005653f8 = *(undefined4 *)(iVar1 + 0xdc);
      FUN_00493ca0(DAT_005653dc,0,uVar3,0,1);
    }
    FUN_0045e680(*(undefined4 *)(iVar1 + 0xdc));
  }
  return;
}

