
void FUN_00425030(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00535b90;
  DAT_005b1de0 = &DAT_00535b90;
  iVar2 = DAT_00535b90;
  while (iVar2 != 0) {
    puVar3[1] = 0;
    piVar1 = puVar3 + 4;
    puVar3 = puVar3 + 4;
    iVar2 = *piVar1;
  }
  FUN_00430de0();
  FUN_00420860();
  FUN_00425210();
  FUN_004997e0();
  FUN_00491740();
  FUN_00492620();
  return;
}

