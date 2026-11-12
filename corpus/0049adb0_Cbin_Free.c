
/* sweep: 30 callers */

undefined4 Cbin_Free(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if (param_1[0x10] != 0) {
      Mem_FreeTemp(param_1[0x10]);
    }
    if (param_1[0x12] != 0) {
      Mem_FreeTemp(param_1[0x12]);
    }
    if (param_1[0x16] != 0) {
      Mem_FreeTemp(param_1[0x16]);
    }
    Mem_FreeTemp(param_1[0x18]);
    if (param_1[0x14] != 0) {
      Mem_FreeTemp(param_1[0x14]);
    }
    Mem_FreeTemp(param_1[10]);
    Mem_FreeToMain(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 1;
}

