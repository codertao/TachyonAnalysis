
/* sweep */

uint Hud_PackColor(int param_1,int param_2)

{
  if (param_1 == 3) {
    return ((*(int *)(param_2 + 0x1c) / 3) * 0x100 | *(int *)(param_2 + 0x20) / 3) << 8 |
           *(int *)(param_2 + 0x24) / 3;
  }
  if (param_1 != 4) {
    return (*(int *)(param_2 + 0x1c) << 8 | *(uint *)(param_2 + 0x20)) << 8 |
           *(uint *)(param_2 + 0x24);
  }
  return 0x801010;
}

