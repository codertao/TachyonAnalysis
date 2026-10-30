
/* return world's SPED list (world+0x3c -> +4 active / +8 template) by flag */

undefined4 Sped_GetDefList(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
    return *(undefined4 *)(*(int *)(param_2 + 0x3c) + 4);
  }
  return *(undefined4 *)(*(int *)(param_2 + 0x3c) + 8);
}

