
/* sweep */

void Replica_DestroyAll(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005b3280;
  if (DAT_005b3280 == 0) {
    DAT_005b3280 = 0;
    DAT_005b3284 = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 8);
    Replica_Destroy(iVar2,0);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  DAT_005b3280 = 0;
  DAT_005b3284 = 0;
  return;
}

