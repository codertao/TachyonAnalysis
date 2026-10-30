
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c7e2f) */
/* WARNING: Removing unreachable block (ram,0x004c7e46) */

undefined4 FUN_004c7e1d(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

