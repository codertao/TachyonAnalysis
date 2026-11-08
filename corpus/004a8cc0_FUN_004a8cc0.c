
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong __fastcall FUN_004a8cc0(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((GLBL_audio_running != 0) && (param_3 != 0)) {
    uVar1 = FUN_004df1ac();
    return CONCAT44(param_2,uVar1);
  }
  return (ulonglong)param_2 << 0x20;
}

