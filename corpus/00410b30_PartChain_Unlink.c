
/* sweep */

void PartChain_Unlink(int param_1)

{
  int iVar1;
  
  iVar1 = PartChain_FindPrev(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  }
  return;
}

