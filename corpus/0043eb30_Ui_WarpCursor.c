
/* sweep: SetCursorPos */

void Ui_WarpCursor(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (DAT_005a5504 == 1) {
    if ((short)DAT_005a54f4 < 1) {
      DAT_005a54f4 = 1;
    }
    else if (param_1 <= (short)DAT_005a54f4) {
      DAT_005a54f4 = param_1 + -1;
      bVar1 = true;
    }
    if ((short)DAT_005a54f8 < 1) {
      DAT_005a54f8 = 1;
    }
    else if (param_2 <= (short)DAT_005a54f8) {
      DAT_005a54f8 = param_2 + -1;
      SetCursorPos((int)(short)DAT_005a54f4,(int)(short)DAT_005a54f8);
      return;
    }
    if (bVar1) {
      SetCursorPos((int)(short)DAT_005a54f4,(int)(short)DAT_005a54f8);
    }
  }
  return;
}

