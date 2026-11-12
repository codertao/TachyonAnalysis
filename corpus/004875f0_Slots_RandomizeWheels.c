
/* sweep */

void Slots_RandomizeWheels(void)

{
  int iVar1;
  
  iVar1 = _rand();
  DAT_0056e04c = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e090 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e0d4 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e00c,DAT_0056e04c + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e050,DAT_0056e090 + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e094,DAT_0056e0d4 + 1);
  iVar1 = _rand();
  DAT_0056e130 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e174 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e1b8 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e0f0,DAT_0056e130 + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e134,DAT_0056e174 + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e178,DAT_0056e1b8 + 1);
  iVar1 = _rand();
  DAT_0056e214 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e258 = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  iVar1 = _rand();
  DAT_0056e29c = &DAT_0056c560 + (iVar1 % 100) * 0x11;
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e1d4,DAT_0056e214 + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e218,DAT_0056e258 + 1);
  ImageArea_SetImage(&GLBL_UI_ELEM_LIST,&DAT_0056e25c,DAT_0056e29c + 1);
  return;
}

