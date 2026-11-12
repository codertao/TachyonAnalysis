
/* sweep: SEH fragment */

void WinMain_seh_handler(void)

{
  int unaff_EBP;
  
  Sys_Shutdown(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

