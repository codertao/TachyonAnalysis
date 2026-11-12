
/* sweep */

void ObjDisplay_DrawOrder(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x90) == 2) {
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    ObjDisplay_DrawEntry(4,param_1 + 0x20,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    ObjDisplay_DrawEntry(4,param_1 + 0x20,param_2);
    return;
  }
  ObjDisplay_DrawEntry(4,&DAT_005486d0,param_2);
  return;
}

