
void FUN_0047f8e0(void)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &DAT_00552bb8;
  iVar1 = DAT_00552bb8;
  do {
    if (iVar1 == -1) {
      FUN_00465c20(&DAT_00552bb8);
      return;
    }
    if (*piVar2 == 0) {
      FUN_0048cc60(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar1 = FUN_0048b7c0(0), iVar1 != 0)) goto LAB_0047f966;
    }
    else if ((*piVar2 == 1) &&
            (local_8 = 4, local_c = DAT_005636b8, local_4 = DAT_005636b0,
            DAT_005636b8 != 4 && -1 < DAT_005636b8 + -4)) {
LAB_0047f966:
      piVar2[0xd] = local_4;
      piVar2[0xe] = local_c;
      piVar2[0xf] = local_8;
      FUN_00465970(piVar2);
    }
    iVar1 = piVar2[0x10];
    piVar2 = piVar2 + 0x10;
  } while( true );
}

