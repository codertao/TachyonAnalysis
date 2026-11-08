
void FUN_0044ccc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  DAT_00592800 = 1;
  DAT_005928cc = FUN_00437b30(0);
  DAT_005928c8 = FUN_00437b10(0);
  DAT_005928d0 = FUN_00437b40(0);
  DAT_005928d4 = FUN_00437b50(0);
  DAT_00592804 = param_3;
  str_sprintf(&DAT_00592808,param_1);
  str_sprintf(&DAT_00592848,param_2);
  str_sprintf(&DAT_00592888,param_6);
  FUN_00440170(DAT_00592804,&DAT_00592888,param_4,param_5,FUN_0044cc10,s_shadow12w_0054119c);
  FUN_004401f0(DAT_00592804,&DAT_00592888);
  FUN_0043a990(DAT_00592804,&DAT_00592848);
  Ui_ShowWindow(DAT_00592804,&DAT_00592808,0);
  FUN_0043a8d0(DAT_00592804,&DAT_00592808);
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  DAT_005928d8 = FUN_0043a860(DAT_00592804,&DAT_00592808,&LAB_0044cb80);
  return;
}

