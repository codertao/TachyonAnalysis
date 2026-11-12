
/* sweep: guess */

void Autopilot_Begin(void)

{
  undefined4 uVar1;
  
  if (DAT_005b3344 == 0) {
    DAT_005b3344 = 1;
    *(undefined **)(GLBL_SOME_CONTEXT + 0x68) = &DAT_00454200;
    DAT_005aeebc = 0;
    DAT_005b1ee8 = 0;
    SpaceDust_SetEnabled(0);
    uVar1 = Ent_CallDescHook78(DAT_005b3340);
    NetCli_SendTrigger8(uVar1);
    FF_SetSpring(0x9c4);
  }
  return;
}

