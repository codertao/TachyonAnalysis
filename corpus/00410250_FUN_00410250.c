
void FUN_00410250(void)

{
  if (DAT_005b95e0[8] != 0) {
    FUN_004b1940(&DAT_005b9600,&DAT_005b95e8);
    (*(code *)DAT_005b95e0[8])(*DAT_005b95e0);
  }
  return;
}

