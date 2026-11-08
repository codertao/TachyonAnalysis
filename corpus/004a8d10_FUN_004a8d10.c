
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong __fastcall FUN_004a8d10(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (GLBL_audio_running == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = FUN_004df1b8();
  return CONCAT44(param_2,uVar1);
}

