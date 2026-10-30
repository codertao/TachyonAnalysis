
void FUN_00492400(uint *param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_4;
  
  bVar2 = false;
  local_4 = 0;
  bVar1 = false;
  if (((DAT_00565a34._3_1_ == '\0') && (*(code **)(DAT_005b1dc4 + 0x90) != (code *)0x0)) &&
     (iVar3 = (**(code **)(DAT_005b1dc4 + 0x90))(), iVar3 != 0)) {
    bVar1 = true;
  }
  piVar7 = param_3;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = -1;
    piVar7 = piVar7 + 1;
  }
  iVar4 = 0;
  piVar7 = &DAT_005b3a60;
  iVar3 = DAT_00565a6c;
  do {
    if ((&DAT_005659b4)[iVar4] == '\0') {
joined_r0x004924b0:
      if (iVar4 == iVar3) {
        bVar2 = true;
      }
    }
    else if ((iVar4 != DAT_00565890) || (DAT_00565a38 != '\0')) {
      if ((bVar1) && (*piVar7 != DAT_005b3a24)) goto joined_r0x004924b0;
      param_3[*param_1] = iVar4;
      if (iVar4 == DAT_00565a6c) {
        *param_2 = *param_1;
      }
      *param_1 = *param_1 + 1;
      iVar3 = DAT_00565a6c;
    }
    piVar7 = piVar7 + 0x11;
    iVar4 = iVar4 + 1;
  } while ((int)piVar7 < 0x5b5c60);
  uVar6 = *param_1;
  uVar5 = 0;
  uVar8 = 0;
  piVar7 = param_3;
  if (uVar6 != 0) {
    do {
      if (*piVar7 == DAT_0056589c) {
        local_4 = uVar5;
      }
      uVar5 = uVar5 + 1;
      uVar8 = local_4;
      piVar7 = piVar7 + 1;
    } while (uVar5 < uVar6);
  }
  if (bVar2) {
    uVar6 = uVar6 - 1;
    if (uVar6 != 0) {
      piVar7 = param_3 + uVar6;
      do {
        if (*piVar7 < iVar3) {
          DAT_00565a6c = param_3[uVar6];
          *param_2 = uVar6;
          goto LAB_0049251a;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + -1;
      } while (uVar6 != 0);
    }
    DAT_00565a6c = 0;
  }
LAB_0049251a:
  uVar6 = *param_1;
  if ((int)uVar6 < 0xd) {
    *param_2 = 0;
    return;
  }
  uVar5 = *param_2;
  iVar3 = uVar5 + 0xc;
  if ((int)uVar6 <= iVar3) {
    iVar3 = iVar3 - uVar6;
  }
  if (iVar3 < (int)uVar5) {
    if ((int)uVar8 <= iVar3) {
      DAT_00565a70 = 0;
      return;
    }
    if ((int)uVar5 <= (int)uVar8) {
      DAT_00565a70 = 0;
      return;
    }
    if (DAT_00565a70 < 1) {
      *param_2 = uVar8;
      DAT_00565a6c = DAT_0056589c;
      DAT_00565a70 = 0;
      return;
    }
    if (0xb < (int)uVar8) {
      *param_2 = uVar8 - 0xc;
      DAT_00565a6c = param_3[uVar8 - 0xc];
      DAT_00565a70 = 0;
      return;
    }
  }
  else {
    if (((int)uVar5 <= (int)uVar8) && ((int)uVar8 <= iVar3)) {
      DAT_00565a70 = 0;
      return;
    }
    if (DAT_00565a70 < 1) {
      *param_2 = uVar8;
      DAT_00565a6c = DAT_0056589c;
      DAT_00565a70 = 0;
      return;
    }
    if (0xb < (int)uVar8) {
      *param_2 = uVar8 - 0xc;
      DAT_00565a6c = param_3[uVar8 - 0xc];
      DAT_00565a70 = 0;
      return;
    }
  }
  uVar8 = (uVar6 - 0xc) + uVar8;
  *param_2 = uVar8;
  DAT_00565a6c = param_3[uVar8];
  DAT_00565a70 = 0;
  return;
}

