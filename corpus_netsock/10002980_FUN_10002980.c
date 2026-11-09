
int __cdecl FUN_10002980(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  uVar3 = 0;
  iVar1 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if ((*(int *)(iVar1 + 0x9c) != 0) && (*(int *)(iVar1 + 0x98) != 0)) {
        iVar2 = 4;
        bVar6 = true;
        piVar4 = (int *)(iVar1 + 0x88);
        piVar5 = param_1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return iVar1;
        }
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0xbc;
    } while (uVar3 < DAT_100198b8);
  }
  return 0;
}

