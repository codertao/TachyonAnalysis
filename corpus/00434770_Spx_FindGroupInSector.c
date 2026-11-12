
/* sweep */

void Spx_FindGroupInSector(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Spx_FindGroupByName(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4),param_2);
  if (iVar1 == 0) {
    Spx_FindGroupByName(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 8),param_2);
  }
  return;
}

