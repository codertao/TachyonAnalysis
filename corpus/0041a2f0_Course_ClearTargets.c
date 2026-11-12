
/* sweep */

void Course_ClearTargets(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = GLBL_some_sped_ll_head;
  if (GLBL_some_sped_ll_head == 0) {
    GLBL_some_sped_ll_head = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar3 + 200);
    Ent_UnlinkFromMaps(iVar3,*(int *)(iVar3 + 100) + 0x14);
    List_RemoveW(iVar3,*(undefined4 *)(iVar3 + 100));
    Dcb_Free(iVar3);
    iVar2 = *(int *)(iVar3 + 0xf4);
    if (iVar2 != 0) {
      Ent_UnlinkFromMaps(iVar2,*(int *)(iVar2 + 100) + 0x14);
      List_RemoveW(*(int *)(iVar3 + 0xf4),*(undefined4 *)(*(int *)(iVar3 + 0xf4) + 100));
      Dcb_Free(*(undefined4 *)(iVar3 + 0xf4));
    }
    iVar3 = iVar1;
  } while (iVar1 != 0);
  GLBL_some_sped_ll_head = iVar1;
  return;
}

