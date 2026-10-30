
void __fastcall FUN_00444c4e(undefined4 param_1,int param_2)

{
  int in_EAX;
  byte in_CF;
  int in_stack_00000010;
  
  FUN_0048e3d0(param_2 + *(int *)(in_EAX * 2 + 0x6a) + (uint)in_CF);
  if (in_stack_00000010 != 0) {
    File_ReadAll();
    File_WriteAll(&stack0x00000118,in_stack_00000010);
    FUN_0049c530(in_stack_00000010);
  }
  FUN_00444450();
  FUN_0043ce50(&g_UiManager);
  FUN_0043c150(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
  FUN_0043ce50(&g_UiManager,s_BtnLoginPaste_005411e4,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
  DAT_00541184 = 0xffffffff;
  Profile_CreateNew();
  return;
}

