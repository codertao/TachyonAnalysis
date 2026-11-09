
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005970(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_10019864) {
      DAT_10019864 = DAT_10019864 + -1;
      goto LAB_10005986;
    }
LAB_100059ae:
    uVar1 = 0;
  }
  else {
LAB_10005986:
    _DAT_10019ca8 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10019cb0 = malloc(0x80);
      if (DAT_10019cb0 == (undefined4 *)0x0) goto LAB_100059ae;
      *DAT_10019cb0 = 0;
      DAT_10019cac = DAT_10019cb0;
      initterm(&DAT_10007000,&DAT_10007004);
      DAT_10019864 = DAT_10019864 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10019cb0, puVar2 = DAT_10019cac, DAT_10019cb0 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10019cb0;
        }
      }
      free(_Memory);
      DAT_10019cb0 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

