
void FUN_0048a0c0(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  char local_e0 [224];
  
  FUN_0048a060();
  pcVar9 = local_e0;
  for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  if (DAT_0056c488 != (undefined4 *)0x0) {
    puVar8 = DAT_0056c488;
    pcVar9 = local_e0;
    for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pcVar9 = pcVar9 + 4;
    }
  }
  FUN_004691e0();
  if (local_e0[0] != '\0') {
    DAT_0056c488 = (undefined4 *)FUN_00469190(local_e0);
  }
  pcVar9 = s_BtnWing0_00558948;
  uVar7 = DAT_00563e28;
  cVar3 = s_BtnWing0_00558948[0];
  while (DAT_00563e28 = uVar7, cVar3 != '\0') {
    iVar6 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar9);
    if (iVar6 != 0) {
      FUN_0043f650(&GLBL_UI_ELEM_LIST,pcVar9 + 0x40,*(int *)(iVar6 + 0xd4) + 2,
                   *(int *)(iVar6 + 0xd8) + 2);
    }
    pcVar2 = pcVar9 + 0x84;
    pcVar9 = pcVar9 + 0x84;
    uVar7 = DAT_00563e28;
    cVar3 = *pcVar2;
  }
  iVar6 = uVar7 * 0xe0 + DAT_00589724;
  if (s_BtnWing0_00558948[0] != '\0') {
    piVar10 = &DAT_005589c8;
    do {
      if (DAT_00589720 <= uVar7) {
        return;
      }
      if (*(int *)(iVar6 + 0x10) != 0) {
        piVar1 = piVar10 + -0x20;
        *piVar10 = iVar6;
        set_button_state(&GLBL_UI_ELEM_LIST,piVar1,1);
        Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,piVar1,4);
        if ((DAT_0056c488 != (undefined4 *)0x0) &&
           (iVar5 = str_cmp(*piVar10,DAT_0056c488), iVar5 == 0)) {
          set_button_state(&GLBL_UI_ELEM_LIST,piVar1,0x10);
        }
        piVar1 = piVar10 + -0x10;
        iVar5 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,piVar1);
        if (iVar5 != 0) {
          iVar4 = *piVar10;
          FUN_0046d770(&GLBL_UI_ELEM_LIST,piVar1,iVar4 + 0xa8,1,*(undefined4 *)(iVar4 + 200),
                       *(undefined4 *)(iVar4 + 0xcc),*(undefined4 *)(iVar5 + 0xc4),
                       *(undefined4 *)(iVar5 + 200),0);
        }
        set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,piVar1,0x80000);
        piVar10 = piVar10 + 0x21;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0xe0;
    } while ((char)piVar10[-0x20] != '\0');
  }
  return;
}

