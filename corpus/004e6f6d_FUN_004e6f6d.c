
undefined8 __fastcall
FUN_004e6f6d(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  
  do {
    bVar1 = *param_3;
    uVar3 = (uint)bVar1;
    if (bVar1 != 0) {
      if (bVar1 < 8) {
        uVar3 = 0;
      }
      iVar4 = uVar3 * 3;
      *param_3 = (byte)((int)((uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar4 + param_4)] * 2 +
                              (uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar4 + 1 + param_4)] * 5 +
                             (uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar4 + 2 + param_4)]) >> 3);
    }
    param_3 = param_3 + 1;
    iVar4 = param_5 + -1;
    bVar2 = 0 < param_5;
    param_5 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return CONCAT44(param_2,in_EAX);
}

