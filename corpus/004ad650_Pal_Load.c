
/* load .pal: +0 rgb[768], +0x300 remapped rgb, +0x600 protect mask[256] (indices listed in the
   .pal), +0x700/+0x704 optional .CR1/.CR2 */

int Pal_Load(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_210 [264];
  undefined1 local_108 [264];
  
  iVar3 = Image_Load(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = PalRef_Create(&DAT_00602e00);
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (DAT_00603108 != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + iVar3);
      uVar5 = uVar5 + 1;
      *(undefined1 *)(*pbVar1 + 0x600 + iVar4) = 1;
    } while (uVar5 < DAT_00603108);
  }
  uVar5 = 0xffffffff;
  pcVar9 = param_1;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar10 + -uVar5;
  pcVar10 = (char *)&DAT_006045a0;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar6 = _strtok(&DAT_006045a0,&DAT_00548004);
  str_sprintf(local_210,s__s_CR1_0055e9bc,uVar6);
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar9 + -uVar5;
  pcVar10 = (char *)&DAT_006045a0;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar6 = _strtok(&DAT_006045a0,&DAT_00548004);
  str_sprintf(local_108,s__s_CR2_0055e9b4,uVar6);
  iVar7 = Fs_Exists(local_210);
  if ((iVar7 != 0) && (iVar7 = Fs_Exists(local_108), iVar7 != 0)) {
    uVar6 = load_a_file_probably(local_210);
    *(undefined4 *)(iVar4 + 0x700) = uVar6;
    uVar6 = load_a_file_probably(local_108);
    *(undefined4 *)(iVar4 + 0x704) = uVar6;
  }
  *(int *)(iVar4 + 0x714) = DAT_0060458c;
  DAT_006046a8 = DAT_006046a8 + 1;
  DAT_0060458c = iVar4;
  OurFreeMem(iVar3);
  return iVar4;
}

