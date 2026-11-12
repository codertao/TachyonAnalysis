
/* sweep: guess */

int SndTrig_FindEvent(byte *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (uint *)(param_2 + 0x28);
  param_2 = *(int *)(param_2 + 0x38);
  uVar7 = 0;
  if (*puVar1 != 0) {
    pbVar4 = (byte *)(param_2 + 4);
    pbVar6 = param_1;
    pbVar5 = pbVar4;
LAB_0049d651:
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar6;
      if (bVar2 == *pbVar6) {
        if (bVar2 != 0) {
          bVar2 = pbVar4[1];
          bVar8 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_0049d675;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
          if (bVar2 != 0) goto LAB_0049d651;
        }
        iVar3 = 0;
      }
      else {
LAB_0049d675:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar3 == 0) {
        return param_2;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 0x70;
      pbVar4 = pbVar5 + 0x70;
      pbVar6 = param_1;
      pbVar5 = pbVar4;
    } while (uVar7 < *puVar1);
  }
  return 0;
}

