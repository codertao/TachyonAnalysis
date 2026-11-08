
void FUN_00452360(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((GLBL_some_str != 0) && (0 < param_2)) && (param_2 <= DAT_0060444c)) {
    puVar2 = (undefined4 *)(DAT_00604490 * param_1 + GLBL_some_str);
    iVar1 = DAT_00604490 * param_2 >> 2;
    if (iVar1 != 0) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return;
}

