
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ObjDisplay_DrawEntry(int param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_0058f438 = param_3;
  if ((code *)(&PTR_ObjDisplay_DrawTextById_00548678)[param_1 * 2] != (code *)0x0) {
    (*(code *)(&PTR_ObjDisplay_DrawTextById_00548678)[param_1 * 2])
              (*(undefined4 *)(&DAT_0054867c + param_1 * 8),param_2,&DAT_0058f430);
    DAT_0058f434 = DAT_0058f434 + DAT_0058f43c;
    return;
  }
  DAT_0058f434 = DAT_0058f434 + DAT_0058f43c;
  return;
}

