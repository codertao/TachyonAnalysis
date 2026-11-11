
/* if enabled: zero width*height dwords */

void __cdecl Sw_ClearZBuffer(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004e4b0c != 0) {
    puVar2 = DAT_004e4b08;
    for (iVar1 = DAT_00604448 * DAT_0060444c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

