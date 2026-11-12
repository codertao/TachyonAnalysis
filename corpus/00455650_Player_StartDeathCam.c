
/* sweep: guess */

void Player_StartDeathCam(void)

{
  int iVar1;
  
  iVar1 = GLBL_SOME_CONTEXT;
  *(undefined1 **)(GLBL_SOME_CONTEXT + 0x68) = &LAB_004555f0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  Camera_SetModeById(1);
  Camera_SetFromEntity(0x3e8000,0x400000,0x80000,0);
  Scoreboard_SetMode(2);
  SpaceDust_SetEnabled(0);
  Input_PushBindingSet(&PTR_DAT_0053e9b8);
  return;
}

