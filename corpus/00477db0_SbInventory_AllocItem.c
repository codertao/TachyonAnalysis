
/* sweep */

int SbInventory_AllocItem(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  Mem_AllocZeroTagged(&local_4,0x8c,4,s_Plyr_Inv_Item_00550a18,0xa100);
  if (local_4 != 0) {
    if (DAT_00572024 != 0) {
      iVar3 = *(int *)(DAT_00572024 + 0x88);
      iVar2 = DAT_00572024;
      while (iVar1 = iVar3, iVar1 != 0) {
        iVar2 = iVar1;
        iVar3 = *(int *)(iVar1 + 0x88);
      }
      *(int *)(iVar2 + 0x88) = local_4;
      return local_4;
    }
    DAT_00572024 = local_4;
  }
  return local_4;
}

