
/* sweep */

void Input_Init(void)

{
  clr_bytes(&DAT_005aeea0,0x11c0);
  DAT_005aeeb8 = 0xfffffc00;
  Input_PushBindingSet(0);
  if (GLBL_spacesav[0x3e] == 1) {
    Input_CaptureMouse();
    return;
  }
  return;
}

