
/* sweep */

void Gfx_SetClipRect(int param_1)

{
  copy_str32_to_some_global(param_1);
  Rend_SetFrustumSlopes(param_1);
  if ((*(int *)(param_1 + 0x54) != 0) && (DAT_00564ae4 != 0)) {
    Gfx_UnlockSurface();
    Gfx_HwSetClipRect(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                      *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    Gfx_Lock(DAT_005a6810);
  }
  return;
}

