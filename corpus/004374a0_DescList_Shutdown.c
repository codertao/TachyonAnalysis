
/* sweep */

void DescList_Shutdown(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0x20);
      do {
        if (*piVar2 != 0) {
          DescReg_Shutdown(*piVar2 + 4);
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 9;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
  }
  return;
}

