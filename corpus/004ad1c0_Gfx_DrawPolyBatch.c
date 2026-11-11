
void Gfx_DrawPolyBatch(void *param_1,int param_2,void *param_3,int param_4,uint param_5)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_006044dc)(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  Sw_DrawPolyBatch(param_1,param_2,param_3,param_4,param_5);
  return;
}

