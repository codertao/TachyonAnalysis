
void FUN_004931d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  if (DAT_0055a560 != 0x1c) {
    piVar2 = &DAT_0055a5a0;
    do {
      if (*piVar2 < iVar3) {
        iVar3 = *piVar2;
      }
      piVar1 = piVar2 + 0x34;
      piVar2 = piVar2 + 0x44;
    } while (*piVar1 != 0x1c);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar3;
  }
  return;
}

