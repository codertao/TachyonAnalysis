
void FUN_00432510(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(DAT_005b1f0c + 0x640 + *(int *)(param_1 + 8) * 4);
  uVar5 = 0;
  piVar6 = DAT_005b9038;
  if (DAT_005b9034 != 0) {
    do {
      if ((*piVar6 == 0) &&
         (iVar2 = FUN_00493120(piVar6[1]), (uVar1 & *(uint *)(iVar2 + 0x104)) != 0)) {
        iVar3 = FUN_0040c430(iVar2,DAT_005b9030,1);
        if (iVar3 != 0) {
          iVar8 = piVar6[2];
          iVar7 = piVar6[1];
        }
        else {
          iVar8 = piVar6[2];
          iVar7 = piVar6[1];
        }
        uVar4 = FUN_00431f90(iVar2,iVar7,iVar8,iVar3 == 0);
        FUN_004324b0(uVar4);
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < DAT_005b9034);
  }
  return;
}

