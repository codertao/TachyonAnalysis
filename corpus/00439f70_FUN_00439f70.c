
void FUN_00439f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0043a7a0(param_1,param_2);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x60);
    iVar2 = 0x80;
    do {
      if (*piVar3 != 0) {
        FUN_004acf80(piVar3);
        FUN_0049c530(*piVar3);
        if (*(int *)(iVar1 + 0x1650) != 0) {
          FUN_004ad7d0(*(int *)(iVar1 + 0x1650));
          *(undefined4 *)(iVar1 + 0x1650) = 0;
        }
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(iVar1 + 0x1664) = 0;
    *(undefined4 *)(iVar1 + 0x1668) = 0;
    *(undefined4 *)(iVar1 + 0x1674) = 0;
  }
  return;
}

