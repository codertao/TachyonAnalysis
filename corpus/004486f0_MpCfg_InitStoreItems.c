
/* sweep: guess */

void MpCfg_InitStoreItems(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_00589740;
  Inventory_Reset(1);
  uVar3 = 0;
  if (DAT_0058973c != 0) {
    do {
      iVar1 = *(int *)(iVar4 + 0x58);
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + 0x90) != 0 || (iVar2 = StoreItem_FindByName(iVar4), iVar2 != 0)))) {
        Ui_LoadImageCached(DAT_005879a0,iVar1 + 0xb0,1,*(undefined4 *)(iVar1 + 0xc0),
                           *(undefined4 *)(iVar1 + 0xc4),0);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x5c;
    } while (uVar3 < DAT_0058973c);
  }
  return;
}

