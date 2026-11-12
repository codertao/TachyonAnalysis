
/* sweep */

void ScreenZoom_DrawAll(void)

{
  int iVar1;
  
  iVar1 = DAT_005a4b48;
  Gfx_Lock(1);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd0)) {
    ScreenZoom_Draw(iVar1);
  }
  return;
}

