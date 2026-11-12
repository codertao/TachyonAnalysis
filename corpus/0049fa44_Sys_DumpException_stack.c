
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x0049fa0b) */
/* WARNING: Removing unreachable block (ram,0x0049fa11) */
/* sweep: SEH fragment */

void Sys_DumpException_stack(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(char **)(iVar1 + -4) = s_<IP_ERROR>_0055df00;
  uVar2 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(iVar1 + -8) = uVar2;
  *(undefined4 *)(iVar1 + -0xc) = 0x49fa55;
  c_fprintf();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
  *(undefined **)(iVar1 + -4) = &DAT_0055dee0;
  *(undefined4 *)(iVar1 + -8) = uVar2;
  *(undefined4 *)(iVar1 + -0xc) = 0x49fa77;
  c_fprintf();
  puVar6 = *(undefined4 **)(*(int *)(iVar3 + 4) + 0xc4);
  *(char **)(iVar1 + -0xc) = s_Stack__0055ded8;
  *(undefined4 *)(iVar1 + -0x10) = uVar2;
  *(undefined4 *)(iVar1 + -0x14) = 0x49fa8b;
  c_fprintf();
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  while (*(uint *)(unaff_EBP + -0x3c) < DAT_006039ac) {
    if ((uVar5 & 7) == 0) {
      *(undefined **)(iVar1 + -4) = &DAT_0055defc;
      *(undefined4 *)(iVar1 + -8) = uVar2;
      *(undefined4 *)(iVar1 + -0xc) = 0x49faae;
      c_fprintf();
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    *(undefined4 **)(unaff_EBP + -0x20) = puVar6;
    *(undefined4 *)(iVar1 + -4) = uVar4;
    *(char **)(iVar1 + -8) = s__08lx_0055ded0;
    *(undefined4 *)(iVar1 + -0xc) = uVar2;
    *(undefined4 *)(iVar1 + -0x10) = 0x49facc;
    c_fprintf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
    uVar5 = uVar5 + 1;
  }
  *(undefined4 *)(iVar1 + -4) = uVar2;
  *(undefined4 *)(iVar1 + -8) = 0x49fb06;
  c_fclose();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}

