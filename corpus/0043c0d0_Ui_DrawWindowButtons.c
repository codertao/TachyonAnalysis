
/* sweep */

void Ui_DrawWindowButtons(int param_1,undefined4 param_2)

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
      iVar2 = __stricmp(param_2,pcVar4 + 0x40);
      if (iVar2 == 0) {
        if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf0) & 4) != 0)) {
          *(uint *)(pcVar4 + 0x204) = *(uint *)(pcVar4 + 0x204) | 0x400;
        }
        Ui_DrawButton(param_1,pcVar4,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x23c;
    } while (uVar3 < *(uint *)(param_1 + 0x4c));
  }
  return;
}

