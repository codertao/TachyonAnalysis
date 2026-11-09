
void __cdecl FUN_10003770(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar2 = DAT_10019c5c;
  pcVar2[0] = ' ';
  pcVar2[1] = '\x10';
  pcVar2[2] = 'T';
  pcVar2[3] = '\0';
  *(undefined4 *)(pcVar2 + 4) = DAT_10019ad0;
  *(undefined4 *)(pcVar2 + 8) = DAT_10019ad4;
  *(undefined4 *)(pcVar2 + 0xc) = DAT_10019ad8;
  *(undefined4 *)(pcVar2 + 0x10) = DAT_10019adc;
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_10019a80;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x14;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_10005020(DAT_10019c5c,(uint)*(ushort *)(pcVar2 + 2),param_1);
  return;
}

