
/* sweep */

void MpRules_ClearLoadout(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x16c);
  iVar2 = 8;
  do {
    *puVar1 = puVar1[-1];
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

