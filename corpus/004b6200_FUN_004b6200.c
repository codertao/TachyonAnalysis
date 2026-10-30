
int FUN_004b6200(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (DAT_0055ef7c << 0xb | DAT_0055ef7c >> 0x15) + DAT_0055ef7c;
  uVar1 = uVar2 * 4;
  uVar2 = uVar2 >> 0x1e;
  DAT_0055ef7c = uVar1 | uVar2;
  iVar4 = 0;
  iVar3 = (*param_1 - param_1[-1]) + 1;
  if (iVar3 != 0) {
    iVar4 = (int)((longlong)(ulonglong)(uVar1 & 0xffff | uVar2) % (longlong)iVar3);
  }
  return param_1[-1] + iVar4;
}

