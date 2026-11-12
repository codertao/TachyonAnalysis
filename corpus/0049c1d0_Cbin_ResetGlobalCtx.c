
/* sweep */

void Cbin_ResetGlobalCtx(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_CbinCtx;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

