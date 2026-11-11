
/* 0x1030 */

void ns_SendCreatePlayer(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = '0';
  pcVar1[1] = '\x10';
  pcVar1[2] = -0x60;
  pcVar1[3] = '\0';
  *(undefined4 *)(pcVar1 + 4) = DAT_10019b48;
  puVar5 = &DAT_10019b58;
  pcVar6 = pcVar1 + 8;
  for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if (DAT_10019bdc != 0) {
    *(short *)(pcVar1 + 2) = (short)DAT_10019bdc + 0xa0;
    uVar4 = DAT_10019bdc;
    pcVar6 = DAT_10019bd8;
    pcVar7 = DAT_10019c5c + 0xa0;
    for (uVar3 = DAT_10019bdc >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  ns_SendDatagram(DAT_10019c5c,(uint)*(ushort *)(pcVar1 + 2),DAT_100199b4);
  return;
}

