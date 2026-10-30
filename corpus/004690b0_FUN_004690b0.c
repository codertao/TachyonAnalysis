
int FUN_004690b0(char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (uVar2 = 0, iVar3 = DAT_00589740, DAT_0058973c != 0)) {
    do {
      iVar1 = FUN_004c67c0(iVar3,param_1);
      if (iVar1 == 0) {
        return iVar3;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (uVar2 < DAT_0058973c);
  }
  return 0;
}

