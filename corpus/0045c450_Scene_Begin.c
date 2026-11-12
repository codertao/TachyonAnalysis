
/* sweep */

void Scene_Begin(int param_1)

{
  Fade_StartDefault(0x3c,0);
  clr_bytes(param_1 + 0x30,0x44);
  Scene_InitMembers(param_1);
  SceneCam_Init(param_1);
  Scene_InitTexts(param_1);
  return;
}

