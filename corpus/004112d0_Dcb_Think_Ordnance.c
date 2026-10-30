
/* long-life ordnance think (DCB +0x68, installed by 0x411f80): range flags + proximity detonate
   (0x404c00) */

void Dcb_Think_Ordnance(int param_1)

{
  Dcb_SetRangeFlags((undefined4 *)(param_1 + 0x15c),*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  if (((*(byte *)(*(int *)(param_1 + 0xdc) + 0x138) & 8) != 0) &&
     ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x130) & 1) == 0)) {
    Dcb_Detonate(param_1);
    *(undefined4 *)(param_1 + 0x15c) = 40000;
  }
  return;
}

