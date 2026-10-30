
void FUN_0043c0d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      if (*pcVar4 == '\0') {
        return;
      }
      iVar2 = FUN_004c67c0(param_2,pcVar4 + 0x40);
      if (iVar2 == 0) {
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf0) & 4) != 0)) {
          *(uint *)(pcVar4 + 0x204) = *(uint *)(pcVar4 + 0x204) | 0x400;
        }
        FUN_0043c030(param_1,pcVar4,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x23c;
    } while (uVar3 < *(uint *)(param_1 + 0x4c));
  }
  return;
}

