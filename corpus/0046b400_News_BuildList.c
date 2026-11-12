
/* sweep */

void News_BuildList(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
  iVar5 = DAT_00589734;
  if ((DAT_00589734 != 0) &&
     (Mem_AllocZeroTagged(&local_4,DAT_00589734 << 8,4,s_NEWS_LIST_0054ad1c,0xa100),
     iVar4 = DAT_00589734, puVar2 = DAT_00589738, puVar7 = local_4, local_4 != (undefined4 *)0x0)) {
    for (; iVar3 = DAT_00589734, puVar1 = DAT_00589738, iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar7;
      if (puVar2[0x3e] != 0) {
        puVar1 = puVar7 + 0x40;
        puVar6 = puVar2;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      puVar2 = puVar2 + 0x40;
      puVar7 = puVar1;
    }
    while ((iVar3 != 0 && (iVar5 != 0))) {
      puVar2 = puVar7;
      if (puVar1[0x3e] == 0) {
        puVar2 = puVar7 + 0x40;
        puVar6 = puVar1;
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      puVar7 = puVar2;
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 0x40;
    }
    OurFreeMem(DAT_00589738);
    DAT_00589738 = local_4;
  }
  return;
}

