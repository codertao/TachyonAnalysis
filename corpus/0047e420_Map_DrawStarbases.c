
/* sweep: guess */

void Map_DrawStarbases(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005a6810;
  iVar1 = DAT_0056367c;
  Gfx_Lock(1);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    if (*(int *)(iVar1 + 0x98) != 0) {
      Map_DrawStarbase(iVar1,*(int *)(iVar1 + 0x98));
    }
  }
  Map_DrawStarbase(&DAT_005712a0,0xffffffff);
  if (DAT_00571c98 != 0) {
    Map_DrawStarbase(&DAT_00571c00,0xffffffff);
  }
  Gfx_Lock(uVar2);
  return;
}

