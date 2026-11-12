
/* sweep */

void File_ResetState(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &GLBL_filehandle;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

