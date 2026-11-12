
/* sweep */

void Bmp_Convert16(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  Pal_Build16Lut();
  if (0 < param_3) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *param_1 = *(undefined2 *)(&DAT_00602800 + (uint)bVar1 * 2);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

