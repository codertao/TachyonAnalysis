
/* sweep */

void Loadout_LoadPlayerHardware(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = Var_FindSection(s_PLAYER_HARDWARE_005476c4);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x28);
    uVar4 = 0;
    if (*(int *)(iVar1 + 0x20) != 0) {
      do {
        iVar2 = Item_FindByName(*puVar3);
        if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x58), iVar2 != 0)) {
          Ui_LoadImageCached(&GLBL_UI_ELEM_LIST,iVar2 + 0xb0,1,*(undefined4 *)(iVar2 + 0xc0),
                             *(undefined4 *)(iVar2 + 0xc4),0);
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 3;
      } while (uVar4 < *(uint *)(iVar1 + 0x20));
    }
  }
  return;
}

