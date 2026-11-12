
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* start cutscene; current scene in 0x58f1c0 */

void Scene_Play(int param_1,undefined4 param_2,undefined4 param_3,code *param_4,undefined4 param_5,
               undefined4 param_6)

{
  if ((param_1 != 0) && (DAT_0058f1c0 == 0)) {
    _DAT_0058f218 = 0;
    DAT_0058f210 = 0;
    DAT_0058f214 = 0;
    DAT_0058f1d0 = 0;
    DAT_0058f1c0 = param_1;
    _DAT_0058f1c4 = param_5;
    FlightUi_CloseAll();
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
      Input_PushBindingSet(&PTR_DAT_0053e890);
      *(undefined4 *)(param_1 + 0x144) = param_2;
      Scene_Begin(param_1);
      Scene_PreloadDialog(param_1);
      Scene_StartMusic(param_1);
      Fade_SetHold(0);
      *(undefined4 *)(param_1 + 0x138) = param_3;
      *(code **)(param_1 + 0x13c) = param_4;
      *(undefined4 *)(param_1 + 0x140) = param_6;
      return;
    }
    DAT_0058f1c0 = 0;
    (*param_4)();
  }
  return;
}

