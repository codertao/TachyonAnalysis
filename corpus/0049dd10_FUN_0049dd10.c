
void FUN_0049dd10(int param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    local_8 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x38) + 0x28);
      do {
        local_c = 0;
        local_10 = puVar5;
        if (puVar5[-1] != 0) {
          do {
            uVar3 = 0;
            puVar1 = (ushort *)*local_10;
            piVar4 = *(int **)(puVar1 + 8);
            if (*puVar1 != 0) {
              do {
                iVar2 = *piVar4;
                if (*(char *)(iVar2 + 0x23) != '\0') {
                  OurFreeMem(*(undefined4 *)(iVar2 + 0x24));
                  *(undefined1 *)(iVar2 + 0x23) = 0;
                }
                uVar3 = uVar3 + 1;
                piVar4 = piVar4 + 7;
              } while (uVar3 < *puVar1);
            }
            OurFreeMem(*(undefined4 *)(puVar1 + 8));
            local_c = local_c + 1;
            local_10 = local_10 + 1;
          } while (local_c < (uint)puVar5[-1]);
        }
        OurFreeMem(*puVar5);
        local_8 = local_8 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (local_8 < *(uint *)(param_1 + 0x28));
    }
    OurFreeMem(*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

