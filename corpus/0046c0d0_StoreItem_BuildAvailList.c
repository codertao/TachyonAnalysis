
/* sweep */

void StoreItem_BuildAvailList(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  DAT_0058974c = (undefined4 *)Item_CountOwned(0);
  if (DAT_0058974c == (undefined4 *)0x0) {
    if (DAT_00589750 != (undefined4 *)0x0) {
      OurFreeMem(DAT_00589750);
      DAT_00589750 = (undefined4 *)0x0;
      return;
    }
  }
  else {
    if (DAT_00589750 != (undefined4 *)0x0) {
      OurFreeMem(DAT_00589750);
      DAT_00589750 = (undefined4 *)0x0;
    }
    Mem_AllocZeroTagged(&DAT_00589750,(int)DAT_0058974c * 0x5c,4,s_STARBASE_AVAIL_ITEM_DEF_0054ae7c,
                        0xa100);
    if (DAT_00589750 == (undefined4 *)0x0) {
      DAT_0058974c = DAT_00589750;
      return;
    }
    uVar4 = 0;
    puVar1 = DAT_00589740;
    puVar3 = DAT_00589750;
    if (DAT_0058973c != 0) {
      do {
        if ((puVar1[0x16] != 0) && (*(int *)(puVar1[0x16] + 0x90) != 0)) {
          puVar5 = puVar1;
          puVar6 = puVar3;
          for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar3 = puVar3 + 0x17;
        }
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 0x17;
      } while (uVar4 < DAT_0058973c);
    }
  }
  return;
}

