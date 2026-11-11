
/* (on) 1 in flight, 0 in menus */

void __cdecl Sw_EnableZBuffer(int on)

{
  DAT_004e4b0c = on;
  return;
}

