
/* sweep */

void Mnu_LoadTextAreas(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char local_134 [64];
  char local_f4 [64];
  char local_b4 [64];
  char local_74 [76];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = Cbin_SelectGroup(s_TEXT_AREAS_0053fd98);
  if (iVar1 != 0) {
    iVar1 = Cbin_IterField_Global(&DAT_00536860,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_134;
      for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)_strtok(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_f4,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_134,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_74,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_b4,pcVar2,0x3f);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_28 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_24 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_20 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_1c = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_18 = _atoi(uVar3);
      Ui_AddLabel(param_1,local_134);
      iVar1 = Cbin_IterField_Global(&DAT_00536860,&DAT_005a41e0,0x100,0);
    }
  }
  _qsort(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x58),0x134,&LAB_004397a0);
  pcVar2 = *(char **)(param_1 + 0x24);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    pcVar5 = pcVar2 + 0xc0;
    do {
      if ((*pcVar2 != '\0') && (iVar1 = Mnu_FindText(param_1,pcVar5), iVar1 != 0)) {
        Ui_SetLabelText(param_1,pcVar2,*(undefined4 *)(iVar1 + 0x40));
      }
      uVar4 = uVar4 + 1;
      pcVar2 = pcVar2 + 0x134;
      pcVar5 = pcVar5 + 0x134;
    } while (uVar4 < *(uint *)(param_1 + 0x58));
  }
  return;
}

