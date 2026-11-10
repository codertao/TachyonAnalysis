
void FUN_00438870(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 in_stack_00000090;
  int in_stack_00001724;
  
  FUN_004bd340();
  iVar2 = Cbin_SelectGroup(s_STRINGS_0053fde4);
  if (iVar2 != 0) {
    iVar2 = FUN_0049b480(s_RESOURCE_0053fdd8,&DAT_005a41e0,0x100,0);
    if (iVar2 != 0) {
      FUN_0043bc70(in_stack_00001724,&DAT_005a41e0);
    }
    Cbin_SelectGroup(s_STRINGS_0053fde4);
    iVar2 = FUN_0049b480(s_STRING_0053fdd0,&DAT_005a41e0,0x100,0);
    while (iVar2 != 0) {
      puVar5 = (undefined4 *)register0x00000010;
      for (iVar2 = 0x24; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
      }
      in_stack_00000090 = 1;
      pcVar3 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053fdcc);
      _strncpy(&stack0x00000004,pcVar3,0x3f);
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053fdcc);
      _strncpy(&stack0x0000004c,pcVar3,0x3f);
      FUN_0043bd30(in_stack_00001724,&stack0x00000004);
      iVar2 = FUN_0049b480(s_STRING_0053fdd0,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(in_stack_00001724 + 0x28),*(undefined4 *)(in_stack_00001724 + 0x60),
               0x90,&LAB_004397a0);
  pcVar3 = *(char **)(in_stack_00001724 + 0x28);
  uVar9 = 0;
  if (*(int *)(in_stack_00001724 + 0x60) != 0) {
    do {
      if (*pcVar3 != '\0') {
        if (*(int *)(pcVar3 + 0x8c) == 1) {
          *(char **)(pcVar3 + 0x40) = pcVar3 + 0x48;
        }
        else if (*(int *)(pcVar3 + 0x8c) == 2) {
          uVar4 = FUN_004bd32f(pcVar3 + 0x48);
          puVar5 = (undefined4 *)Rtxt_GetRecord(*(undefined4 *)(in_stack_00001724 + 4),uVar4);
          *(undefined4 *)(pcVar3 + 0x40) = *puVar5;
        }
        pcVar6 = _strstr(*(char **)(pcVar3 + 0x40),s__hot__0053fdc4);
        if (pcVar6 != (char *)0x0) {
          *(int *)(pcVar3 + 0x88) = (int)pcVar6[5];
          uVar7 = 0xffffffff;
          pcVar8 = *(char **)(pcVar3 + 0x40);
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (~uVar7 - 1 < 0x100) {
            *pcVar6 = '\0';
            str_sprintf(&DAT_005a41e0,&DAT_0053fdbc,*(undefined4 *)(pcVar3 + 0x40),pcVar6 + 5);
            str_sprintf(*(undefined4 *)(pcVar3 + 0x40),&DAT_005a41e0);
          }
        }
        pcVar6 = _strstr(*(char **)(pcVar3 + 0x40),s__image__0053fdb4);
        if (pcVar6 != (char *)0x0) {
          *(uint *)(pcVar3 + 0x8c) = *(uint *)(pcVar3 + 0x8c) | 0x800;
          puVar5 = (undefined4 *)&stack0x00000094;
          for (iVar2 = 0x5a3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          _strncpy(&stack0x00000094,pcVar3,0x3f);
          _strncpy(&stack0x000000d4,pcVar6 + 7,0xf);
          FUN_00439ff0(in_stack_00001724,&stack0x00000094);
        }
      }
      uVar9 = uVar9 + 1;
      pcVar3 = pcVar3 + 0x90;
    } while (uVar9 < *(uint *)(in_stack_00001724 + 0x60));
  }
  return;
}

