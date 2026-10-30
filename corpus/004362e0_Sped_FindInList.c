
/* linear find SPED by id in a list */

int Sped_FindInList(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      do {
        if (*(int *)(iVar1 + 0x20) == param_2) {
          return iVar1;
        }
        iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x14));
    }
  }
  return 0;
}

