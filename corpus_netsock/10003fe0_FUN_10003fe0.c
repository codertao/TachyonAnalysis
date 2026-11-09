
int * __cdecl FUN_10003fe0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_10019af8;
  if (DAT_100198b8 != 0) {
    do {
      if (((*piVar1 != 0) && (piVar1[1] == param_1)) && (piVar1[5] == param_2)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 6;
    } while (uVar2 < DAT_100198b8);
  }
  return (int *)0x0;
}

