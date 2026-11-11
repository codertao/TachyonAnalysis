
void FUN_10003e20(void)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  
  pcVar1 = DAT_10019c5c;
  uVar2 = 0;
  builtin_strncpy(DAT_10019c5c,"R\x10\x04",4);
  if (DAT_100198b8 != 0) {
    piVar3 = (int *)(DAT_10019afc + 0xa4);
    do {
      if ((piVar3[-2] != 0) && (piVar3[-3] != 0)) {
        ns_SendTo(DAT_10019c5c,(uint)*(ushort *)(pcVar1 + 2),*(undefined4 *)(*piVar3 + 4),
                  *(undefined2 *)(*piVar3 + 0x14));
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x2f;
    } while (uVar2 < DAT_100198b8);
  }
  return;
}

