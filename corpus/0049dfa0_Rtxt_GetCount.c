
/* (rt) -> record count */

undefined4 Rtxt_GetCount(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

