
/* sweep */

void Orders_ApplyUpdate(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 8) {
    DAT_0058f488 = 0;
  }
  Orders_Free(param_1,&DAT_005b3220);
  return;
}

