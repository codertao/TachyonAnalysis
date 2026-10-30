
void FUN_004b2750(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      *(int *)(&DAT_00668fe0 + *piVar1 * 4) =
           (int)((ulonglong)((longlong)piVar1[1] * (longlong)DAT_00668fdc) >> 0x20);
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return;
}

