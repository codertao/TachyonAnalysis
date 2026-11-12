
/* sweep: guess */

void Video_ToggleFullscreen(void)

{
  if (DAT_00564ae4 != 0) {
    Hw3d_Deactivate();
    Hw3d_UnloadDriver();
    return;
  }
  return;
}

