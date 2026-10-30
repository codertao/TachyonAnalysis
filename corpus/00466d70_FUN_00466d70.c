
void FUN_00466d70(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_0058979c;
  if (DAT_00589798 != 0) {
    do {
      if (*piVar1 != 0) {
        *(undefined4 *)(*piVar1 + 0x54) = 0;
        *piVar1 = 0;
        FUN_004a82f0(piVar1[2],&DAT_00589788);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar2 < DAT_00589798);
  }
  return;
}

