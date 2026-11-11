
void FUN_00477460(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  int local_4;
  
  piVar4 = &DAT_0054fea8;
  iVar3 = DAT_0054fea8;
  do {
    if (iVar3 == -1) {
      if (g_LoadoutDragItem == 0) {
        FUN_00465c20(&DAT_0054fea8);
      }
      return;
    }
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      FUN_0048cc60(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar3 = FUN_0048b7c0(0), iVar3 != 0)) goto LAB_00477503;
    }
    else {
      iVar2 = DAT_0058974c;
      iVar1 = DAT_005720c0;
      if (((iVar3 == 1) || (iVar2 = DAT_00589744, iVar1 = DAT_00577f00, iVar3 == 2)) &&
         ((local_4 = iVar1, local_8 = 4, local_c = iVar2, iVar2 != 4 && -1 < iVar2 + -4 &&
          (DAT_00563614 == 0)))) {
LAB_00477503:
        piVar4[0xd] = local_4;
        piVar4[0xe] = local_c;
        piVar4[0xf] = local_8;
        FUN_00465970(piVar4);
      }
    }
    iVar3 = piVar4[0x10];
    piVar4 = piVar4 + 0x10;
  } while( true );
}

