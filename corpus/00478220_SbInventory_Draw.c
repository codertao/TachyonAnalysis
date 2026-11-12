
/* sweep */

void SbInventory_Draw(void)

{
  SbInventory_UpdateSliders();
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  Teletype_DrawAll();
  return;
}

