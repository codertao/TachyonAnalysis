
void FUN_004a3c20(uint *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (0 < param_3) {
    do {
      bVar2 = *param_2;
      pbVar3 = param_2 + 1;
      pbVar1 = param_2 + 2;
      param_2 = param_2 + 3;
      *param_1 = (uint)bVar2 << ((byte)DAT_0060314c & 0x1f) |
                 (uint)*pbVar3 << ((byte)DAT_00603148 & 0x1f) |
                 (uint)*pbVar1 << ((byte)DAT_00603144 & 0x1f);
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

