
/* sweep */

int Sped_GetActorRecord(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == -1) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
    return *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 4) + 0x74) + iVar1 * 0x20;
  }
  return *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 8) + 0x74) + iVar1 * 0x20;
}

