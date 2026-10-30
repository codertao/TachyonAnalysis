
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c2436) */
/* WARNING: Removing unreachable block (ram,0x004c244e) */
/* WARNING: Removing unreachable block (ram,0x004c2459) */
/* WARNING: Removing unreachable block (ram,0x004c2455) */
/* WARNING: Removing unreachable block (ram,0x004c245f) */
/* WARNING: Removing unreachable block (ram,0x004c2479) */

undefined4 FUN_004c2424(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

