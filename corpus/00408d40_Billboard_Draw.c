
/* sweep */

void Billboard_Draw(int param_1,int param_2)

{
  if ((((param_1 != 0) && (*(int **)(param_1 + 0x28) != (int *)0x0)) &&
      (**(int **)(param_1 + 0x28) != 0)) && ((DAT_00564ae4 != 0 || (param_2 != 0)))) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      Gfx_SelectPalRef(*(int *)(param_1 + 0x2c),0);
    }
    if ((*(uint *)(param_1 + 0x3c) & 1) != 0) {
      Billboard_DrawMode1(param_1,param_2);
      return;
    }
    if ((*(uint *)(param_1 + 0x3c) & 2) != 0) {
      Billboard_DrawMode2(param_1,param_2);
    }
  }
  return;
}

