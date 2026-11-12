
/* sweep */

void Fog_Init(void)

{
  if ((DAT_00564ae4 != 0) && (DAT_005b8f48 != 0)) {
    DAT_005b1e30 = 0x3e80000;
    FogSheets_Init();
    return;
  }
  return;
}

