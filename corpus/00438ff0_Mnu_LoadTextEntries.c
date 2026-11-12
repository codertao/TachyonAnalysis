
/* sweep */

void Mnu_LoadTextEntries(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_1e0 [64];
  char local_1a0 [64];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  char local_134 [64];
  char local_f4 [204];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = Cbin_SelectGroup(s_TEXT_ENTRY_AREAS_0053fe10);
  if (iVar1 != 0) {
    iVar1 = Cbin_IterField_Global(s_TEXTENTRY_0053fe04,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_134;
      for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = local_1e0;
      for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)_strtok(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_1a0,pcVar2,0x3f);
      _strncpy(local_f4,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_1e0,pcVar2,0x3f);
      _strncpy(local_134,pcVar2,0x3f);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_160 = _atoi(uVar3);
      local_28 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_15c = _atoi(uVar3);
      local_24 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_158 = _atoi(uVar3);
      local_20 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_154 = _atoi(uVar3);
      local_1c = _atoi(uVar3);
      iVar1 = _strtok(0,&DAT_0053ebb4);
      if (iVar1 != 0) {
        local_14c = Ui_FindButton(param_1,iVar1);
      }
      Ui_AddLabel(param_1,local_134);
      Ui_AddTextEntry(param_1,local_1e0);
      iVar1 = Cbin_IterField_Global(s_TEXTENTRY_0053fe04,&DAT_005a41e0,0x100,0);
    }
  }
  _qsort(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x5c),0xac,&LAB_004397a0);
  return;
}

