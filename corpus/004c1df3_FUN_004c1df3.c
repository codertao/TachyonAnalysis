
void FUN_004c1df3(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00565188);
  DAT_00565178 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_004c1e2a,1);
  if ((DAT_0056518c & 4) == 0) {
    DAT_0056518c = 0;
  }
  return;
}

