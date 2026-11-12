
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* sweep: SEH fragment */

void Sys_DumpException_code(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  int unaff_EBP;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(char **)(iVar2 + -4) = s_<IP_ERROR>_0055df00;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(iVar2 + -8) = uVar3;
  *(undefined4 *)(iVar2 + -0xc) = 0x49f9bf;
  c_fprintf();
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = *(int *)(unaff_EBP + 8);
  pbVar6 = *(byte **)(unaff_EBP + -0x1c);
  *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
  while ((*(int *)(unaff_EBP + -0x28) == 0 && (*(uint *)(unaff_EBP + -0x3c) < 0x10))) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *(byte **)(unaff_EBP + -0x1c) = pbVar6;
    *(uint *)(iVar2 + -4) = (uint)bVar1;
    *(undefined **)(iVar2 + -8) = &DAT_0055df0c;
    *(undefined4 *)(iVar2 + -0xc) = uVar3;
    *(undefined4 *)(iVar2 + -0x10) = 0x49f997;
    c_fprintf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
  }
  *(undefined **)(iVar2 + -4) = &DAT_0055defc;
  *(undefined4 *)(iVar2 + -8) = uVar3;
  *(undefined4 *)(iVar2 + -0xc) = 0x49f9e8;
  c_fprintf();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0xb8);
  *(char **)(iVar2 + -0xc) = s_Code_bytes_at_EIP__0055dee4;
  *(undefined4 *)(iVar2 + -0x10) = uVar3;
  *(undefined4 *)(iVar2 + -0x14) = 0x49f9ff;
  c_fprintf();
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  while (*(uint *)(unaff_EBP + -0x3c) < 0x10) {
    *(undefined4 *)(unaff_EBP + -4) = 1;
    bVar1 = **(byte **)(unaff_EBP + -0x1c);
    *(byte **)(unaff_EBP + -0x1c) = *(byte **)(unaff_EBP + -0x1c) + 1;
    *(uint *)(iVar2 + -4) = (uint)bVar1;
    *(undefined **)(iVar2 + -8) = &DAT_0055df0c;
    *(undefined4 *)(iVar2 + -0xc) = uVar3;
    *(undefined4 *)(iVar2 + -0x10) = 0x49fa2f;
    c_fprintf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
  }
  *(undefined **)(iVar2 + -4) = &DAT_0055dee0;
  *(undefined4 *)(iVar2 + -8) = uVar3;
  *(undefined4 *)(iVar2 + -0xc) = 0x49fa77;
  c_fprintf();
  puVar8 = *(undefined4 **)(*(int *)(iVar4 + 4) + 0xc4);
  *(char **)(iVar2 + -0xc) = s_Stack__0055ded8;
  *(undefined4 *)(iVar2 + -0x10) = uVar3;
  *(undefined4 *)(iVar2 + -0x14) = 0x49fa8b;
  c_fprintf();
  uVar7 = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  while (*(uint *)(unaff_EBP + -0x3c) < DAT_006039ac) {
    if ((uVar7 & 7) == 0) {
      *(undefined **)(iVar2 + -4) = &DAT_0055defc;
      *(undefined4 *)(iVar2 + -8) = uVar3;
      *(undefined4 *)(iVar2 + -0xc) = 0x49faae;
      c_fprintf();
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar5 = *puVar8;
    puVar8 = puVar8 + 1;
    *(undefined4 **)(unaff_EBP + -0x20) = puVar8;
    *(undefined4 *)(iVar2 + -4) = uVar5;
    *(char **)(iVar2 + -8) = s__08lx_0055ded0;
    *(undefined4 *)(iVar2 + -0xc) = uVar3;
    *(undefined4 *)(iVar2 + -0x10) = 0x49facc;
    c_fprintf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
    uVar7 = uVar7 + 1;
  }
  *(undefined4 *)(iVar2 + -4) = uVar3;
  *(undefined4 *)(iVar2 + -8) = 0x49fb06;
  c_fclose();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}

