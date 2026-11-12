
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* sweep: SEH fragment */

void Sys_DumpException_end(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(iVar1 + -8) = 0x49fb06;
  c_fclose();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return;
}

