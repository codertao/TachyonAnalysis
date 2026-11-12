
/* sweep: "base_LoadBaseFile" */

char * BaseFile_Load(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = param_1;
  iVar2 = Cbin_Open_Inner(param_1);
  if (iVar2 == 0) {
    Error_CannotOpenFile(pcVar5,s_base_LoadBaseFile_00532d74);
    return (char *)0x0;
  }
  Mem_AllocZeroTagged(&param_1,0x24,4,s_BASE_OBJECT_DATA_00532d60,0xffff);
  uVar3 = 0xffffffff;
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
  pcVar6 = param_1 + 0x14;
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
  *(undefined4 *)(param_1 + 8) = param_2;
  BaseFile_LoadPaks(param_1);
  BaseFile_LoadParts(param_1);
  if (DAT_005b9800 != 0) {
    OurFreeMem(DAT_005b9804);
  }
  if (DAT_005b9808 != 0) {
    OurFreeMem(DAT_005b980c);
  }
  Cbin_Close();
  return param_1;
}

