
/* sweep */

void Portrait_DrawAt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  Gfx_Lock(1);
  if (*(int *)(param_1 + 0x30) != -1) {
    Portrait_Draw(&DAT_0059023c + *(int *)(param_1 + 0x30) * 0x2c,param_2,param_3,param_4,param_5);
  }
  return;
}

