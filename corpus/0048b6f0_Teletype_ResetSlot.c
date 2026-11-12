
/* sweep */

void Teletype_ResetSlot(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  Teletype_FreeSlot(param_1);
  puVar2 = (undefined4 *)(&DAT_0056aba0 + param_1 * 0x170);
  for (iVar1 = 0x5c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

