
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* sweep: guess */

longlong __fastcall Snd_Fwd_4df444(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = SndAsm_QueueStream();
  return CONCAT44(param_2,uVar1);
}

