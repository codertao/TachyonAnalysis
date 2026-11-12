
/* sweep */

undefined4 Quad_GetSpxForSped(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x3c);
  if ((*(byte *)(param_2 + 0x24) & 2) != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return *(undefined4 *)(iVar1 + 8);
}

