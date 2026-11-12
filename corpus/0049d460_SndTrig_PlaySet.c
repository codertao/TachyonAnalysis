
/* sweep: guess */

undefined4 SndTrig_PlaySet(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x38) == 0) {
    return 0;
  }
  uVar1 = SndTrig_PlayEvent(param_1 * 0x70 + *(int *)(param_3 + 0x38),param_2,param_3);
  return uVar1;
}

