
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* texture cache 0x62c12c (stride 0x50) lookup by name */

undefined4 TexCache_FindByName(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = 0;
  pbVar6 = (byte *)&DAT_0062c12c;
  if (DAT_00668fb0 != 0) {
    do {
      pbVar2 = param_1;
      pbVar5 = pbVar6;
      if (*(int *)(pbVar6 + 0x24) != 0) {
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_004af146:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_004af14b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_004af146;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_004af14b:
        if (iVar3 == 0) {
          _DAT_00603100 = (uint)*(ushort *)(pbVar6 + 0x20);
          DAT_00603104 = (uint)*(ushort *)(pbVar6 + 0x22);
          return *(undefined4 *)(pbVar6 + 0x28);
        }
      }
      uVar4 = uVar4 + 1;
      pbVar6 = pbVar6 + 0x50;
    } while (uVar4 < DAT_00668fb0);
  }
  return 0;
}

