
/* sweep */

void VonUi_SetIconPos(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_005a62d8 = param_1;
  DAT_005a62dc = param_2;
  *(undefined4 *)(DAT_005a64c8 + 4) = param_3;
  Gfx_DrawImage();
  return;
}

