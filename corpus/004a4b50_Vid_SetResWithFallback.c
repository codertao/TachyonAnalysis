
/* sweep */

int Vid_SetResWithFallback(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = vid_SetResInternal(param_1,param_2,param_1,param_2);
  if ((((iVar1 == -1) && (param_1 == 0x140)) && (DAT_006022f4 == 0)) && (DAT_00602324 != 0)) {
    iVar1 = vid_SetResInternal(0x280,0x1e0,0x280,0x1e0);
    Vid_SelectBlitFn();
  }
  return iVar1;
}

