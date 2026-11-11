
/* (r, g, b) BDF fog RGB; software: Sw_SetFogColor */

void Gfx_SetClearColor(uint param_1,uint param_2,uint param_3)

{
  if (DAT_00564ae4 == 0) {
    Sw_SetFogColor(param_1,param_2,param_3);
    return;
  }
  if (DAT_0060f874 != 0) {
    (*DAT_00604524)(param_1 >> 1,param_2 >> 1,param_3 >> 1);
    return;
  }
  (*DAT_00604524)(param_1,param_2,param_3);
  return;
}

