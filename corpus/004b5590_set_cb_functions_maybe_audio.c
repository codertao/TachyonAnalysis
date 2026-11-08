
void set_cb_functions_maybe_audio(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 1:
    GLBL_MAYBE_AUDIO_CB_1 = param_2;
    return;
  case 2:
    GLBL_MAYBE_AUDIO_CB_2 = param_2;
    return;
  case 3:
    GLBL_MAYBE_AUDIO_CB_3 = param_2;
    return;
  case 4:
    GLBL_MAYBE_AUDIO_CB_4 = param_2;
    return;
  case 5:
    GLBL_MAYBE_AUDIO_CB_5 = param_2;
  }
  return;
}

