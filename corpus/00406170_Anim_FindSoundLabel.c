
/* sweep */

undefined4 Anim_FindSoundLabel(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_005b9abc;
  if (DAT_005b9ab8 != 0) {
    do {
      iVar1 = __stricmp(iVar2,param_1);
      if (iVar1 == 0) {
        return *(undefined4 *)(iVar2 + 0x20);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x24;
    } while (uVar3 < DAT_005b9ab8);
  }
  return 0;
}

