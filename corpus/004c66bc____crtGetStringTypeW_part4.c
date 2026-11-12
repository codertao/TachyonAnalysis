
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c66cb) */
/* WARNING: Removing unreachable block (ram,0x004c66d2) */
/* WARNING: Removing unreachable block (ram,0x004c66d7) */
/* WARNING: Removing unreachable block (ram,0x004c6707) */
/* WARNING: Removing unreachable block (ram,0x004c670e) */
/* CRT: mis-split tail */

undefined4 ___crtGetStringTypeW_part4(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

