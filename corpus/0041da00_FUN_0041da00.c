
void FUN_0041da00(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if ((DAT_005b2704 != (int *)0x0) && (uVar3 = 0, piVar2 = DAT_005b2704, DAT_005b2700 != 0)) {
    do {
      if ((*piVar2 != 0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 < 1)) {
        if (piVar2[0xe] == 0) {
          FUN_0049d4a0(piVar2 + 2,DAT_005b2708);
        }
        else {
          FUN_00466860(piVar2[0xe],DAT_005b2d10);
        }
        *piVar2 = 0;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0xf;
    } while (uVar3 < DAT_005b2700);
  }
  return;
}

