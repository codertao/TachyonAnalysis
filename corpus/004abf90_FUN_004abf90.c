
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004abf90(float param_1,float param_2,float param_3,float param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  iVar2 = GLBL_some_str;
  if ((DAT_00604494 == 0) || (iVar2 = *(int *)(DAT_00604504 + 0x1c), (DAT_006044a0 & 2) != 0)) {
    if (iVar2 != 0) {
      FUN_004e9334(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  else if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    if ((param_1 == param_3) && (param_2 == param_4)) {
      param_3 = (float)((int)param_3 + 1);
      param_4 = (float)((int)param_4 + 1);
    }
    iVar2 = (int)param_1 << 7;
    iVar3 = (int)param_2 << 7;
    param_1 = (float)((int)param_3 << 7);
    param_2 = (float)((int)param_4 << 7);
    param_3 = (float)iVar3;
    param_4 = (float)iVar2;
    iVar3 = FUN_004abd90(&param_4,&param_3,&param_1,&param_2);
    iVar2 = param_5;
    if (iVar3 == 0) {
      uVar1 = *(uint *)(&DAT_005a6440 + param_5 * 4);
      local_c = (int)(longlong)ROUND(param_4);
      iVar3 = local_c >> 7;
      local_c = (int)(longlong)ROUND(param_3);
      iVar4 = local_c >> 7;
      local_c = (int)(longlong)ROUND(param_1);
      _DAT_0060e7f0 = local_c >> 7;
      local_c = (int)(longlong)ROUND(param_2);
      param_5 = ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
                uVar1 & 0xff000000;
      _DAT_0060e7c4 = iVar3 << 7;
      _DAT_0060e7c8 = iVar4 << 7;
      _DAT_0060e7ec = DAT_0060f870;
      _DAT_0060e7c0 = DAT_0060f870;
      _DAT_0060e7f0 = _DAT_0060e7f0 << 7;
      _DAT_0060e7f4 = (local_c >> 7) << 7;
      if (DAT_005a6318 != 0) {
        _DAT_0060e7d4 = _DAT_005a631c * 0x1000000 + 0xffffff;
        _DAT_0060e800 = _DAT_0060e7d4;
        (*DAT_00604558)(&DAT_0060e7ac,&DAT_0060e7d8,param_5,0x20000,0);
        return;
      }
      _DAT_0060e800 = 0x7f7f7f;
      _DAT_0060e7d4 = 0x7f7f7f;
      (*DAT_00604558)(&DAT_0060e7ac,&DAT_0060e7d8,param_5,4,0);
      FUN_004ac160(iVar3 + -1,iVar4 + -1,iVar2);
    }
  }
  return;
}

