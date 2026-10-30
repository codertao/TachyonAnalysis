
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c77f2) */
/* WARNING: Removing unreachable block (ram,0x004c7806) */
/* WARNING: Removing unreachable block (ram,0x004c780f) */
/* WARNING: Removing unreachable block (ram,0x004c780b) */
/* WARNING: Removing unreachable block (ram,0x004c7815) */

undefined4 FUN_004c77e3(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

