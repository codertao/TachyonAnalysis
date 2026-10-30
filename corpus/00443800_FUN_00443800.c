
void FUN_00443800(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_00540c88;
  iVar3 = DAT_00562c08;
  iVar2 = DAT_00540c88;
  while (iVar2 != -1) {
    if ((*piVar4 == 0) && (iVar3 != 8 && -1 < iVar3 + -8)) {
      piVar4[0xd] = DAT_005a4020;
      piVar4[0xe] = iVar3;
      piVar4[0xf] = 8;
      FUN_00465970(piVar4);
      iVar3 = DAT_00562c08;
    }
    piVar1 = piVar4 + 0x10;
    piVar4 = piVar4 + 0x10;
    iVar2 = *piVar1;
  }
  FUN_00465c20(&DAT_00540c88);
  return;
}

