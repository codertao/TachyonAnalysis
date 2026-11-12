
void ArtDebug_AdjGreen(int param_1)

{
  int iVar1;
  
  param_1 = *(int *)(DAT_005b9084 + 0xb8) + param_1;
  *(int *)(DAT_005b9084 + 0xb8) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(DAT_005b9084 + 0xb8) = 0;
  }
  else if (0xff < *(int *)(DAT_005b9084 + 0xb8)) {
    *(undefined4 *)(DAT_005b9084 + 0xb8) = 0xff;
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

