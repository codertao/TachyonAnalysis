
/* sweep */

undefined4 Mem_GetSize(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + -0x10);
}

