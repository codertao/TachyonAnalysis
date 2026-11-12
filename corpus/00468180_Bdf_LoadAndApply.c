
/* load scene struct, apply SPACE_ROT/RGB/lighting, spawn images */

void Bdf_LoadAndApply(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Bdf_GetOrLoadScene(param_1,DAT_005b3304);
  DAT_005b9084 = iVar1;
  Scene_SetPalParams((uint)(*(int *)(iVar1 + 0xac) * g_PalBrightness) >> 7,
                     *(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4),
                     *(undefined4 *)(iVar1 + 0xb8),*(undefined4 *)(iVar1 + 0xbc));
  ModelPool_Relight(&g_FxModelPool);
  ModelPool_Relight(&g_ObjModelPool);
  ModelPool_Relight(&g_BasePakPool);
  Gfx_HwControl1();
  Light_SetAmbient(*(undefined4 *)(iVar1 + 0xc0));
  DAT_00668f8c = 0x10000;
  Light_SetLightColor(*(undefined4 *)(DAT_005b9084 + 0x138),*(undefined4 *)(DAT_005b9084 + 0x13c),
                      *(undefined4 *)(DAT_005b9084 + 0x140));
  Sun_Init(DAT_005b9084 + 0x50,DAT_005b9084 + 0x90,*(undefined4 *)(DAT_005b9084 + 0x44),
           *(undefined4 *)(DAT_005b9084 + 0x60),*(undefined4 *)(DAT_005b9084 + 0xa8));
  if (*(int *)(DAT_005b9084 + 0xd8) != 0) {
    Light_SetSunDirection(DAT_005b9084 + 0x38);
  }
  if (*(int *)(DAT_005b9084 + 0xdc) != 0) {
    Fog_SetDepthRange(1,*(undefined4 *)(DAT_005b9084 + 0xe4),*(undefined4 *)(DAT_005b9084 + 0xe0));
    Gfx_SetFogColor(*(undefined4 *)(DAT_005b9084 + 0xe8),*(undefined4 *)(DAT_005b9084 + 0xec),
                    *(undefined4 *)(DAT_005b9084 + 0xf0));
    Gfx_SetClearColor(*(undefined4 *)(DAT_005b9084 + 0xe8),*(undefined4 *)(DAT_005b9084 + 0xec),
                      *(undefined4 *)(DAT_005b9084 + 0xf0));
    Fog_LoadFromBdf(DAT_005b9084 + 0xdc,DAT_005b9084 + 0x124);
    return;
  }
  if (DAT_005b8f48 != 0) {
    Fog_Disable();
  }
  Fog_SetDepthRange(1,DAT_005b2b9c,DAT_005b2b9c >> 1);
  Gfx_SetFogColor(0,0,0);
  Gfx_SetClearColor(0,0,0);
  return;
}

