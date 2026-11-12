
/* sweep: guess */

undefined4 TextBar_AddCentered(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    __strupr(param_1);
    uVar1 = Text_DrawCentered(param_1,DAT_0056ab78,0x10000,2);
    if (uVar1 < DAT_0056ab8c) {
      return 1;
    }
  }
  return 0;
}

