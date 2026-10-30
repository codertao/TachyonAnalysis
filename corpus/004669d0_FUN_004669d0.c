
void FUN_004669d0(void)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_0048e3d0(&DAT_0058979c,DAT_00589798 * 0xc,4,s_sound3d_channel_array_0054a4fc,0xcccc);
  uVar1 = 0;
  if (DAT_00589798 != 0) {
    puVar2 = (uint *)(DAT_0058979c + 8);
    do {
      *puVar2 = uVar1;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 < DAT_00589798);
  }
  return;
}

