
void FUN_004325f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(DAT_005b1f0c + 0x680 + *(int *)(param_1 + 8) * 4);
  uVar4 = 0;
  piVar3 = DAT_005b9038;
  if (DAT_005b9034 != 0) {
    do {
      if ((*piVar3 == 1) && (iVar5 = piVar3[1], (uVar1 & 1 << ((byte)iVar5 & 0x1f)) != 0)) {
        iVar2 = piVar3[2];
        if (DAT_005b9030 < iVar2) {
          uVar6 = 0;
        }
        else {
          iVar2 = FUN_004325b0(iVar5);
          iVar5 = piVar3[1];
          if (iVar2 == 0) {
            iVar2 = piVar3[2];
            uVar6 = 1;
          }
          else {
            iVar2 = piVar3[2];
            uVar6 = 0;
          }
        }
        uVar6 = FUN_00432170(iVar5,iVar5,iVar2,uVar6);
        FUN_004324b0(uVar6);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar4 < DAT_005b9034);
  }
  return;
}

