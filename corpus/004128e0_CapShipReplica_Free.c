
/* sweep */

void CapShipReplica_Free(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  List_RemoveW(param_1,&DAT_005b3280);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xd8)) {
    *(undefined4 *)(iVar1 + 0xec) = 0;
  }
  return;
}

