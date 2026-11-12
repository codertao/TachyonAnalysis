
/* sweep: "LOADOUT" */

void Loadout_DrawPanel(void)

{
  if (DAT_005a68c8 != 0) {
    Gfx_Lock(1);
    Ui_DrawBox(DAT_005a68c4,0x28,0x78,200,0xfa,0x80,DAT_005a68c0,s_LOADOUT_0053f26c,0xffff00,80000,2
              );
    Loadout_DrawList();
    if (DAT_005a68cc != 0) {
      Loadout_DrawSelectBox();
      return;
    }
  }
  return;
}

