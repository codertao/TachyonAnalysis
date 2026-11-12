
/* sweep */

void Bdf_Reset(void)

{
  clr_bytes(&DAT_005b9080,0x1c);
  Fog_Shutdown();
  return;
}

