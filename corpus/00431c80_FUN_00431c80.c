
void FUN_00431c80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0044eaa0();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 0x100;
  do {
    if ((*piVar1 != 0) && (piVar1[9] == 1)) {
      FUN_004ad900(*(undefined4 *)(*piVar1 + 100),DAT_005aed50,DAT_005aed54,0x80,0x80,0x80);
    }
    piVar1 = piVar1 + 10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0044eab0();
  return;
}

