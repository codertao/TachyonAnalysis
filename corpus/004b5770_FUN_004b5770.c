
undefined4 FUN_004b5770(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  pbVar2 = DAT_006695bc;
  pbVar5 = param_1;
  pbVar4 = DAT_006695bc;
  if (0 < DAT_0066a620) {
LAB_004b578d:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_004b57b1;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_004b578d;
        }
        iVar3 = 0;
      }
      else {
LAB_004b57b1:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return *(undefined4 *)(DAT_006695bc + iVar6 * 0x24 + 0x20);
      }
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar4 + 0x24;
      pbVar5 = param_1;
      pbVar4 = pbVar4 + 0x24;
    } while (iVar6 < DAT_0066a620);
  }
  return 0;
}

