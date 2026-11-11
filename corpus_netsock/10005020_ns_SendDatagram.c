
/* CRC + obfuscate + sendto */

int __cdecl ns_SendDatagram(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  sockaddr local_10;
  
  if (param_2 != 0) {
    if (DAT_1001985c + -4 < param_2) {
      return 0x2738;
    }
    uVar3 = 0xffffffff;
    puVar6 = DAT_10019854 + 1;
    iVar4 = param_2;
    do {
      cVar1 = *param_1;
      *(char *)puVar6 = cVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      param_1 = param_1 + 1;
      uVar3 = uVar3 << 8 ^ *(uint *)(&DAT_10007234 + ((uVar3 >> 0x18 ^ (int)cVar1) & 0xff) * 4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar5 = uVar3;
    if (0x1f < param_2) {
      uVar5 = 0;
      iVar4 = 0;
      puVar6 = DAT_10019854 + 1;
      do {
        bVar2 = (byte)*puVar6;
        uVar5 = uVar5 | (bVar2 & 1) << ((byte)iVar4 & 0x1f);
        *(byte *)puVar6 = (bVar2 ^ (byte)uVar3) & 1 ^ bVar2;
        uVar3 = uVar3 >> 1;
        puVar6 = (uint *)((int)puVar6 + 1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
    }
    *DAT_10019854 = uVar5;
    local_10.sa_family = 2;
    local_10.sa_data._2_4_ = param_3;
    local_10.sa_data._0_2_ = htons(DAT_10019868);
    iVar4 = sendto(DAT_100096b4,(char *)DAT_10019854,param_2 + 4,0,&local_10,0x10);
    if (iVar4 == -1) {
      iVar4 = WSAGetLastError();
      return iVar4;
    }
  }
  return 0;
}

