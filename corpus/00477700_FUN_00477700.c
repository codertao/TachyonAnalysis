
void FUN_00477700(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = Job_FindActive();
  DAT_00563638 = (char *)0x0;
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0xf4) != '\0') &&
       (puVar3 = (undefined4 *)Rtxt_Lookup(DAT_005879a8,&DAT_00534280,iVar2 + 0xf4),
       puVar3 != (undefined4 *)0x0)) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*puVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 != 1) {
        FUN_0048e3d0(&DAT_00563638,~uVar4,4,s_TEMP_JOB_BUFFER_00550248,0xa100);
        if (DAT_00563638 == (char *)0x0) {
          return;
        }
        uVar4 = 0xffffffff;
        pcVar6 = (char *)*puVar3;
        do {
          pcVar7 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar7 + -uVar4;
        pcVar7 = DAT_00563638;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        return;
      }
    }
    FUN_0048e3d0(&DAT_00563638,0x28,4,s_TEMP_JOB_BUFFER_00550248,0xa100);
    if (DAT_00563638 != (char *)0x0) {
      pcVar6 = s__No_objectives_entry_for_this_jo_00550224;
      pcVar7 = DAT_00563638;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      *(undefined2 *)pcVar7 = *(undefined2 *)pcVar6;
    }
  }
  return;
}

