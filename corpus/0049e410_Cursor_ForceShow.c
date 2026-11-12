
/* sweep */

void Cursor_ForceShow(void)

{
  int iVar1;
  
  iVar1 = ShowCursor(1);
  while (iVar1 < 0) {
    iVar1 = ShowCursor(1);
  }
  return;
}

