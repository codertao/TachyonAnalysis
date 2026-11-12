
/* sweep */

undefined4 SectorMap_UnlinkLarge(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)SectorMap_LargeCellPtr(param_1 + 0x34,param_2);
  iVar2 = *piVar3;
  if (*piVar3 == param_1) {
    *piVar3 = *(int *)(param_1 + 0x9c);
    return 1;
  }
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x9c);
  } while (*(int *)(iVar1 + 0x9c) != param_1);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  return 1;
}

