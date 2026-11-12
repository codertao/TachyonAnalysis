
/* S->C 0x1034 handler */

void CliOn_UiSound(undefined1 *param_1)

{
  Snd_Play2D(*param_1,param_1[1],param_1[2],0xff);
  return;
}

