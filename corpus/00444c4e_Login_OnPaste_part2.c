
/* sweep: mis-split tail */

void __fastcall Login_OnPaste_part2(undefined4 param_1,int param_2)

{
  int in_EAX;
  byte in_CF;
  int in_stack_00000010;
  
  Mem_AllocZeroTagged(param_2 + *(int *)(in_EAX * 2 + 0x6a) + (uint)in_CF);
  if (in_stack_00000010 != 0) {
    File_ReadAll();
    File_WriteAll(&stack0x00000118,in_stack_00000010);
    OurFreeMem(in_stack_00000010);
  }
  WndLogin_RefreshSlotPanels();
  set_button_state(&g_UiManager);
  Ui_ClearButtonFlags(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
  set_button_state(&g_UiManager,s_BtnLoginPaste_005411e4,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
  DAT_00541184 = 0xffffffff;
  Profile_CreateNew();
  return;
}

