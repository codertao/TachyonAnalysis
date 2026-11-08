
void FUN_0049f7e0(int param_1,char *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  uint local_40;
  _SYSTEMTIME local_3c;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052ede0;
  puStack_10 = &LAB_004bde30;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffb0;
  if (param_2 == (char *)0x0) {
    param_2 = s_SYSDUMP_TXT_0055e04c;
  }
  iVar3 = c_fopen(param_2,&DAT_0055e048);
  local_28 = iVar3;
  if (iVar3 != 0) {
    GetSystemTime(&local_3c);
    c_fprintf(iVar3,s_Context_dump_of__s___s__on__u__u_0055dfdc,DAT_00603940,DAT_00603944,
              local_3c.wMonth,local_3c._6_4_ & 0xffff,local_3c.wYear);
    if (DAT_006039d4 != (code *)0x0) {
      (*DAT_006039d4)(iVar3);
    }
    c_fprintf(iVar3,s_EAX__0_08lxh_EBX_0_08lxh_0055dfc0,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0),
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xa4));
    c_fprintf(iVar3,s_ECX__0_08lxh_EDX_0_08lxh_0055dfa4,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xac),
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xa8));
    c_fprintf(iVar3,s_ESI__0_08lxh_EDI_0_08lxh_0055df88,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xa0),
              *(undefined4 *)(*(int *)(param_1 + 4) + 0x9c));
    c_fprintf(iVar3,s_EBP__0_08lxh_ESP_0_08lxh_0055df6c,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4),
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xc4));
    c_fprintf(iVar3,s_EIP__0_08lxh_EFlags_0_08lxh_0055df4c,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8),
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xc0));
    c_fprintf(iVar3,s_SegCS__0_08lxh_SegSs__0_08lxh_0055df2c,
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xbc),
              *(undefined4 *)(*(int *)(param_1 + 4) + 200));
    puVar4 = (undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0xb8) + -0x10);
    local_20 = puVar4;
    c_fprintf(iVar3,s_Code_bytes_before_EIP__0055df14);
    local_2c = 0;
    for (local_40 = 0; (local_2c == 0 && (local_40 < 0x10)); local_40 = local_40 + 1) {
      local_8 = 0;
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      local_20 = puVar4;
      c_fprintf(iVar3,&DAT_0055df0c,uVar1);
      local_8 = 0xffffffff;
    }
    c_fprintf(iVar3,&DAT_0055defc);
    local_20 = *(undefined1 **)(*(int *)(param_1 + 4) + 0xb8);
    c_fprintf(iVar3,s_Code_bytes_at_EIP__0055dee4);
    for (local_40 = 0; local_40 < 0x10; local_40 = local_40 + 1) {
      local_8 = 1;
      uVar1 = *local_20;
      local_20 = local_20 + 1;
      c_fprintf(iVar3,&DAT_0055df0c,uVar1);
      local_8 = 0xffffffff;
    }
    c_fprintf(iVar3,&DAT_0055dee0);
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 4) + 0xc4);
    c_fprintf(iVar3,s_Stack__0055ded8);
    uVar5 = 0;
    for (local_40 = 0; local_40 < DAT_006039ac; local_40 = local_40 + 1) {
      if ((uVar5 & 7) == 0) {
        c_fprintf(iVar3,&DAT_0055defc);
      }
      local_8 = 2;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      local_24 = puVar6;
      c_fprintf(iVar3,s__08lx_0055ded0,uVar2);
      local_8 = 0xffffffff;
      uVar5 = uVar5 + 1;
    }
    c_fclose(iVar3);
    *unaff_FS_OFFSET = local_14;
    return;
  }
  MessageBoxA(GLBL_WindowHandle_,s_System_Dump_file_could_not_be_op_0055e004,
              s_SysMgr_sys_DumpException_0055e02c,0);
  *unaff_FS_OFFSET = local_14;
  return;
}

