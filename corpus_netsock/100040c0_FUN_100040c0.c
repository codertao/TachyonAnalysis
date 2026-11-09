
void __cdecl FUN_100040c0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  undefined2 uVar8;
  
  iVar3 = 4;
  bVar7 = true;
  piVar6 = &DAT_10019990;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *piVar4 == *piVar6;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  uVar8 = (undefined2)param_3;
  if (!bVar7) {
    FUN_10003f80(2,2,param_2,uVar8);
    return;
  }
  if (((byte)DAT_100198b4 & 8) != 0) {
    pbVar5 = &DAT_10019940;
    pbVar2 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_1000412c:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10004131;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_1000412c;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10004131:
    if (iVar3 != 0) {
      FUN_10003f80(2,1,param_2,uVar8);
      return;
    }
  }
  iVar3 = FUN_10004090(param_2,param_3);
  if (iVar3 == 0) {
    FUN_10003f80(2,3,param_2,uVar8);
    return;
  }
  FUN_10003f80(1,0,param_2,uVar8);
  return;
}

