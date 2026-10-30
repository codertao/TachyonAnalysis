
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004bcabc(char *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8c [136];
  
  if (param_1 == (char *)0x0) {
LAB_004bcb62:
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      param_2[1] = 0;
      *param_2 = 0x43;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_005614f8,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_00561474,param_1), iVar1 != 0)) {
      iVar1 = FUN_004bcbfc(local_8c,param_1);
      if ((iVar1 != 0) || (iVar1 = FUN_004c1880(local_8c,&DAT_00564f60,local_8c), iVar1 == 0))
      goto LAB_004bcb62;
      _DAT_00564f68 = (uint)DAT_00564f64;
      FUN_004bccc8(&DAT_005614f8,local_8c);
      if (*param_1 == '\0') {
        param_1 = &DAT_005614f8;
      }
      FUN_004c1790(&DAT_00561474,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_004be0e0(param_3,&DAT_00564f60,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_004be0e0(param_4,&DAT_00564f68,4);
    }
    FUN_004c1790(param_2,&DAT_005614f8);
    puVar2 = &DAT_005614f8;
  }
  return puVar2;
}

