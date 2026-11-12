
/* sweep */

void Spx_ForEachDecl(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x14));
    }
  }
  return;
}

