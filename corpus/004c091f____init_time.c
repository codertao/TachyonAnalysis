
/* CRT */

undefined4 ___init_time(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_00565144 == 0) {
    PTR_PTR_005626f8 = (undefined *)&PTR_DAT_00562700;
    __free_lc_time(DAT_005650b0);
    _free(DAT_005650b0);
    DAT_005650b0 = (undefined *)0x0;
    return 0;
  }
  puVar1 = (undefined *)_calloc(1,0xac);
  if (puVar1 != (undefined *)0x0) {
    iVar2 = __get_lc_time(puVar1);
    if (iVar2 == 0) {
      PTR_PTR_005626f8 = puVar1;
      __free_lc_time(DAT_005650b0);
      _free(DAT_005650b0);
      DAT_005650b0 = puVar1;
      return 0;
    }
    __free_lc_time(puVar1);
    _free(puVar1);
  }
  return 1;
}

