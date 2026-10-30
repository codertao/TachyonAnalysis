
undefined8 __fastcall
FUN_004eae8d(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 in_EAX;
  int iVar2;
  
  do {
    if (*param_3 != 0) {
      iVar2 = (uint)*param_3 * 3;
      *param_3 = (byte)((int)((uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar2 + param_4)] * 2 +
                              (uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar2 + 1 + param_4)] * 5 +
                             (uint)(byte)(&DAT_004e8a10)[*(byte *)(iVar2 + 2 + param_4)]) >> 3);
    }
    param_3 = param_3 + 1;
    iVar2 = param_5 + -1;
    bVar1 = 0 < param_5;
    param_5 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return CONCAT44(param_2,in_EAX);
}

