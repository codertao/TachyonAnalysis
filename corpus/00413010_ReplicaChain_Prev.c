
/* sweep */

uint ReplicaChain_Prev(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ReplicaChain_Last(param_1);
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar2 = ReplicaChain_FindPrev(param_2);
  if (uVar2 == 0) {
    uVar2 = uVar1;
  }
  while( true ) {
    if (uVar2 == param_2) {
      return -(uint)((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) & uVar2;
    }
    if (uVar2 == param_1) {
      uVar2 = uVar1;
    }
    if ((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) break;
    uVar2 = ReplicaChain_FindPrev(uVar2);
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

