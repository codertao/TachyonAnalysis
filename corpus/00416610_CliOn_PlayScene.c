
/* S->C 0x1010 handler */

void CliOn_PlayScene(undefined4 param_1)

{
  if ((g_FlightStateFlags & 4) != 0) {
    glbl_maybe_camera.z = Scene_Load(param_1);
    Scene_Play(glbl_maybe_camera.z,0,0x3c,&LAB_004165e0,0,0);
  }
  return;
}

