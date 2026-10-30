
undefined4 FUN_004c091f(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_00565144 == 0) {
    PTR_PTR_005626f8 = (undefined *)&PTR_DAT_00562700;
    FUN_004c0cfe(DAT_005650b0);
    FUN_004bd512(DAT_005650b0);
    DAT_005650b0 = (undefined *)0x0;
    return 0;
  }
  puVar1 = (undefined *)FUN_004c6219(1,0xac);
  if (puVar1 != (undefined *)0x0) {
    iVar2 = FUN_004c09b0(puVar1);
    if (iVar2 == 0) {
      PTR_PTR_005626f8 = puVar1;
      FUN_004c0cfe(DAT_005650b0);
      FUN_004bd512(DAT_005650b0);
      DAT_005650b0 = puVar1;
      return 0;
    }
    FUN_004c0cfe(puVar1);
    FUN_004bd512(puVar1);
  }
  return 1;
}

