
undefined8 __fastcall FUN_004e0417(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *in_EAX;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  iVar2 = in_EAX[1];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar4 = in_EAX[2];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  iVar3 = iVar2;
  if (iVar5 < iVar2) {
    iVar3 = iVar5;
    iVar5 = iVar2;
  }
  iVar2 = iVar4;
  if (iVar5 < iVar4) {
    iVar2 = iVar5;
    iVar5 = iVar4;
  }
  lVar1 = (longlong)(iVar3 + iVar2) * 0x5000;
  iVar5 = iVar5 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  return CONCAT44(param_2,iVar5);
}

