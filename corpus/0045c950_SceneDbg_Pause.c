
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void SceneDbg_Pause(void)

{
  if (DAT_005a6730 != 0) {
    _DAT_0058f218 = 1;
    RunOnce_Set(&DAT_0058f218,0,0);
  }
  return;
}

