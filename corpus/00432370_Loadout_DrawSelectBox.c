
/* sweep: "SELECT NEW ITEM" */

void Loadout_DrawSelectBox(void)

{
  Ui_DrawBox(DAT_005a68c4,0xf4,0x78,200,0xdc,0x80,DAT_005a68c0,s_SELECT_NEW_ITEM_0053f25c,0xffff00,
             80000,2);
  Loadout_DrawChoices();
  return;
}

