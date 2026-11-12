
/* refine: material RGB +0x1c..1e -> palette index via Pal_BuildRemap */

void Mat_RemapColorIndex(int param_1)

{
  undefined1 uVar1;
  
  DAT_00603480 = *(undefined1 *)(param_1 + 0x1c);
  DAT_00603481 = *(undefined1 *)(param_1 + 0x1d);
  DAT_00603482 = *(undefined1 *)(param_1 + 0x1e);
  uVar1 = Pal_BuildRemap();
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  return;
}

