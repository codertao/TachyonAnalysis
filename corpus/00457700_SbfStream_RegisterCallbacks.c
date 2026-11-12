
/* sweep */

void SbfStream_RegisterCallbacks(void)

{
  set_cb_functions_maybe_audio(3,&LAB_00457160);
  set_cb_functions_maybe_audio(4,SbfStream_Stop);
  set_cb_functions_maybe_audio(5,&LAB_00457460);
  return;
}

