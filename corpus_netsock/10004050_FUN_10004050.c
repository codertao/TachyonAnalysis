
int * __cdecl FUN_10004050(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = DAT_10019af8;
  if (DAT_100198b8 != 0) {
    do {
      if (*piVar2 == 0) {
        FUN_10004020(piVar2,param_1,param_2);
        return piVar2;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (uVar1 < DAT_100198b8);
  }
  return (int *)0x0;
}

