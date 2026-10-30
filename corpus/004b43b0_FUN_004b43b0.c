
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b43b0(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  float fVar12;
  uint uVar13;
  float *pfVar14;
  
  if (((*param_1 & 4) == 0) && ((*(byte *)(param_2 + 0x10) & 0x40) == 0)) {
    iVar1 = *(int *)(param_1 + 0x28);
    pfVar14 = *(float **)(param_3 + 0x40);
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x30);
    if (*(short *)(param_1 + 0x1a) == 0) {
      uVar13 = 0;
      if (*(int *)(param_3 + 0x28) != 0) {
        do {
          fVar9 = _DAT_0062c110;
          fVar7 = DAT_0062c104;
          fVar12 = pfVar14[0xb];
          fVar5 = pfVar14[10];
          fVar6 = pfVar14[9];
          *pfVar14 = (float)iVar1 +
                     _DAT_0062c118 * fVar12 + _DAT_0062c10c * fVar5 + DAT_0062c100 * fVar6;
          fVar10 = _DAT_0062c114;
          fVar8 = _DAT_0062c108;
          pfVar14[1] = (float)iVar2 + _DAT_0062c11c * fVar12 + fVar9 * fVar5 + fVar7 * fVar6;
          fVar12 = (float)iVar3 + fVar8 * fVar6 + fVar10 * fVar5 + _DAT_0062c120 * fVar12;
          iVar4 = (int)ROUND(fVar12);
          pfVar14[2] = fVar12;
          *(undefined2 *)(pfVar14 + 7) = 1;
          if (DAT_00668fc8 == 0) {
            fVar12 = 0.0;
          }
          else if (iVar4 < DAT_00668fb4) {
            if (iVar4 < DAT_00668fb8) {
              fVar12 = 0.0;
            }
            else {
              fVar12 = (float)((int)((ulonglong)
                                     ((longlong)(iVar4 - DAT_00668fb8) * (longlong)DAT_00668fc4) >>
                                    0x20) << 0x18);
            }
          }
          else {
            fVar12 = -1.7014118e+38;
          }
          pfVar14[6] = fVar12;
          uVar13 = uVar13 + 1;
          pfVar14 = pfVar14 + 0xc;
        } while (uVar13 < *(uint *)(param_3 + 0x28));
        return;
      }
    }
    else {
      uVar13 = 0;
      if (*(int *)(param_3 + 0x28) != 0) {
        do {
          fVar9 = _DAT_0062c110;
          fVar7 = DAT_0062c104;
          fVar12 = pfVar14[0xb];
          fVar5 = pfVar14[10];
          fVar6 = pfVar14[9];
          *pfVar14 = (float)iVar1 +
                     _DAT_0062c118 * fVar12 + _DAT_0062c10c * fVar5 + DAT_0062c100 * fVar6;
          fVar10 = _DAT_0062c114;
          fVar8 = _DAT_0062c108;
          pfVar14[1] = (float)iVar2 + _DAT_0062c11c * fVar12 + fVar9 * fVar5 + fVar7 * fVar6;
          fVar12 = (float)iVar3 + fVar8 * fVar6 + fVar10 * fVar5 + _DAT_0062c120 * fVar12;
          iVar4 = (int)ROUND(fVar12);
          pfVar14[2] = fVar12;
          uVar11 = FUN_004baeb0(pfVar14,*(undefined2 *)(param_1 + 0x1a));
          *(undefined2 *)(pfVar14 + 7) = uVar11;
          if (DAT_00668fc8 == 0) {
            fVar12 = 0.0;
          }
          else if (iVar4 < DAT_00668fb4) {
            if (iVar4 < DAT_00668fb8) {
              fVar12 = 0.0;
            }
            else {
              fVar12 = (float)((int)((ulonglong)
                                     ((longlong)(iVar4 - DAT_00668fb8) * (longlong)DAT_00668fc4) >>
                                    0x20) << 0x18);
            }
          }
          else {
            fVar12 = -1.7014118e+38;
          }
          pfVar14[6] = fVar12;
          uVar13 = uVar13 + 1;
          pfVar14 = pfVar14 + 0xc;
        } while (uVar13 < *(uint *)(param_3 + 0x28));
        return;
      }
    }
  }
  else {
    FUN_004b4230(param_1,param_3);
  }
  return;
}

