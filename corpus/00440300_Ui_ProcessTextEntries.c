
/* sweep */

void Ui_ProcessTextEntries(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  Ui_UpdateTextEntries(param_1);
  iVar3 = *(int *)(param_1 + 0x38);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      iVar1 = Ui_FindWindowDef(param_1,iVar3 + 0x40);
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf0) & 2) != 0)) && (*(int *)(iVar3 + 0x9c) != 0)) {
        TextEntry_HitTest(param_1,iVar3,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48))
        ;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xac;
    } while (uVar2 < *(uint *)(param_1 + 0x5c));
  }
  return;
}

