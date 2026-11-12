
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ObjDisplay_DrawLine(undefined4 param_1,undefined4 param_2)

{
  _DAT_0058f438 = param_2;
  ObjDisplay_DrawLineAt(0,param_1,&DAT_0058f430);
  DAT_0058f434 = DAT_0058f434 + DAT_0058f43c;
  return;
}

