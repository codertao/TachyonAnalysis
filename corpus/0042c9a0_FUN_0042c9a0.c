
void FUN_0042c9a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_10 [16];
  
  iVar1 = Cbin_CountEntries(s_FONTS_005367ec,&DAT_005367f4);
  *(int *)(param_1 + 8) = iVar1;
  FUN_0048e3d0((int *)(param_1 + 0xc),iVar1 * 0x1c,4,s_HUD_FONT_ARRAY_005367dc,0xd400);
  Cbin_SelectGroup(s_FONTS_005367ec);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      FUN_0049bdb0(&DAT_005367f4,iVar1,0x18,0,4,1);
      FUN_0049b930(&DAT_005367f4,local_10,0x10,0,4,2);
      uVar2 = FUN_00431de0(local_10,0x20000);
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return;
}

