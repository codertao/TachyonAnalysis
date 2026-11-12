
/* sweep: guess */

undefined4 Voice_PlayQueued(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) && (DAT_005897c0 != 0)) {
    iVar1 = Audio_IsPlaying(DAT_005897c4);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = Voice_Play(param_1,param_2);
  return uVar2;
}

