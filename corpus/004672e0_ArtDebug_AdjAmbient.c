
void ArtDebug_AdjAmbient(int param_1)

{
  int iVar1;
  
  *(int *)(DAT_005b9084 + 0xc0) = *(int *)(DAT_005b9084 + 0xc0) + param_1;
  if (*(int *)(DAT_005b9084 + 0xc0) < 4) {
    *(undefined4 *)(DAT_005b9084 + 0xc0) = 4;
  }
  else if (0x7c < *(int *)(DAT_005b9084 + 0xc0)) {
    *(undefined4 *)(DAT_005b9084 + 0xc0) = 0x7c;
  }
  iVar1 = DAT_005b9084;
  Scene_SetPalParams(*(undefined4 *)(DAT_005b9084 + 0xac),*(undefined4 *)(DAT_005b9084 + 0xb0),
                     *(undefined4 *)(DAT_005b9084 + 0xb4),*(undefined4 *)(DAT_005b9084 + 0xb8),
                     *(undefined4 *)(DAT_005b9084 + 0xbc));
  ModelPool_Relight(&g_FxModelPool);
  ModelPool_Relight(&g_ObjModelPool);
  ModelPool_Relight(&g_BasePakPool);
  Light_SetAmbient(*(undefined4 *)(iVar1 + 0xc0));
  Gfx_HwControl1();
  return;
}

