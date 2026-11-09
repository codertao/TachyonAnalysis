
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004a80(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (DAT_100198b8 != 0) {
    piVar1 = (int *)(DAT_10019afc + 0xb8);
    piVar3 = DAT_10019af8;
    do {
      if ((((*piVar3 != 0) && (piVar3[1] != -1)) && (piVar1[-7] != 0)) && (piVar1[-8] != 0)) {
        *piVar1 = *piVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 6;
      piVar1 = piVar1 + 0x2f;
    } while (uVar2 < DAT_100198b8);
    _DAT_1001986c = _DAT_1001986c + 1;
    return;
  }
  _DAT_1001986c = _DAT_1001986c + 1;
  return;
}

