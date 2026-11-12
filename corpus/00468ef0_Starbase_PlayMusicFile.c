
/* sweep */

void Starbase_PlayMusicFile(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  Music_SetFadeOut(0x20);
  iVar1 = Music_IsOffOrMuted();
  for (iVar2 = 0x32; (iVar1 == 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
    MessagePump_IdleTick();
    Music_Tick();
    iVar1 = Music_IsOffOrMuted();
  }
  load_sbf_and_bin(param_1,param_2);
  set_some_glbl_scalar(GLBL_spacesav[0x53]);
  return;
}

