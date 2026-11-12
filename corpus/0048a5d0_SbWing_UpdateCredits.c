
/* sweep */

void SbWing_UpdateCredits(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_WING_CREDITS_AVAIL_00559758);
  if (iVar1 == 0) {
    pcVar3 = s__Credits_Available___d_00559740;
  }
  else {
    pcVar3 = *(char **)(iVar1 + 0x40);
  }
  uVar2 = Player_GetCredits();
  str_sprintf(&DAT_0056c400,pcVar3,uVar2);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtWingCredits_00559730,&DAT_0056c400);
  return;
}

