
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* sweep: guess */

void Options_OnSliderClick(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  iVar1 = **(int **)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x50) + -0x10;
  if ((param_2 <= iVar3) && (iVar3 = *(int *)(param_1 + 0x48) + 0x10, iVar3 <= param_2)) {
    iVar3 = param_2;
  }
  local_8 = (int)(longlong)
                 ROUND(((float10)((iVar3 - *(int *)(param_1 + 0x48)) + -0x10) /
                       (float10)((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -0x20)) *
                       (float10)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)));
  **(int **)(param_1 + 0x68) = local_8 + *(int *)(param_1 + 0x60);
  Options_SetTabFrame(param_1 + 4,iVar3,*(undefined4 *)(param_1 + 0x5c));
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != GLBL_spacesav + 0x53) {
    if (piVar2 == GLBL_spacesav + 0x54) {
      if ((iVar1 != GLBL_spacesav[0x54]) &&
         (GLBL_spacesav[0x56] = GLBL_spacesav[0x54], iVar3 = SbAudio_Stop(), iVar3 == 0)) {
        Ui_PlaySoundEvent(DAT_00571280,s_SNDEVNT_BUTTONCLICK_00556c10);
        return;
      }
    }
    else if (piVar2 == GLBL_spacesav + 0x55) {
      if ((iVar1 != GLBL_spacesav[0x55]) && (iVar3 = SbAudio_Stop(), iVar3 == 0)) {
        SbAudio_Play(s_Scomp03_wav_00556c04,GLBL_spacesav[0x55]);
        return;
      }
    }
    else if (((piVar2 == GLBL_spacesav + 0x37) || (piVar2 == GLBL_spacesav + 0x38)) &&
            (iVar1 != *piVar2)) {
      Gfx_SetAmbient(GLBL_spacesav[0x37],0x80,0x80);
      Light_SetGammaParams(GLBL_spacesav[0x38],0x80,0x80);
      Gfx_HwControl1();
    }
    return;
  }
  set_some_glbl_scalar(GLBL_spacesav[0x53]);
  return;
}

