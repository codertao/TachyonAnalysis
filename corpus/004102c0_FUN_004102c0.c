
void FUN_004102c0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00533ac8;
  uVar1 = DAT_00533ad4;
  do {
    if ((uVar1 & 0x80000000) != 0) {
LAB_004102f3:
      if ((code *)DAT_005b95e0[9] != (code *)0x0) {
        (*(code *)DAT_005b95e0[9])(*DAT_005b95e0);
      }
      return;
    }
    if (puVar2[0xb] == param_1) {
      FUN_00410280(puVar2);
      goto LAB_004102f3;
    }
    uVar1 = puVar2[0x11];
    puVar2 = puVar2 + 0xe;
  } while( true );
}

