
/* sweep */

void SndTrig_PlayOrPost(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = SndTrig_PlayByName(param_1,param_2,param_3);
  if (iVar1 == 0) {
    SndTrig_PostEvent(param_1,param_2,param_3);
  }
  return;
}

