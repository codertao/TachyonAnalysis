
void FUN_0042ca50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = Cbin_CountEntries(s_FONT_COLORS_00536810,s_COLOR_0053681c);
  *(int *)(param_1 + 0x10) = iVar1;
  FUN_0048e3d0((int *)(param_1 + 0x14),iVar1 * 0x34,4,s_HUD_FONTPAL_ARRAY_005367fc,0xd400);
  Cbin_SelectGroup(s_FONT_COLORS_00536810);
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = iVar1 + 0x20;
    do {
      FUN_0049bdb0(s_COLOR_0053681c,iVar1,0x18,0,4,1);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3 + -4,1,2);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3,1,3);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3 + 4,1,4);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3 + 8,1,5);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3 + 0xc,1,6);
      FUN_0049b930(s_COLOR_0053681c,0,0,iVar3 + 0x10,1,7);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x34;
      iVar3 = iVar3 + 0x34;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return;
}

