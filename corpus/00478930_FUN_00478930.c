
void FUN_00478930(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_1c8;
  char *local_1c4;
  char local_1b8 [440];
  
  iVar2 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_JOB_EMPLOYER_005521d4);
  iVar3 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_JOB_PAYMENT_005521c8);
  FUN_004788b0();
  pcVar7 = local_1b8;
  for (iVar6 = 0x6e; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  if ((DAT_00563644 != (undefined4 *)0x0) && (DAT_00563644[4] != 0)) {
    puVar9 = DAT_00563644;
    pcVar7 = local_1b8;
    for (iVar6 = 0x6e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      pcVar7 = pcVar7 + 4;
    }
  }
  FUN_0046ad00();
  if (local_1b8[0] != '\0') {
    DAT_00563644 = (undefined4 *)FUN_00469140(local_1b8);
  }
  iVar6 = DAT_00589730 + DAT_00563648 * 0x1b8;
  local_1c8 = DAT_00563648;
  if (s_BtnJob0_00550b08[0] != '\0') {
    piVar8 = &DAT_00551048;
    do {
      if (DAT_00589728 <= local_1c8) {
        return;
      }
      if (*(int *)(iVar6 + 0x10) != 0) {
        piVar1 = piVar8 + -0x150;
        *piVar8 = iVar6;
        set_button_state(&GLBL_UI_ELEM_LIST,piVar1,1);
        Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,piVar1,4);
        if ((DAT_00563644 != (undefined4 *)0x0) &&
           (iVar4 = str_cmp(*piVar8,DAT_00563644), iVar4 == 0)) {
          set_button_state(&GLBL_UI_ELEM_LIST,piVar1,0x10);
        }
        if (iVar3 == 0) {
          local_1c4 = s__Payment_005521bc;
        }
        else {
          local_1c4 = *(char **)(iVar3 + 0x40);
        }
        if (*(int **)(iVar6 + 0x118) == (int *)0x0) {
          iVar4 = iVar6 + 0xb4;
        }
        else {
          iVar4 = **(int **)(iVar6 + 0x118);
        }
        if (iVar2 == 0) {
          pcVar7 = s__Employer_005521b0;
        }
        else {
          pcVar7 = *(char **)(iVar2 + 0x40);
        }
        if (*(int **)(iVar6 + 0x114) == (int *)0x0) {
          iVar5 = iVar6 + 0x94;
        }
        else {
          iVar5 = **(int **)(iVar6 + 0x114);
        }
        str_sprintf(piVar8 + -0x100,s__s__s___s__s___d_00552198,iVar5,pcVar7,iVar4,local_1c4,
                    *(undefined4 *)(iVar6 + 0x148));
        FUN_0043e6a0(&GLBL_UI_ELEM_LIST,piVar8 + -0x130,piVar8 + -0x100);
        if (*(int *)(iVar6 + 0x144) != 0) {
          FUN_0043e770(&GLBL_UI_ELEM_LIST,piVar8 + -0x110,s_JOB_NOWING_0055218c);
        }
        piVar1 = piVar8 + -0x140;
        iVar4 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,piVar1);
        if (iVar4 != 0) {
          iVar5 = *piVar8;
          FUN_0046d770(&GLBL_UI_ELEM_LIST,piVar1,iVar5 + 0x150,1,*(undefined4 *)(iVar5 + 0x170),
                       *(undefined4 *)(iVar5 + 0x174),*(undefined4 *)(iVar4 + 0xc4),
                       *(undefined4 *)(iVar4 + 200),0);
        }
        set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,piVar1,0x80000);
        piVar8 = piVar8 + 0x151;
      }
      local_1c8 = local_1c8 + 1;
      iVar6 = iVar6 + 0x1b8;
    } while ((char)piVar8[-0x150] != '\0');
  }
  return;
}

