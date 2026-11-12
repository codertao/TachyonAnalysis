
/* sweep */

void Cursor_ForceHide(void)

{
  int iVar1;
  
  iVar1 = ShowCursor(0);
  while (-1 < iVar1) {
    iVar1 = ShowCursor(0);
  }
  return;
}

