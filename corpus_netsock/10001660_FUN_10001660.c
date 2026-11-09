
void __cdecl FUN_10001660(int param_1)

{
  char cVar1;
  FILE *_File;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_10 [16];
  
  pcVar5 = (char *)(param_1 + 0x88);
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  _File = fopen(s_CUST_ID_DAT_10007020,&DAT_1000702c);
  if (_File != (FILE *)0x0) {
    pcVar2 = fgets(local_10,0x10,_File);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar2 = local_10;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      uVar4 = uVar3 - 1;
      if ((&stack0xffffffee)[uVar3] == '\n') {
        (&stack0xffffffee)[uVar3] = 0;
      }
      if (0xf < (int)uVar4) {
        uVar4 = 0xf;
      }
      pcVar2 = local_10;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    fclose(_File);
  }
  return;
}

