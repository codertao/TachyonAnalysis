
void FUN_00466c60(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  uVar2 = 0;
  if (DAT_00589798 != 0) {
    piVar5 = DAT_0058979c + 1;
    do {
      *piVar5 = 0;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar2 < DAT_00589798);
  }
  uVar2 = DAT_00589798;
  if (DAT_0062c0e8 < DAT_00589798) {
    uVar2 = DAT_0062c0e8;
  }
  piVar5 = &DAT_006240e8;
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar1 = *(int *)(*piVar5 + 0x54);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 1;
      FUN_004a80a0(*(undefined4 *)(iVar1 + 8),*piVar5 + 0x18,&DAT_00589788);
    }
    piVar5 = piVar5 + 2;
  }
  piVar5 = &DAT_006240e8;
  piVar3 = DAT_0058979c;
  for (; DAT_0058979c = piVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
    if ((*(int *)(*piVar5 + 0x54) == 0) && (piVar3 = (int *)FUN_00466c30(), piVar3 != (int *)0x0)) {
      if (*piVar3 != 0) {
        *(undefined4 *)(*piVar3 + 0x54) = 0;
      }
      *(int **)(*piVar5 + 0x54) = piVar3;
      piVar3[1] = 1;
      *piVar3 = *piVar5;
      FUN_004a82a0(piVar3[2],*piVar5 + 0x18,&DAT_00589788);
    }
    piVar5 = piVar5 + 2;
    piVar3 = DAT_0058979c;
  }
  uVar2 = 0;
  if (DAT_00589798 != 0) {
    do {
      if (piVar3[1] == 0) {
        if (*piVar3 != 0) {
          *(undefined4 *)(*piVar3 + 0x54) = 0;
          *piVar3 = 0;
        }
        FUN_004a82f0(piVar3[2],&DAT_00589788);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < DAT_00589798);
  }
  return;
}

