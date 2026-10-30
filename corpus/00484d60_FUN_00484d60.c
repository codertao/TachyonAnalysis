
void FUN_00484d60(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  piVar3 = &DAT_00556e70;
  iVar2 = DAT_00556e70;
  while (iVar2 != -1) {
    if (((*piVar3 == 0) && (FUN_0048cc60(0,&local_4,&local_8,&local_c), local_8 < local_c)) &&
       (iVar2 = FUN_0048b7c0(0), iVar2 != 0)) {
      piVar3[0xd] = local_4;
      piVar3[0xe] = local_c;
      piVar3[0xf] = local_8;
      FUN_00465970(piVar3);
    }
    piVar1 = piVar3 + 0x10;
    piVar3 = piVar3 + 0x10;
    iVar2 = *piVar1;
  }
  FUN_00465c20(&DAT_00556e70);
  return;
}

