
void __cdecl FUN_10003f00(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = 4;
  bVar6 = true;
  piVar4 = &DAT_10019990;
  do {
    param_1 = param_1 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *param_1 == *piVar4;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_10003ed0(param_2,param_3);
    pcVar1 = DAT_10019c5c;
    iVar2 = 0x40;
    builtin_strncpy(DAT_10019c5c,"\x11\x10\x04\x01",4);
    puVar3 = &DAT_100198b0;
    pcVar5 = pcVar1;
    for (; pcVar5 = pcVar5 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar5 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    if ((pcVar1[8] & 8U) != 0) {
      pcVar5 = pcVar1 + 0x94;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + 4;
      }
    }
    FUN_10005240(DAT_10019c5c,(uint)*(ushort *)(pcVar1 + 2),param_2,(short)param_3);
  }
  return;
}

