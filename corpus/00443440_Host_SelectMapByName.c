
/* sweep */

void Host_SelectMapByName(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_00562c04;
  uVar1 = GameType_DirName(GLBL_spacesav[0x13]);
  uVar4 = 0;
  DAT_00562c08 = 0;
  if (DAT_005a4000 != 0) {
    do {
      iVar2 = __stricmp(iVar3,uVar1);
      if (iVar2 == 0) {
        DAT_00562c08 = DAT_00562c08 + 1;
      }
      iVar3 = iVar3 + 0xb8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_005a4000);
  }
  Host_RefreshMapSlots(0);
  return;
}

