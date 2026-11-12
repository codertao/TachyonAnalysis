
/* CRT */

undefined4 ___init_monetary(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_0056513c == 0) {
    PTR_DAT_005627b8 = *(undefined **)PTR_PTR_005627e8;
    PTR_DAT_005627bc = *(undefined **)(PTR_PTR_005627e8 + 4);
    PTR_DAT_005627c0 = *(undefined **)(PTR_PTR_005627e8 + 8);
    PTR_PTR_005627e8 = (undefined *)&PTR_DAT_005627b8;
    ___free_lconv_mon(DAT_005650c0);
    _free(DAT_005650c0);
    DAT_005650c0 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = (undefined4 *)_calloc(1,0x30);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = __get_lc_lconv(puVar1);
    if (iVar2 == 0) {
      *puVar1 = *(undefined4 *)PTR_PTR_005627e8;
      puVar1[1] = *(undefined4 *)(PTR_PTR_005627e8 + 4);
      puVar1[2] = *(undefined4 *)(PTR_PTR_005627e8 + 8);
      PTR_PTR_005627e8 = (undefined *)puVar1;
      ___free_lconv_mon(DAT_005650c0);
      _free(DAT_005650c0);
      DAT_005650c0 = puVar1;
      return 0;
    }
    ___free_lconv_mon(puVar1);
    _free(puVar1);
  }
  return 1;
}

