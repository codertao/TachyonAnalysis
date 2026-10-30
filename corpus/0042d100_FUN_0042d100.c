
void FUN_0042d100(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Cbin_CountEntries(s_PANEL_00536878,&DAT_00536880);
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0048e3d0((int *)(param_1 + 0x24),iVar1 * 0x2c,4,s_HUD_PANEL_ARRAY_00536868,0xd400);
  Cbin_SelectGroup(s_PANEL_00536878);
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_0042d010(iVar1,&DAT_00536880,param_1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

