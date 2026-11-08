
void FUN_00442090(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar5 = 0;
  if (PTR_GLBL_spacesav_89__005400c0 != (undefined *)0x0) {
    pcVar6 = s_HOPT_NUM_ROUNDS_005400cc;
    puVar4 = &DAT_005a40e0;
    do {
      if (*(int *)(pcVar6 + -8) == GLBL_spacesav[0x13]) {
        if (pcVar6 != (char *)0x0) {
          str_sprintf(&DAT_005a41e0,s_TxtOptBanner_d_00540a30,uVar5);
          FUN_0043e770(&g_UiManager,&DAT_005a41e0,pcVar6);
        }
        if (pcVar6[0x20] == '\0') {
          if (*(undefined4 **)(pcVar6 + -0xc) == &DAT_00562bfc) {
            uVar3 = (&DAT_005400b0)[DAT_00562bfc];
            goto LAB_00442151;
          }
          str_sprintf(puVar4,&DAT_00535eb8,**(undefined4 **)(pcVar6 + -0xc));
LAB_00442177:
          FUN_0043e6a0(&g_UiManager,pcVar6 + 0x40,puVar4);
        }
        else {
          str_sprintf(&DAT_005a41e0,&DAT_00540a28,pcVar6 + 0x20,**(undefined4 **)(pcVar6 + -0xc));
          iVar2 = FUN_0043bf10(&g_UiManager,&DAT_005a41e0);
          if ((iVar2 == 0) || (*(int *)(iVar2 + 0x40) == 0)) {
            uVar3 = **(undefined4 **)(pcVar6 + -0xc);
LAB_00442151:
            str_sprintf(puVar4,&DAT_00535eb8,uVar3);
            goto LAB_00442177;
          }
          FUN_0043e6a0(&g_UiManager,pcVar6 + 0x40,*(int *)(iVar2 + 0x40));
        }
        str_sprintf(&DAT_005a41e0,s_BtnHostOpt_d_00540a18,uVar5);
        set_button_state(&g_UiManager,&DAT_005a41e0,1);
        FUN_0043c150(&g_UiManager,&DAT_005a41e0,0x80000);
        str_sprintf(&DAT_005a41e0,s_BtnHostOpt_dL_00540a08,uVar5);
        set_button_state(&g_UiManager,&DAT_005a41e0,1);
        FUN_0043c150(&g_UiManager,&DAT_005a41e0,0x80000);
        str_sprintf(&DAT_005a41e0,s_BtnHostOpt_dR_005409f8,uVar5);
        set_button_state(&g_UiManager,&DAT_005a41e0,1);
        FUN_0043c150(&g_UiManager,&DAT_005a41e0,0x80000);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
      }
      piVar1 = (int *)(pcVar6 + 0x88);
      pcVar6 = pcVar6 + 0x94;
    } while (*piVar1 != 0);
    if (7 < uVar5) {
      return;
    }
  }
  do {
    str_sprintf(&DAT_005a41e0,s_BtnHostOpt_d_00540a18,uVar5);
    set_button_state(&g_UiManager,&DAT_005a41e0,8);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,0x80000);
    str_sprintf(&DAT_005a41e0,s_BtnHostOpt_dL_00540a08,uVar5);
    set_button_state(&g_UiManager,&DAT_005a41e0,8);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,0x80000);
    str_sprintf(&DAT_005a41e0,s_BtnHostOpt_dR_005409f8,uVar5);
    set_button_state(&g_UiManager,&DAT_005a41e0,8);
    Ui_SetButtonFlag(&g_UiManager,&DAT_005a41e0,0x80000);
    str_sprintf(&DAT_005a41e0,s_TxtOptBanner_d_00540a30,uVar5);
    FUN_0043e6a0(&g_UiManager,&DAT_005a41e0,&DAT_00562b14);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  return;
}

