
/* ART_DEBUG_INC/DEC_GAMMA (+-5), relights all pools */

void ArtDebug_AdjGamma(int param_1)

{
  int iVar1;
  
  param_1 = *(int *)(DAT_005b9084 + 0xac) + param_1;
  *(int *)(DAT_005b9084 + 0xac) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(DAT_005b9084 + 0xac) = 0;
  }
  else if (0xff < *(int *)(DAT_005b9084 + 0xac)) {
    *(undefined4 *)(DAT_005b9084 + 0xac) = 0xff;
  }
  iVar1 = DAT_005b9084;
  Scene_SetPalParams(*(undefined4 *)(DAT_005b9084 + 0xac),*(undefined4 *)(DAT_005b9084 + 0xb0),
                     *(undefined4 *)(DAT_005b9084 + 0xb4),*(undefined4 *)(DAT_005b9084 + 0xb8),
                     *(undefined4 *)(DAT_005b9084 + 0xbc));
  ModelPool_Relight(&g_FxModelPool);
  ModelPool_Relight(&g_ObjModelPool);
  ModelPool_Relight(&g_BasePakPool);
  FUN_004af290(*(undefined4 *)(iVar1 + 0xc0));
  FUN_004acfa0();
  return;
}

