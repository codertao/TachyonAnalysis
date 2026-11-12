
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void News_FreeHeadlines(void)

{
  int iVar1;
  
  iVar1 = DAT_005636a4;
  while (iVar1 != 0) {
    DAT_005636a4 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar1 + 0x18) != 0) {
      Audio_StopSample(*(undefined4 *)(iVar1 + 0x10));
      OurFreeMem(*(undefined4 *)(iVar1 + 0x18));
    }
    OurFreeMem(iVar1);
    iVar1 = DAT_005636a4;
  }
  DAT_005636a4 = 0;
  _DAT_005636a8 = 0;
  DAT_00571288 = 0;
  return;
}

