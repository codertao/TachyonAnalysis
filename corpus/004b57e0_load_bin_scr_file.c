
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * load_bin_scr_file(char *bin_file)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  
  uVar6 = 0xffffffff;
  GLBL_bin_content = (int *)0x0;
  pcVar9 = bin_file;
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar10 + -uVar6;
  pcVar10 = (char *)&DAT_006694a0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar3 = Fs_Exists(bin_file);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  _DAT_00669604 = Fs_GetSize(bin_file);
  piVar4 = (int *)load_a_file_probably(bin_file);
  GLBL_bin_content = piVar4;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  if (*piVar4 != MAGIC_SCR0) {
    OurFreeMem(piVar4);
    GLBL_bin_content = (int *)0x0;
    return (int *)0x0;
  }
  iVar3 = 0;
  piVar4[3] = piVar4[3] + (int)piVar4;
  piVar8 = (int *)GLBL_bin_content[3];
  if (0 < GLBL_bin_content[2]) {
    do {
      iVar2 = *piVar8;
      *piVar8 = iVar2 + (int)piVar4;
      FUN_004b5920(iVar2 + (int)piVar4);
      piVar8 = piVar8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < GLBL_bin_content[2]);
  }
  if (GLBL_bin_content[4] != 0) {
    iVar3 = 0;
    GLBL_bin_content[5] = GLBL_bin_content[5] + (int)piVar4;
    GLBL_bin_content[6] = GLBL_bin_content[6] + (int)piVar4;
    pcVar9 = (char *)GLBL_bin_content[5];
    puVar11 = (undefined4 *)GLBL_bin_content[6];
    if (0 < GLBL_bin_content[4]) {
      do {
        uVar5 = MusScr_ResolveNative(pcVar9 + 1);
        *puVar11 = uVar5;
        pcVar9 = pcVar9 + *pcVar9;
        puVar11 = puVar11 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < GLBL_bin_content[4]);
    }
  }
  return GLBL_bin_content;
}

