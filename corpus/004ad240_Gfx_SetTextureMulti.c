
/* refine: two-texture set (desc2 slot 0x6044d8); software falls back to stage 0 */

void Gfx_SetTextureMulti(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_006044d8)(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  Sw_SetTexture(param_1,param_2);
  return;
}

