
void FUN_004c1ce0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00565184);
  DAT_00565180 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_0056517c = 2;
  }
  else {
    DAT_0056517c = FUN_004c2106(DAT_00565184);
  }
  EnumSystemLocalesA(FUN_004c1d36,1);
  if ((DAT_0056518c & 4) == 0) {
    DAT_0056518c = 0;
  }
  return;
}

