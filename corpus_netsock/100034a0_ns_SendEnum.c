
/* 0x1010 */

void __cdecl ns_SendEnum(undefined4 param_1)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = '\x10';
  pcVar1[1] = '\x10';
  pcVar1[2] = '\x14';
  pcVar1[3] = '\0';
  *(undefined4 *)(pcVar1 + 4) = DAT_100199cc;
  *(undefined4 *)(pcVar1 + 8) = DAT_100199d0;
  *(undefined4 *)(pcVar1 + 0xc) = DAT_100199d4;
  *(undefined4 *)(pcVar1 + 0x10) = DAT_100199d8;
  sVar2 = DAT_10019868;
  if (DAT_10019c9e != 0) {
    iVar3 = 0x10;
    do {
      ns_SendDatagram(DAT_10019c5c,(uint)*(ushort *)(pcVar1 + 2),param_1);
      DAT_10019868 = DAT_10019868 + 0x1000;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_10019868 = sVar2;
    return;
  }
  ns_SendDatagram(DAT_10019c5c,0x14,param_1);
  return;
}

