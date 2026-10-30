
void FUN_00425080(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_005b1de0;
  piVar2 = DAT_005b1de0;
  do {
    if (iVar1 == 0) {
LAB_004250a4:
      if ((g_FlightStateFlags & 2) != 0) {
        (*(code *)PTR_FUN_00535c1c)(&DAT_00535c10);
      }
      return;
    }
    if (piVar2[1] != 0) {
      (*(code *)piVar2[3])(piVar2);
      goto LAB_004250a4;
    }
    iVar1 = piVar2[4];
    piVar2 = piVar2 + 4;
  } while( true );
}

