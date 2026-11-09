
void __cdecl FUN_10002d30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if (*(int *)(iVar1 + 0xa4) == param_1) {
        if (*(uint *)(param_1 + 8) < *(uint *)(iVar1 + 0xac)) {
          *(uint *)(iVar1 + 0xac) = *(uint *)(iVar1 + 0xac) - *(uint *)(param_1 + 8);
        }
        else {
          *(undefined4 *)(iVar1 + 0xac) = 0;
        }
        FUN_10002b80(iVar1,3);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xbc;
    } while (uVar2 < DAT_100198b8);
  }
  return;
}

