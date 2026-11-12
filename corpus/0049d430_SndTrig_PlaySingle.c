
/* sweep: guess */

undefined4 SndTrig_PlaySingle(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    return 0;
  }
  uVar1 = SndTrig_PlaySample(*(int *)(param_3 + 0x1c) + param_1 * 0x34,param_2,param_3);
  return uVar1;
}

