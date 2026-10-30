
void FUN_0046fba0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_004699f0(s_TEXT_ID_00535628);
  g_TitleHoverState = g_TitleHoverState + 1;
  if (g_TitleHoverState < 0) {
    g_TitleHoverState = 0;
    pcVar3 = s_Cursor1_0053ff4c;
  }
  else if (g_TitleHoverState == 0) {
    pcVar3 = s_Cursor1_0053ff4c;
  }
  else {
    pcVar3 = s_Cursor2_005444a0;
  }
  FUN_0043e8f0(&DAT_00583420,pcVar3);
  switch(param_1) {
  case 1:
    FUN_0043f810(&DAT_00583420,s_IAMonitor1_0054e618,1);
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IAMonitor1_0054e618,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IAMonitor1_0054e618,uVar1);
    pcVar3 = s_MISC_STATS_0054e738;
    break;
  case 2:
    FUN_0043f810(&DAT_00583420,s_IAMonitor2_0054e60c,1);
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IAMonitor2_0054e60c,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IAMonitor2_0054e60c,uVar1);
    pcVar3 = s_MISC_OPTIONS_0054e728;
    break;
  case 3:
    FUN_0043f810(&DAT_00583420,s_IAMonitor3_0054e600,1);
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IAMonitor3_0054e600,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IAMonitor3_0054e600,uVar1);
    pcVar3 = s_MISC_NEWS_0054e71c;
    break;
  case 4:
    FUN_0043f810(&DAT_00583420,s_IAMonitor4_0054e5f4,1);
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IAMonitor4_0054e5f4,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IAMonitor4_0054e5f4,uVar1);
    pcVar3 = s_MISC_MAP_0054e710;
    break;
  case 5:
    FUN_0043f810(&DAT_00583420,s_IAMonitor5_0054e5e8,1);
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IAMonitor5_0054e5e8,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IAMonitor5_0054e5e8,uVar1);
    pcVar3 = s_MISC_JOBS_0054e704;
    break;
  case 6:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IADoor1_0054e62c,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IADoor1_0054e62c,uVar1);
    FUN_0043f810(&DAT_00583420,s_IADoor1_0054e62c,1);
    iVar2 = FUN_0043bf10(&DAT_00583420,s_MISC_SHIPBAY_0054e6dc);
    pcVar3 = s_SNDEVNT_BIGDOORROLL_UP_0054e6c4;
    goto LAB_0046ff08;
  case 7:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IADoor2_0054e624,&LAB_0046ffb0,0);
    FUN_0043f7d0(&DAT_00583420,s_IADoor2_0054e624,uVar1);
    FUN_0043f810(&DAT_00583420,s_IADoor2_0054e624,1);
    iVar2 = FUN_0043bf10(&DAT_00583420,s_MISC_EXIT_0054e6b8);
    pcVar3 = s_SNDEVNT_EXITDOORROLL_UP_0054e6a0;
    goto LAB_0046ff08;
  case 8:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IASlotMachine1_0054e5d8,0,0);
    FUN_0043f7d0(&DAT_00583420,s_IASlotMachine1_0054e5d8,uVar1);
    pcVar3 = s_IASlotMachine1_0054e5d8;
    goto LAB_0046fee8;
  case 9:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IASlotMachine2_0054e5c8,0,0);
    FUN_0043f7d0(&DAT_00583420,s_IASlotMachine2_0054e5c8,uVar1);
    pcVar3 = s_IASlotMachine2_0054e5c8;
    goto LAB_0046fee8;
  case 10:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IASlotMachine3_0054e5b8,0,0);
    FUN_0043f7d0(&DAT_00583420,s_IASlotMachine3_0054e5b8,uVar1);
    pcVar3 = s_IASlotMachine3_0054e5b8;
    goto LAB_0046fee8;
  case 0xb:
    uVar1 = FUN_0043f7a0(&DAT_00583420,s_IASlotMachine4_0054e5a8,0,0);
    FUN_0043f7d0(&DAT_00583420,s_IASlotMachine4_0054e5a8,uVar1);
    pcVar3 = s_IASlotMachine4_0054e5a8;
LAB_0046fee8:
    FUN_0043f810(&DAT_00583420,pcVar3,1);
    iVar2 = FUN_0043bf10(&DAT_00583420,s_MISC_SLOT_0054e694);
    pcVar3 = s_SNDEVNT_SCREENROLL_UP_0054e6ec;
LAB_0046ff08:
    FUN_00440460(&DAT_00583420,pcVar3);
    goto LAB_0046ff15;
  default:
    goto switchD_0046fbfc_default;
  }
  iVar2 = FUN_0043bf10(&DAT_00583420,pcVar3);
  FUN_00440460(&DAT_00583420,s_SNDEVNT_SCREENROLL_UP_0054e6ec);
LAB_0046ff15:
  if ((iVar2 != 0) && (DAT_005635e0 == 0)) {
    FUN_0043e640(&DAT_00583420,s_TxtMainItemSel_0054e684,*(undefined1 *)(iVar2 + 0x88));
    FUN_0043e6a0(&DAT_00583420,s_TxtMainItemSel_0054e684,*(undefined4 *)(iVar2 + 0x40));
    return;
  }
switchD_0046fbfc_default:
  FUN_0043e640(&DAT_00583420,s_TxtMainItemSel_0054e684,0);
  FUN_0043e6a0(&DAT_00583420,s_TxtMainItemSel_0054e684,&DAT_00562b14);
  return;
}

