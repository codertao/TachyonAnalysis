
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3a30(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined4 unaff_EBX;
  uint uVar7;
  uint uVar8;
  uint unaff_EBP;
  undefined2 *puVar9;
  
  uVar1 = DAT_00603128;
  bVar2 = 8 - DAT_00603130;
  uVar8 = CONCAT31((int3)((uint)unaff_EBX >> 8),DAT_00603134);
  bVar6 = 8 - DAT_00603134;
  bVar5 = 8 - DAT_0060312c;
  pbVar3 = (byte *)&DAT_00602e04;
  puVar9 = &DAT_00602802;
  do {
    pbVar4 = pbVar3 + 3;
    uVar7 = CONCAT22((short)(uVar8 >> 0x10),(ushort)(pbVar3[1] >> (bVar6 & 0x1f))) <<
            ((byte)uVar1 & 0x1f);
    uVar8 = CONCAT22((short)(uVar7 >> 0x10),(ushort)(*pbVar3 >> (bVar2 & 0x1f))) <<
            ((byte)DAT_00603124 & 0x1f);
    unaff_EBP = CONCAT22((short)(unaff_EBP >> 0x10),(ushort)(pbVar3[-1] >> (bVar5 & 0x1f))) <<
                ((byte)DAT_00603120 & 0x1f) | uVar7 | uVar8;
    *puVar9 = (short)unaff_EBP;
    pbVar3 = pbVar4;
    puVar9 = puVar9 + 1;
  } while ((int)pbVar4 < 0x603101);
  _DAT_00602800 = 0;
  return;
}

