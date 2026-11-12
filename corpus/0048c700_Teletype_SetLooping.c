
/* sweep: guess */

void Teletype_SetLooping(int param_1,int param_2)

{
  *(int *)(&DAT_0056abd4 + param_1 * 0x170) = param_2;
  if (param_2 != 0) {
    Teletype_SetFlags();
    return;
  }
  Teletype_ClearFlags(param_1,2);
  return;
}

