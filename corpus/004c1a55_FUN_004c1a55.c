
void FUN_004c1a55(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00565184);
  DAT_00565180 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_00565188);
  DAT_00565178 = (uint)(sVar1 == 3);
  DAT_00565174 = 0;
  if (DAT_00565180 == 0) {
    DAT_0056517c = FUN_004c2106(DAT_00565184);
  }
  else {
    DAT_0056517c = 2;
  }
  EnumSystemLocalesA(FUN_004c1adc,1);
  if ((((DAT_0056518c & 0x100) == 0) || ((DAT_0056518c & 0x200) == 0)) || ((DAT_0056518c & 7) == 0))
  {
    DAT_0056518c = 0;
  }
  return;
}

