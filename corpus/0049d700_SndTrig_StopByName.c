
/* sweep: guess */

void SndTrig_StopByName(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = SndTrig_FindEvent(param_1,param_2);
  SndTrig_StopEvent(uVar1);
  return;
}

