
/* sweep: guess */

int Map_FindStarbase(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_00563674;
  if (DAT_00563670 != 0) {
    do {
      iVar1 = __stricmp(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < DAT_00563670);
  }
  return 0;
}

