
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c46d7(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_006caec8 == 0) {
    FUN_004c5458();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_005651a4,0x104);
  _DAT_00564fa8 = &DAT_005651a4;
  pcVar2 = &DAT_005651a4;
  if (*DAT_006caed4 != '\0') {
    pcVar2 = DAT_006caed4;
  }
  FUN_004c4770(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_004c4770(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_00564f90 = pvVar1;
  _DAT_00564f8c = local_8 + -1;
  return;
}

