
int __cdecl
FUN_100052e0(byte *param_1,int param_2,undefined4 *param_3,u_short *param_4,uint *param_5)

{
  byte bVar1;
  u_short uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar3 = recvfrom(DAT_100096b4,(char *)DAT_10019854,DAT_1001985c,0,&local_10,&local_14);
  if (iVar3 == -1) {
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    iVar3 = WSAGetLastError();
    if (iVar3 != 0x2733) {
      return iVar3;
    }
  }
  else {
    iVar4 = FUN_10005280(CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_));
    if (iVar4 != 0) {
      *param_3 = 0;
      *param_4 = 0;
      *param_5 = 0;
      return 0x66;
    }
    uVar6 = *DAT_10019854;
    if (uVar6 == 0) {
      uVar5 = (uint)*(byte *)((int)DAT_10019854 + 9);
    }
    else {
      uVar5 = 4;
    }
    iVar4 = iVar3 - uVar5;
    if (param_2 < iVar4) {
      *param_3 = 0;
      *param_4 = 0;
      *param_5 = 0;
      return 0x2738;
    }
    if (0x1f < iVar4) {
      if (uVar5 != 4) {
        uVar6 = DAT_10019854[1];
      }
      uVar7 = 0;
      pbVar8 = (byte *)((int)DAT_10019854 + uVar5);
      iVar11 = 0;
      do {
        bVar1 = *pbVar8;
        uVar7 = uVar7 | (bVar1 & 1) << ((byte)iVar11 & 0x1f);
        *pbVar8 = (bVar1 ^ (byte)uVar6) & 1 ^ bVar1;
        uVar6 = uVar6 >> 1;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x20);
      if (uVar5 == 4) {
        *DAT_10019854 = uVar7;
      }
      else {
        DAT_10019854[1] = uVar7;
      }
    }
    pbVar8 = (byte *)((int)DAT_10019854 + uVar5);
    uVar6 = 0xffffffff;
    pbVar9 = param_1;
    do {
      bVar1 = *pbVar8;
      *pbVar9 = bVar1;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
      uVar6 = uVar6 << 8 ^ *(uint *)(&DAT_10007234 + (uVar6 >> 0x18 ^ (uint)bVar1) * 4);
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
    if (uVar5 == 4) {
      uVar7 = *DAT_10019854;
    }
    else {
      uVar7 = DAT_10019854[1];
    }
    if ((uVar6 != uVar7) || (iVar3 <= (int)uVar5)) {
      if (4 < uVar5) {
        uVar6 = DAT_10019854[1];
        uVar7 = 0;
        pbVar8 = (byte *)((int)DAT_10019854 + uVar5);
        iVar4 = 0;
        do {
          bVar1 = *pbVar8;
          uVar7 = uVar7 | (bVar1 & 1) << ((byte)iVar4 & 0x1f);
          *pbVar8 = (bVar1 ^ (byte)uVar6) & 1 ^ bVar1;
          uVar6 = uVar6 >> 1;
          pbVar8 = pbVar8 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x20);
        DAT_10019854[1] = uVar7;
        uVar5 = 0;
        iVar4 = 0;
        puVar10 = DAT_10019854 + 1;
        do {
          uVar6 = *puVar10;
          *(byte *)puVar10 = (byte)uVar6 & 0xfe;
          uVar5 = uVar5 | ((byte)uVar6 & 1) << ((byte)iVar4 & 0x1f);
          puVar10 = (uint *)((int)puVar10 + 1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x20);
        uVar6 = 0xffffffff;
        *DAT_10019854 = uVar5;
        iVar4 = iVar3 + -4;
        puVar10 = DAT_10019854 + 1;
        pbVar8 = param_1;
        do {
          uVar5 = *puVar10;
          *pbVar8 = (byte)uVar5;
          pbVar8 = pbVar8 + 1;
          puVar10 = (uint *)((int)puVar10 + 1);
          uVar6 = uVar6 << 8 ^ *(uint *)(&DAT_10007234 + (uVar6 >> 0x18 ^ (uint)(byte)uVar5) * 4);
          iVar4 = iVar4 + -1;
        } while (0 < iVar4);
        uVar5 = 4;
        uVar7 = *DAT_10019854;
      }
      if ((uVar6 != uVar7) || (iVar3 <= (int)uVar5)) {
        *param_3 = 0;
        *param_4 = 0;
        *param_5 = 0;
        return 0x271e;
      }
    }
    if ((4 < uVar5) && ((DAT_10019854[2] & 1) != 0)) {
      if (DAT_10019860 != 0) {
        uVar6 = (*DAT_100096ac)(param_1,&DAT_10009854,0x10000);
        pbVar8 = (byte *)&DAT_10009854;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_1 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          param_1 = param_1 + 4;
        }
        for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          param_1 = param_1 + 1;
        }
        *param_3 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
        uVar2 = htons(local_10.sa_data._0_2_);
        *param_4 = uVar2;
        *param_5 = uVar6;
        return 0;
      }
      *param_3 = 0;
      *param_4 = 0;
      *param_5 = 0;
      return 0x6a;
    }
    *param_3 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
    uVar2 = htons(local_10.sa_data._0_2_);
    *param_4 = uVar2;
    *param_5 = iVar3 - uVar5;
  }
  return 0;
}

