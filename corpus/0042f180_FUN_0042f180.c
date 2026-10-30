
void FUN_0042f180(void)

{
  uint *puVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  undefined **ppuVar10;
  
  ppuVar10 = &PTR_PTR_00536d70;
  puVar6 = PTR_PTR_00536d70;
  if (DAT_0053cbc8 != 0) {
    puVar7 = &DAT_0053cbe0;
    do {
      if ((puVar7[1] & 3) != 0) {
        *puVar7 = *puVar7 & 0xfffffffe;
      }
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 8;
      puVar6 = PTR_PTR_00536d70;
    } while (*puVar1 != 0);
  }
  while (puVar6 != (undefined *)0x0) {
    piVar9 = *(int **)(*ppuVar10 + 4);
    if (piVar9 != (int *)0x0) {
      piVar8 = (int *)*piVar9;
      iVar3 = *piVar8;
      while (iVar3 != 0) {
        if ((*(byte *)(piVar8 + 7) & 3) != 0) {
          uVar4 = piVar8[1];
          piVar8 = *(int **)(*ppuVar10 + 4);
          if (piVar8 != (int *)0x0) {
            piVar5 = (int *)*piVar8;
            iVar3 = *piVar5;
            while (iVar3 != 0) {
              if ((piVar5[1] & 0x1ffU) == (uVar4 & 0x1ff)) {
                *(uint *)(*piVar9 + 0x18) = *(uint *)(*piVar9 + 0x18) | 1;
                if ((*(byte *)(*piVar8 + 0x1c) & 3) != 0) {
                  puVar7 = (uint *)(*piVar8 + 0x18);
                  *puVar7 = *puVar7 | 1;
                }
              }
              piVar5 = (int *)piVar8[1];
              piVar8 = piVar8 + 1;
              iVar3 = *piVar5;
            }
          }
          piVar8 = *(int **)(*ppuVar10 + 8);
          if (piVar8 != (int *)0x0) {
            piVar5 = (int *)*piVar8;
            iVar3 = *piVar5;
            while (iVar3 != 0) {
              if ((piVar5[1] & 0x1ffU) == (uVar4 & 0x1ff)) {
                *(uint *)(*piVar9 + 0x18) = *(uint *)(*piVar9 + 0x18) | 1;
                if ((*(byte *)(*piVar8 + 0x1c) & 3) != 0) {
                  puVar7 = (uint *)(*piVar8 + 0x18);
                  *puVar7 = *puVar7 | 1;
                }
              }
              piVar5 = (int *)piVar8[1];
              piVar8 = piVar8 + 1;
              iVar3 = *piVar5;
            }
          }
        }
        piVar8 = (int *)piVar9[1];
        piVar9 = piVar9 + 1;
        iVar3 = *piVar8;
      }
    }
    piVar9 = *(int **)(*ppuVar10 + 8);
    if (piVar9 != (int *)0x0) {
      piVar8 = (int *)*piVar9;
      iVar3 = *piVar8;
      while (iVar3 != 0) {
        if ((*(byte *)(piVar8 + 7) & 3) != 0) {
          uVar4 = piVar8[1];
          piVar8 = *(int **)(*ppuVar10 + 4);
          if (piVar8 != (int *)0x0) {
            piVar5 = (int *)*piVar8;
            iVar3 = *piVar5;
            while (iVar3 != 0) {
              if ((piVar5[1] & 0x1ffU) == (uVar4 & 0x1ff)) {
                *(uint *)(*piVar9 + 0x18) = *(uint *)(*piVar9 + 0x18) | 1;
                if ((*(byte *)(*piVar8 + 0x1c) & 3) != 0) {
                  puVar7 = (uint *)(*piVar8 + 0x18);
                  *puVar7 = *puVar7 | 1;
                }
              }
              piVar5 = (int *)piVar8[1];
              piVar8 = piVar8 + 1;
              iVar3 = *piVar5;
            }
          }
          piVar8 = *(int **)(*ppuVar10 + 8);
          if (piVar8 != (int *)0x0) {
            piVar5 = (int *)*piVar8;
            iVar3 = *piVar5;
            while (iVar3 != 0) {
              if ((piVar5[1] & 0x1ffU) == (uVar4 & 0x1ff)) {
                *(uint *)(*piVar9 + 0x18) = *(uint *)(*piVar9 + 0x18) | 1;
                if ((*(byte *)(*piVar8 + 0x1c) & 3) != 0) {
                  puVar7 = (uint *)(*piVar8 + 0x18);
                  *puVar7 = *puVar7 | 1;
                }
              }
              piVar5 = (int *)piVar8[1];
              piVar8 = piVar8 + 1;
              iVar3 = *piVar5;
            }
          }
        }
        piVar8 = (int *)piVar9[1];
        piVar9 = piVar9 + 1;
        iVar3 = *piVar8;
      }
    }
    ppuVar2 = ppuVar10 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar6 = *ppuVar2;
  }
  return;
}

