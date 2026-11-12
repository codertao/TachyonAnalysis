
/* sweep */

void Ui_SetBoxClip(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  DAT_005a62d0 = *param_1;
  DAT_005a62d4 = param_1[1];
  DAT_005a64cc = param_1[2];
  DAT_005a64d0 = param_1[3];
  DAT_005a62d8 = param_2;
  DAT_005a62dc = param_3;
  DAT_005a62e0 = param_4;
  DAT_005a62e4 = param_5;
  Gfx_DrawImage();
  return;
}

