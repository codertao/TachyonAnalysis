
/* sweep: guess */

void Autopilot_Toggle(void)

{
  if (DAT_005b3340 == 0) {
    if (DAT_005b3348 != 0) {
      NetCli_SendInteract(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
      return;
    }
    if (DAT_005b1864 != 0) {
      Player_SetTarget(DAT_005b1864,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
    }
  }
  else {
    if (DAT_005b3344 == 0) {
      Autopilot_Begin();
      return;
    }
    if (DAT_005b3344 == 2) {
      Autopilot_End();
      return;
    }
    if (DAT_005b3344 == 3) {
      Autopilot_End();
      return;
    }
  }
  return;
}

