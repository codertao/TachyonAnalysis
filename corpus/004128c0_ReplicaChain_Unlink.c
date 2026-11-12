
/* sweep */

void ReplicaChain_Unlink(int param_1)

{
  int iVar1;
  
  iVar1 = ReplicaChain_FindPrev(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  }
  return;
}

