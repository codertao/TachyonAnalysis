
/* sweep */

void WingMenu_Select(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = WingCmd_Issue(param_1);
  if (iVar1 != 0) {
    WingMenu_Close(0);
    return;
  }
  Snd_Play2D(1,9,0,0xff);
  return;
}

