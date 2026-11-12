
/* sweep */

void Starbase_LoadDockScenes(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_80 [128];
  
  if ((*(char *)(param_1 + 0x9c) != '\0') && (*(int *)(param_1 + 0xbc) == 0)) {
    iVar1 = Scene_Load(param_1 + 0x9c);
    *(int *)(param_1 + 0xbc) = iVar1;
    pcVar2 = s_Loaded_OK_00532e2c;
    if (iVar1 == 0) {
      pcVar2 = s_NOT_LOADED_00532e20;
    }
    str_sprintf(local_80,s_SCENE__Docking_scene_is_set_to____00532df4,param_1 + 0x9c,pcVar2);
    DebugLog_Write(local_80);
  }
  if ((*(char *)(param_1 + 0xac) != '\0') && (*(int *)(param_1 + 0xc0) == 0)) {
    iVar1 = Scene_Load(param_1 + 0xac);
    *(int *)(param_1 + 0xc0) = iVar1;
    pcVar2 = s_Loaded_OK_00532e2c;
    if (iVar1 == 0) {
      pcVar2 = s_NOT_LOADED_00532e20;
    }
    str_sprintf(local_80,s_SCENE__UNDocking_scene_is_set_to_00532dc8,param_1 + 0xac,pcVar2);
    DebugLog_Write(local_80);
  }
  return;
}

