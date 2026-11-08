
int find_ui_elem_by_id_(int ui_ctx,undefined4 name)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(ui_ctx + 0x14);
  if (*(int *)(ui_ctx + 0x48) != 0) {
    do {
      iVar1 = str_cmp(name,iVar3);
      if (iVar1 == 0) {
        return iVar3;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x130;
    } while (uVar2 < *(uint *)(ui_ctx + 0x48));
  }
  return 0;
}

