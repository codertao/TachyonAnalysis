
int __cdecl FUN_10005120(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined2 local_14;
  sockaddr local_10;
  
  if (param_2 != 0) {
    if (DAT_1001985c + -4 < param_2) {
      return 0x2738;
    }
    uVar3 = 0xffffffff;
    pcVar6 = DAT_10019854 + 10;
    iVar4 = param_2;
    do {
      cVar1 = *param_1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 << 8 ^ *(uint *)(&DAT_10007234 + ((uVar3 >> 0x18 ^ (int)cVar1) & 0xff) * 4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar5 = uVar3;
    if (0x1f < param_2) {
      uVar5 = 0;
      iVar4 = 0;
      pbVar7 = (byte *)(DAT_10019854 + 10);
      do {
        bVar2 = *pbVar7;
        uVar5 = uVar5 | (bVar2 & 1) << ((byte)iVar4 & 0x1f);
        *pbVar7 = (bVar2 ^ (byte)uVar3) & 1 ^ bVar2;
        uVar3 = uVar3 >> 1;
        pbVar7 = pbVar7 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
    }
    pcVar6 = DAT_10019854;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    local_14 = CONCAT11(10,param_4 != 0);
    *(uint *)(pcVar6 + 4) = uVar5;
    *(undefined2 *)(pcVar6 + 8) = local_14;
    local_10.sa_family = 2;
    local_10.sa_data._2_4_ = param_3;
    local_10.sa_data._0_2_ = htons(DAT_10019868);
    iVar4 = sendto(DAT_100096b4,DAT_10019854,param_2 + 10,0,&local_10,0x10);
    if (iVar4 == -1) {
      iVar4 = WSAGetLastError();
      return iVar4;
    }
  }
  return 0;
}

