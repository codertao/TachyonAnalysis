
uint FUN_004ae560(byte *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_4 + 4);
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    uVar1 = param_2[3];
    if (((uVar1 != 0) && (uVar2 = *(uint *)(param_4 + 0x18), uVar2 != 0)) && (uVar2 != uVar1)) {
      lVar3 = (longlong)*(int *)(param_4 + 4) *
              (longlong)(int)((longlong)((ulonglong)uVar2 << 0x20) / (longlong)(int)uVar1);
      uVar4 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
    }
    return *(byte *)(*param_2 + 4 + (uint)*param_1 * 0xc) * uVar4 >> 0x10;
  }
  return 0;
}

