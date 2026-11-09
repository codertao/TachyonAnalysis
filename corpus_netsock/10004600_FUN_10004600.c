
void __cdecl FUN_10004600(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uVar3 = 0;
  puVar2 = DAT_10019afc;
  if (DAT_100198b8 != 0) {
    do {
      if ((puVar2[0x27] != 0) && ((undefined4 *)puVar2[0x29] == param_1)) {
        FUN_10004490(puVar2);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x2f;
    } while (uVar3 < DAT_100198b8);
  }
  return;
}

