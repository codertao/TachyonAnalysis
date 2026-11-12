
/* sweep: "journal mem" */

void Journal_WriteBuffer(undefined4 param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar3 = param_3;
  Mem_AllocZeroTagged(&param_3,param_3,4,s_journal_mem_0053eba8,0xa100);
  if (param_3 != (char *)0x0) {
    pcVar6 = param_3;
    for (uVar5 = (uint)pcVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = (uint)pcVar3 & 3; pcVar4 = param_3, pcVar2 = pcVar3, uVar5 != 0; uVar5 = uVar5 - 1)
    {
      *pcVar6 = *param_2;
      param_2 = param_2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    for (; pcVar2 != (char *)0x0; pcVar2 = pcVar2 + iVar1) {
      if ((*pcVar4 == '\n') && (pcVar4[1] == '\0')) {
        *pcVar4 = '\r';
        pcVar4[1] = '\n';
        pcVar4 = pcVar4 + 2;
        iVar1 = -2;
      }
      else {
        iVar1 = -1;
        pcVar4 = pcVar4 + 1;
      }
    }
    save_to_open_file(param_3,pcVar3);
    OurFreeMem(param_3);
  }
  return;
}

