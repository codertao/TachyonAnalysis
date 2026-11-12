
/* sweep */

void Options_HidePages(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_WndStarBaseOptionP_d_00556c8c,uVar1);
    Ui_CloseWindow(DAT_00571280,&DAT_005a41e0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

