
void DescReg_ShutdownAll(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &g_DescRegistry;
  iVar2 = 0x100;
  do {
    if (*piVar1 != 0) {
      DescReg_Shutdown(*piVar1 + 4);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

