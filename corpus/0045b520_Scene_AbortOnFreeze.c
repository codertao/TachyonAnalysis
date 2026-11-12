
/* sweep */

void Scene_AbortOnFreeze(void)

{
  code *pcVar1;
  
  if (DAT_0058f1c0 != 0) {
    pcVar1 = *(code **)(DAT_0058f1c0 + 0x13c);
    Scene_Finish(DAT_0058f1c0);
    Fade_StartDefault(0,0);
    DAT_0058f1d8 = 0;
    DAT_0058f1d4 = 0;
    Camera_SetDefaultMode();
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  return;
}

