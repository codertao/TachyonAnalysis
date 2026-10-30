
void FUN_004381d0(int param_1)

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
    iVar1 = FUN_0049b480(&DAT_00536860,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_134;
      for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_f4,pcVar2,0x3f);
      pcVar2 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_134,pcVar2,0x3f);
      pcVar2 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_74,pcVar2,0x3f);
      pcVar2 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_b4,pcVar2,0x3f);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_28 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_24 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_20 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_1c = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_18 = FUN_004bd32f(uVar3);
      FUN_0043d030(param_1,local_134);
      iVar1 = FUN_0049b480(&DAT_00536860,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x58),0x134,&LAB_004397a0);
  pcVar2 = *(char **)(param_1 + 0x24);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    pcVar5 = pcVar2 + 0xc0;
    do {
      if ((*pcVar2 != '\0') && (iVar1 = FUN_0043bf10(param_1,pcVar5), iVar1 != 0)) {
        FUN_0043e6a0(param_1,pcVar2,*(undefined4 *)(iVar1 + 0x40));
      }
      uVar4 = uVar4 + 1;
      pcVar2 = pcVar2 + 0x134;
      pcVar5 = pcVar5 + 0x134;
    } while (uVar4 < *(uint *)(param_1 + 0x58));
  }
  return;
}

