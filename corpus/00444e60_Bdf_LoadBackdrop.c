
/* reset scene then load+apply a .bdf (arg = filename) */

void Bdf_LoadBackdrop(undefined4 param_1)

{
  Bdf_FreeBackdrop();
  FxTable_Clear();
  SbPak_FreeAll();
  Rend_ResetScene();
  Pak_SetMemPools(0xa001,0xa001);
  Starfield_Init(0xa001);
  Bdf_InitArray(0xa001);
  Bdf_LoadAndApply(param_1);
  return;
}

