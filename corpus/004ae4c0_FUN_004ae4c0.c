
int FUN_004ae4c0(byte *param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = param_1;
  uVar5 = *param_4;
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    uVar2 = param_2[3];
    if ((uVar2 != 0) && ((uVar3 = param_4[5], uVar3 != 0 && (uVar3 != uVar2)))) {
      lVar4 = (longlong)(int)*param_4 *
              (longlong)(int)((longlong)((ulonglong)uVar3 << 0x20) / (longlong)(int)uVar2);
      uVar5 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    }
    bVar1 = *param_1;
    param_1 = (byte *)0x0;
    while (bVar1 != 0) {
      param_1 = (byte *)((int)param_1 +
                        (*(ushort *)(*param_2 + 2 + (uint)bVar1 * 0xc) * uVar5 >> 0x10) +
                        (uVar5 >> 0x10));
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
    return (int)param_1;
  }
  return 0;
}

