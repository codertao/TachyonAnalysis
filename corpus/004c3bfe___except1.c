
/* CRT: fp exception */

float10 __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                 undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = __handle_exc(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    __raise_exc();
  }
  iVar1 = __errcode(param_1);
  if ((DAT_005627f0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)__umatherr(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  __set_errno(iVar1);
  __ctrlfp();
  return (float10)param_4;
}

