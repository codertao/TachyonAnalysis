
/* Init 3 memory pools, instance+window init, cmdline dispatch, run state machine */

void WinMain(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052ee08;
  puStack_10 = &LAB_004bde30;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  iVar1 = App_InstanceInit(param_1);
  if (iVar1 == 0) {
    *unaff_FS_OFFSET = local_14;
    return;
  }
  puVar3 = &DAT_00603940;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  call_Cpu_Detect((int *)&DAT_00603984,(int *)&DAT_00603988,&DAT_0060398c);
  DAT_00603950 = 0xf00000;
  DAT_00603954 = 0x100000;
  DAT_00603958 = 0x100000;
  DAT_0060394c = 1;
  FUN_004333a0();
  iVar1 = App_WindowDisplayInit(param_1,param_4);
  if (iVar1 == 0) {
    *unaff_FS_OFFSET = local_14;
    return;
  }
  FUN_0049f710();
  if (DAT_0060394c != 0) {
    FUN_0049f5c0(GLBL_WindowHandle_);
  }
  local_8 = 1;
  pCVar2 = GetCommandLineA();
  CmdLine_Dispatch(pCVar2);
  local_8 = 0;
  Timer_Teardown();
  FUN_0049fd58();
  return;
}

