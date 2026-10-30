
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x004c790b) */
/* WARNING: Removing unreachable block (ram,0x004c791f) */
/* WARNING: Removing unreachable block (ram,0x004c792a) */
/* WARNING: Removing unreachable block (ram,0x004c7926) */
/* WARNING: Removing unreachable block (ram,0x004c7930) */

undefined4 FUN_004c78fc(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return 0;
}

