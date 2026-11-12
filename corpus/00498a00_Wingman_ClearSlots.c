
/* sweep */

void Wingman_ClearSlots(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_Wingman;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

