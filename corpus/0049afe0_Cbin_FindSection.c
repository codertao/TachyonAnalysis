
undefined4 Cbin_FindSection(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_80 [128];
  
  if (param_2 != 0) {
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = local_80;
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
    FUN_004c83ea(local_80);
    if (DAT_006040ec == 0) {
      iVar3 = FUN_0049af80(local_80,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x28),
                           *(undefined4 *)(param_2 + 0x18));
    }
    else {
      iVar3 = maybe_find_in_list(local_80,*(undefined4 *)(param_2 + 0x28),
                                 *(undefined4 *)(param_2 + 0x18),0x1c,&LAB_0049af60);
    }
    if (iVar3 != 0) {
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 0x18);
        *(int *)(param_2 + 0x24) = iVar3;
        return 1;
      }
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar3 + 4);
      uVar2 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(param_2 + 8) = uVar2;
      return uVar2;
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  return 0;
}

