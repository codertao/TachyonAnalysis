
/* load .sen cutscene CBIN (0x14c struct) */

undefined4 Scene_Load(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = Cbin_Open(param_1);
  if (iVar2 == 0) {
    Error_CannotOpenFile(uVar1,s_scene_Load_00549314);
    return 0;
  }
  Mem_AllocZeroTagged(&param_1,0x14c,4,s_SCENE_0054930c,0xcccc);
  Scene_LoadMembers(param_1);
  Scene_LoadFonts(param_1);
  Scene_LoadTextActions(param_1);
  Scene_LoadTextEvents(param_1);
  Scene_ParseFlags(param_1);
  Scene_LoadKeyframes(param_1);
  Scene_LoadCameraFrames(param_1);
  Scene_LoadDialog(param_1);
  Cbin_Close();
  return param_1;
}

