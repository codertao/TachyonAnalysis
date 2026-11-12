
/* sweep: guess */

void Hud_DrawMissileWarning(void)

{
  undefined4 uVar1;
  
  Gfx_Lock(1);
  if (DAT_005b3340 != 0) {
    if ((DAT_005b3344 == 3) || (DAT_005b3344 == 2)) {
      uVar1 = 0x3f;
    }
    else {
      if (DAT_005b3344 != 0) goto LAB_0042b667;
      uVar1 = 0x33;
    }
    Hud_DrawStringId(uVar1,DAT_005b1870,0x140,300,0xffff,1,4);
  }
LAB_0042b667:
  if (DAT_005b3348 != 0) {
    Hud_DrawStringId(0x34,DAT_005b1870,0x140,300,0xffff,1,4);
  }
  return;
}

