
/* wrptube/swrptube.pak + ship hyperspace pak into g_FxModelPool */

void Hyper_LoadAssets(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  
  FUN_0044eaa0();
  DAT_005b00b0 = Scene_Load(s_hyper1_sen_00536d00);
  uVar1 = FUN_004a0d50(0);
  if (DAT_00564ae4 == 0) {
    ppuVar2 = &PTR_s_swrptube_pak_00536c40;
  }
  else {
    ppuVar2 = &PTR_s_wrptube_pak_00536bf0;
  }
  FUN_00431a10(ppuVar2,&g_FxModelPool);
  if (*(char *)(DAT_005b1f0c + 0x2e8) != '\0') {
    ModelPool_Load(&DAT_005b00a4,DAT_005b1f0c + 0x2e8,0,DAT_005b1f0c + 0x2f8,&g_FxModelPool,0);
  }
  FUN_004a0d50(uVar1);
  FUN_0044eab0();
  return;
}

