
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052f068;
  puStack_10 = &LAB_004bde30;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_1c = &stack0xffffff88;
  DVar1 = GetVersion();
  _DAT_00564f88 = DVar1 >> 8 & 0xff;
  _DAT_00564f84 = DVar1 & 0xff;
  _DAT_00564f80 = _DAT_00564f84 * 0x100 + _DAT_00564f88;
  _DAT_00564f7c = DVar1 >> 0x10;
  iVar2 = FUN_004c302f(1);
  if (iVar2 == 0) {
    FUN_004bd756(0x1c);
  }
  iVar2 = FUN_004bfc8b();
  if (iVar2 == 0) {
    FUN_004bd756(0x10);
  }
  local_8 = 0;
  FUN_004c4a56();
  DAT_006caed4 = GetCommandLineA();
  DAT_00564f6c = FUN_004c4924();
  FUN_004c46d7();
  FUN_004c461e();
  FUN_004bdc15();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_004c45c6();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = WinMain(pHVar5,uVar6,uVar3,uVar4);
  FUN_004bdc42(uVar3);
  FUN_004c444e(*(undefined4 *)*local_18,local_18);
  return;
}

