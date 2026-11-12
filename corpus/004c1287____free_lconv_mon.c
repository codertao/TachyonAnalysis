
/* CRT */

void ___free_lconv_mon(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_005652c4)) {
    _free(*(undefined **)(param_1 + 0xc));
    _free(*(undefined4 *)(param_1 + 0x10));
    _free(*(undefined4 *)(param_1 + 0x14));
    _free(*(undefined4 *)(param_1 + 0x18));
    _free(*(undefined4 *)(param_1 + 0x1c));
    _free(*(undefined4 *)(param_1 + 0x20));
    _free(*(undefined4 *)(param_1 + 0x24));
  }
  return;
}

