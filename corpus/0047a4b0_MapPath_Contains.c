
/* sweep: guess */

int MapPath_Contains(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x100);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    if ((iVar1 != 0) &&
       (iVar2 = MapNode_Find(*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 0x88)),
       iVar2 != 0)) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
    }
  }
  return iVar1;
}

