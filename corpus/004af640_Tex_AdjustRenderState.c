
/* blend-mode fixups; material +0x15 -> 0x10000 */

uint Tex_AdjustRenderState(int param_1,uint param_2)

{
  if ((param_2 & 7) == 0) {
    if ((param_2 & 0x700) != 0x400) goto LAB_004af6ad;
LAB_004af6a3:
    param_2 = param_2 & 0xfffffeff;
  }
  else {
    if ((param_2 & 0x400) == 0) goto LAB_004af6ad;
    if (((param_2 & 0x7000) == 0x5000) || ((param_2 & 0x7000) == 0x2000)) goto LAB_004af6a3;
    if ((param_2 & 7) != 2) goto LAB_004af6ad;
    if ((param_2 & 0x70) == 0x10) {
      param_2 = param_2 & 0xfffffe8f;
    }
    else {
      if ((param_2 & 0x70) != 0x30) goto LAB_004af6ad;
      *(undefined1 *)(param_1 + 0xf) = 0xff;
      param_2 = param_2 & 0xfffffe8f;
    }
  }
  param_2 = param_2 | 0x600;
LAB_004af6ad:
  if (*(char *)(param_1 + 0x15) != '\0') {
    param_2 = param_2 | 0x10000;
  }
  return param_2;
}

