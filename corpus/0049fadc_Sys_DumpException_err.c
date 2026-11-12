
/* sweep: SEH fragment */

undefined4 Sys_DumpException_err(void)

{
  int unaff_EBP;
  
  c_fprintf(*(undefined4 *)(unaff_EBP + -0x24),s_STACK_ERROR_0055dec0);
  return 1;
}

