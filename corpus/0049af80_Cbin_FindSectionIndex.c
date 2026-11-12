
/* sweep */

undefined4 *
Cbin_FindSectionIndex(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    if (param_2 == param_3) {
      if (param_4 != 0) {
        do {
          iVar1 = __stricmp(param_1,*param_3);
          if (iVar1 == 0) {
            return param_3;
          }
          uVar2 = uVar2 + 1;
          param_3 = param_3 + 7;
        } while (uVar2 < param_4);
        return (undefined4 *)0x0;
      }
    }
    else {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
  }
  return (undefined4 *)0x0;
}

