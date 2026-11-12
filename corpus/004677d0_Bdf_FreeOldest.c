
/* sweep: guess */

int Bdf_FreeOldest(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x10;
  iVar1 = DAT_005b9080;
  do {
    if ((*(int *)(iVar1 + 0xd0) != 0) && (*(uint *)(iVar1 + 0xd4) < param_1)) {
      param_1 = *(uint *)(iVar1 + 0xd4);
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 0x144;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  Bdf_FreeScene(iVar1);
  return iVar2;
}

