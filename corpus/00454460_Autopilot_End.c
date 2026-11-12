
/* sweep: guess */

void Autopilot_End(void)

{
  if (DAT_005b3344 == 2) {
    DAT_005b3344 = 4;
    *(undefined **)(GLBL_SOME_CONTEXT + 0x68) = &DAT_00454320;
    FF_SetSpring(0x9c4);
    FF_PlayJolt(0,0xd05,500000,1);
    if (*(code **)(g_ActiveRules + 0x78) != (code *)0x0) {
      (**(code **)(g_ActiveRules + 0x78))(0);
    }
    Snd_PlayAtEnt(1,0x15,0,GLBL_SOME_CONTEXT,0x10000);
  }
  return;
}

