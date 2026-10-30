
int FUN_004bfbe7(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_004c15cd(2);
  iVar3 = 0;
  if (0 < DAT_006caec0) {
    do {
      iVar1 = *(int *)(DAT_006c9ea0 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_004bfab4(iVar3,iVar1);
        iVar1 = *(int *)(DAT_006c9ea0 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_004bfb54(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_004bfb54(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_004bfb06(iVar3,*(undefined4 *)(DAT_006c9ea0 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_006caec0);
  }
  FUN_004c162e(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

