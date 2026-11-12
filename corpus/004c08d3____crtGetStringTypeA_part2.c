
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c08e2) */
/* WARNING: Removing unreachable block (ram,0x004c08fb) */
/* CRT: mis-split tail of ___crtGetStringTypeA */

undefined4 ___crtGetStringTypeA_part2(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

