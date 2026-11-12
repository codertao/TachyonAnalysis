
/* sweep: guess */

undefined4 Gate_FindByNameB(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    uVar2 = 0;
    if (*(uint *)(param_3 + 0x14) != 0) {
      do {
        if (*(int *)(iVar1 + 0x20) == param_2) {
          return *(undefined4 *)(iVar1 + 0x28);
        }
        iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_3 + 0x14));
    }
  }
  return 0;
}

