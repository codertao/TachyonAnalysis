
/* sweep */

void ObjDisplay_DrawOrders(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = DAT_005b3244; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = (-(uint)(*(int *)(iVar1 + 0x84) != 1) & 0x44c4ff) + 0x800000;
    if (*(int *)(iVar1 + 0x88) != 0) {
      iVar2 = *(int *)(iVar1 + 0x88);
    }
    if (*(int *)(iVar1 + 0x18) != 8) {
      ObjDisplay_DrawOrder(iVar1,iVar2);
    }
  }
  return;
}

