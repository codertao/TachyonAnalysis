
void FUN_0042fab0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    piVar7 = *(int **)(param_1 + 0x10);
    if (piVar7 != (int *)0x0) {
      iVar5 = DAT_005b3304;
      for (piVar2 = (int *)*piVar7; (DAT_005b3304 = iVar5, piVar2 != (int *)0x0 && (*piVar2 != 0));
          piVar2 = (int *)*piVar2) {
        uVar3 = piVar2[3];
        if (uVar3 != 0) {
          iVar8 = 0;
          piVar6 = (int *)&DAT_0053cbb0;
          uVar4 = DAT_0053cbb0;
          while ((uVar4 != 0 && (uVar4 != uVar3))) {
            puVar1 = (uint *)(piVar6 + 1);
            piVar6 = piVar6 + 1;
            iVar8 = iVar8 + 1;
            uVar4 = *puVar1;
          }
          if (*piVar6 != 0) {
            if ((DAT_00603e48 & uVar3) == 0) {
              if (((*(byte *)(piVar2 + 6) & 2) != 0) && ((&DAT_005b0020)[iVar8] != 0)) {
                (*(code *)piVar2[4])(piVar2[5],0,iVar5 - (&DAT_005b0020)[iVar8]);
                (&DAT_005affe0)[iVar8] = 0;
              }
              (&DAT_005b0020)[iVar8] = 0;
            }
            else {
              if ((&DAT_005b0020)[iVar8] == 0) {
                (&DAT_005b0020)[iVar8] = iVar5;
                (&DAT_005affe0)[iVar8] = *piVar7;
              }
              (**(code **)(*piVar7 + 0x10))
                        (*(undefined4 *)(*piVar7 + 0x14),1,iVar5 - (&DAT_005b0020)[iVar8]);
            }
          }
        }
        piVar2 = piVar7 + 1;
        piVar7 = piVar7 + 1;
        iVar5 = DAT_005b3304;
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) break;
    param_1 = *(int *)(param_1 + 0x14);
  }
  return;
}

