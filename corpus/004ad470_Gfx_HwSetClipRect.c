
/* refine: driver slot 0x60452c sets clip rect x0,y0,x1,y1 */

void Gfx_HwSetClipRect(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_0060452c)(param_1,param_2,param_3,param_4);
  }
  return;
}

