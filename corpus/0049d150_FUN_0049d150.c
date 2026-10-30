
uint FUN_0049d150(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = 0;
  pbVar2 = *(byte **)(param_2 + 0x1c);
  pbVar5 = param_1;
  pbVar6 = pbVar2;
  if (*(uint *)(param_2 + 8) != 0) {
LAB_0049d16a:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0049d18e;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_0049d16a;
        }
        iVar3 = 0;
      }
      else {
LAB_0049d18e:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return -(uint)(*(int *)(pbVar6 + 0x1c) != 0) & (uint)pbVar6;
      }
      uVar4 = uVar4 + 1;
      pbVar2 = pbVar6 + 0x34;
      pbVar5 = param_1;
      pbVar6 = pbVar2;
    } while (uVar4 < *(uint *)(param_2 + 8));
  }
  return 0;
}

