
/* sweep */

void SbHotspot_Activate(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0xac) == 0) && (*(int *)(param_1 + 0xa8) == 0)) {
    Ui_RefreshWindow(DAT_005879a0,param_2,0,0);
    SbHotspot_ShowTooltip(param_1);
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
    SbHotspot_PlayPak(param_1);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    SbHotspot_ShowImage(param_1);
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x84) == 0) && (*(char *)(param_1 + 0x40) != '\0')) {
    SbAudio_Play(param_1 + 0x40,
                 (int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)GLBL_spacesav[0x55] &
                       0xffffffffU) / 0xff));
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    Starbase_SetMusicVar(0,*(undefined4 *)(param_1 + 0x8c));
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  }
  if (0 < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  }
  if (0 < *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
  }
  if (0 < *(int *)(param_1 + 0x84)) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  }
  return;
}

