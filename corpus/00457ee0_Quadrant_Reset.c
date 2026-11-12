
/* sweep */

void Quadrant_Reset(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  Quadrant_ClearData(param_1[0x16]);
  Pool_Clear(param_1 + 0x25);
  return;
}

