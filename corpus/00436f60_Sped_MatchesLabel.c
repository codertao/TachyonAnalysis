
/* sweep */

bool Sped_MatchesLabel(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 100) + 0x3c);
  sVar1 = *(short *)(param_1 + 0x76);
  if ((((sVar1 == 2) || (sVar1 == 0xd)) || (sVar1 == 0x14)) &&
     (iVar2 = *(int *)(param_1 + 0xd8), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x44) == -1) {
      return false;
    }
    if ((*(byte *)(iVar2 + 0x24) & 2) == 0) {
      iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0x74);
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x74);
    }
    iVar3 = __stricmp(*(int *)(iVar2 + 0x44) * 0x20 + iVar3,param_2);
    return iVar3 == 0;
  }
  return false;
}

