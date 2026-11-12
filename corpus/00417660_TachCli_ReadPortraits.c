
/* sweep */

void TachCli_ReadPortraits(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1 + 8;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      CliOn_PlayerPortrait(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  return;
}

