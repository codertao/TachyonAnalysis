
void FUN_00486380(void)

{
  undefined4 uVar1;
  
  str_sprintf(&DAT_0056c530,&DAT_00535eb8,DAT_0056e2cc);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotCreditsLine1_00557ef0,&DAT_0056c530);
  str_sprintf(&DAT_0056c540,&DAT_00535eb8,DAT_0056e2ec);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotCreditsLine2_00557edc,&DAT_0056c540);
  str_sprintf(&DAT_0056c550,&DAT_00535eb8,DAT_0056e30c);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotCreditsLine3_00557ec8,&DAT_0056c550);
  uVar1 = Player_GetCredits();
  str_sprintf(&DAT_00577f20,&DAT_00535eb8,uVar1);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotCredits_00557eb8,&DAT_00577f20);
  str_sprintf(&DAT_0056e330,&DAT_00535eb8,DAT_0056e000);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotCreditsBet_00557ea4,&DAT_0056e330);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtSlotDebug_00557e94,&DAT_00562b14);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSlotDebug_00557e94,0x10000);
  return;
}

