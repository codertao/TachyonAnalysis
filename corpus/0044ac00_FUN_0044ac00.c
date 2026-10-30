
void FUN_0044ac00(void)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &DAT_005474f8;
  iVar1 = DAT_005474f8;
  do {
    if (iVar1 == -1) {
      if (DAT_00562c70 == 0) {
        FUN_00465c20(&DAT_005474f8);
      }
      return;
    }
    if (*piVar2 == 0) {
      FUN_0048cc60(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar1 = FUN_0048b7c0(0), iVar1 != 0)) goto LAB_0044ac86;
    }
    else if ((*piVar2 == 1) &&
            (local_8 = 5, local_c = DAT_00589744, local_4 = DAT_00592fc8,
            DAT_00589744 != 5 && -1 < DAT_00589744 + -5)) {
LAB_0044ac86:
      piVar2[0xd] = local_4;
      piVar2[0xe] = local_c;
      piVar2[0xf] = local_8;
      FUN_00465970(piVar2);
    }
    iVar1 = piVar2[0x10];
    piVar2 = piVar2 + 0x10;
  } while( true );
}

