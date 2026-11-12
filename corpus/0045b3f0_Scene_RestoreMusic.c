
/* sweep: guess */

undefined4 Scene_RestoreMusic(int param_1)

{
  if (((param_1 != 0) && (*(char *)(param_1 + 0x104) != '\0')) &&
     (*(char *)(param_1 + 0x114) != '\0')) {
    Music_Close();
    Music_SetMode(0);
    set_some_glbl_scalar(GLBL_spacesav[0x53]);
    return 1;
  }
  return 0;
}

