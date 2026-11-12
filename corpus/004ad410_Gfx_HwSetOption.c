
/* refine: guess: driver slot 0x604528 stores one flag (Video_InitHardware) */

void Gfx_HwSetOption(undefined4 param_1)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_00604528)(param_1);
  }
  return;
}

