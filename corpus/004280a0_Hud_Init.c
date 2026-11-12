
/* sweep */

void Hud_Init(void)

{
  clr_bytes(&DAT_005b00c0,0x1ac8);
  Hud_LoadImages(&PTR_s_hudflash_pcx_005364a0);
  Nop();
  HudString_InitPool();
  return;
}

