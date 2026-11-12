
/* sweep */

void Host_GetSelectedMap(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_00562c04;
  uVar3 = 0;
  uVar1 = GameType_DirName(GLBL_spacesav[0x13]);
  uVar4 = 0;
  if (DAT_005a4000 != 0) {
    do {
      iVar2 = __stricmp(iVar5,uVar1);
      if ((iVar2 == 0) && (GLBL_spacesav[0] <= *(uint *)(iVar5 + 0xb0))) {
        iVar2 = Rtxt_LookupSafe(DAT_005a40b8,s_TITLES_00540fec,iVar5 + 0x60);
        if (iVar2 == 0) {
          uVar6 = *(undefined4 *)(iVar5 + 0xb4);
          iVar2 = iVar5 + 0x50;
        }
        else {
          uVar6 = *(undefined4 *)(iVar5 + 0xb4);
        }
        MpMap_GetTitle(uVar3,iVar5 + 0x40,iVar2,uVar6);
        iVar2 = __stricmp(iVar5 + 0x40,&DAT_005a4010);
        if (iVar2 == 0) {
          MpMap_GetDesc(uVar3);
        }
        uVar3 = uVar3 + 1;
        if (DAT_00562c08 <= uVar3) break;
      }
      iVar5 = iVar5 + 0xb8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_005a4000);
  }
  MpMap_GetName(uVar3);
  return;
}

