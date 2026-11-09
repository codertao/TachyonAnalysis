
int __cdecl FUN_100014f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if (*(int *)(iVar1 + 0x9c) == 0) {
        *param_1 = uVar2 + 0x10000;
        return iVar1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xbc;
    } while (uVar2 < DAT_100198b8);
  }
  return 0;
}

