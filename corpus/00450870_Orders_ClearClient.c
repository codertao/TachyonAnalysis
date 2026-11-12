
/* sweep */

void Orders_ClearClient(void)

{
  DAT_005b3248 = 0;
  Pool_Clear(&DAT_005b3220);
  DAT_005b3244 = 0;
  DAT_0058f488 = 0;
  return;
}

