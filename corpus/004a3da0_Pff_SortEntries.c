
/* sweep */

void Pff_SortEntries(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      iVar1 = *(int *)(param_1 + 0x98) + 0x10;
      do {
        __strupr(iVar1);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x24;
      } while (uVar2 < *(uint *)(param_1 + 0x8c));
    }
    _qsort(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x8c),
           *(undefined4 *)(param_1 + 0x90),&LAB_004a3d10);
  }
  return;
}

