
/* sweep */

void Hud_DrawConnectionLost(void)

{
  Gfx_Lock(1);
  Text_DrawAligned(s_CONNECTION_TO_SERVER_LOST_005367c0,DAT_005b1870,0x140,100,0xffff20,0xffff,
                   0x10000,6);
  return;
}

