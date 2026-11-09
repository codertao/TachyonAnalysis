
ulong __cdecl FUN_10004fa0(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  hostent *phVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar2 = inet_addr((char *)param_1);
  if (uVar2 == 0xffffffff) {
    pbVar4 = &DAT_10007644;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10004fe4:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10004fe9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10004fe4;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_10004fe9:
    if (iVar5 != 0) {
      phVar3 = gethostbyname((char *)param_1);
      if (phVar3 == (hostent *)0x0) {
        return 0;
      }
      uVar2 = *(ulong *)*phVar3->h_addr_list;
    }
  }
  return uVar2;
}

