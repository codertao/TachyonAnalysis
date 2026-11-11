
void Gfx_SetTexture(void *param_1,int param_2)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_006044d4)(param_1,param_2);
    return;
  }
  Sw_SetTexture(param_1,param_2);
  return;
}

