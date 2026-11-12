
/* CRT: getqloc */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_00565184);
  DAT_00565180 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_0056517c = 2;
  }
  else {
    DAT_0056517c = _LcidFromHexString(DAT_00565184);
  }
  EnumSystemLocalesA(_LanguageEnumProc,1);
  if ((DAT_0056518c & 4) == 0) {
    DAT_0056518c = 0;
  }
  return;
}

