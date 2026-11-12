
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Pal_Build32Lut(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  
  uVar2 = DAT_0060314c;
  uVar1 = DAT_00603148;
  pbVar3 = (byte *)&DAT_00602e04;
  puVar5 = &DAT_00602a04;
  do {
    pbVar4 = pbVar3 + 3;
    *puVar5 = (uint)pbVar3[1] << ((byte)uVar2 & 0x1f) |
              (uint)pbVar3[-1] << ((byte)DAT_00603144 & 0x1f) |
              (uint)*pbVar3 << ((byte)uVar1 & 0x1f);
    pbVar3 = pbVar4;
    puVar5 = puVar5 + 1;
  } while ((int)pbVar4 < 0x603101);
  _DAT_00602a00 = 0;
  return;
}

