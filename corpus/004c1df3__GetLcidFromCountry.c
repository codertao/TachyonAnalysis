
/* CRT: getqloc */

void _GetLcidFromCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00565188);
  DAT_00565178 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(_CountryEnumProc,1);
  if ((DAT_0056518c & 4) == 0) {
    DAT_0056518c = 0;
  }
  return;
}

