
/* sweep: list +0x10 */

void Quad_UnlinkDynamicList(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == param_1) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x9c);
    return;
  }
  if (iVar2 != 0) {
    while (iVar1 = *(int *)(iVar2 + 0x9c), iVar1 != param_1) {
      iVar2 = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  }
  return;
}

