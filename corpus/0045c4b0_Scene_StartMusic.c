
/* sweep: guess */

void Scene_StartMusic(int param_1)

{
  if (((param_1 != 0) && (*(char *)(param_1 + 0x104) != '\0')) &&
     (*(char *)(param_1 + 0x114) != '\0')) {
    load_sbf_and_bin(param_1 + 0x104,param_1 + 0x114);
    set_some_glbl_scalar(GLBL_spacesav[0x55]);
    Music_SetMode(1);
  }
  return;
}

