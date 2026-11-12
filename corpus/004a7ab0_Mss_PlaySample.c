
/* sweep */

undefined4 Mss_PlaySample(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = Mss_FindFreeChannel();
    if (iVar1 != 0) {
      uVar2 = Mss_StartSample(iVar1,param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

