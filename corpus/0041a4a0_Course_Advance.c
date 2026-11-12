
/* sweep: CURRENT_COURSE */

void Course_Advance(void)

{
  undefined4 uVar1;
  
  GLBL_iter_cnt = GLBL_iter_cnt + 1;
  if (DAT_005b2984 < GLBL_iter_cnt) {
    GLBL_iter_cnt = DAT_005b2984;
    DAT_005b2998 = 1;
    return;
  }
  GLBL_spacesav[0x14] = GLBL_spacesav[0x14] + 1;
  DAT_005b2998 = 0;
  uVar1 = Var_KeyIndex(s_PLAYER_MAIN_VARS_00534198,s_CURRENT_COURSE_00534ad0,GLBL_iter_cnt);
  uVar1 = Var_SectionIndex(s_PLAYER_MAIN_VARS_00534198,uVar1);
  Var_SetAndNotify(uVar1);
  GLBL_flag_should_tick_something = 1;
  return;
}

