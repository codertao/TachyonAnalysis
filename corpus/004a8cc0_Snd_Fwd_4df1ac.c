
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* sweep: guess */

longlong __fastcall Snd_Fwd_4df1ac(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((GLBL_audio_running != 0) && (param_3 != 0)) {
    uVar1 = SndAsm_StartVoiceA_Fwd();
    return CONCAT44(param_2,uVar1);
  }
  return (ulonglong)param_2 << 0x20;
}

