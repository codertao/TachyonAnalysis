
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b47b0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int local_14;
  int local_c;
  
  if (((*param_1 & 4) == 0) && ((*(byte *)(param_2 + 4) & 0x40) == 0)) {
    iVar1 = *param_2;
    iVar2 = param_2[10];
    pfVar6 = *(float **)(iVar1 + 0x40);
    if (*(short *)(param_1 + 0x1a) == 0) {
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x28) != 0) {
        do {
          *pfVar6 = DAT_0062c100 * pfVar6[9] +
                    _DAT_0062c118 * pfVar6[0xb] + _DAT_0062c10c * pfVar6[10] +
                    (float)*(int *)(iVar2 + 0x30);
          pfVar6[1] = DAT_0062c104 * pfVar6[9] +
                      _DAT_0062c11c * pfVar6[0xb] + _DAT_0062c110 * pfVar6[10] +
                      (float)*(int *)(iVar2 + 0x34);
          fVar4 = _DAT_0062c108 * pfVar6[9] +
                  _DAT_0062c120 * pfVar6[0xb] + _DAT_0062c114 * pfVar6[10] +
                  (float)*(int *)(iVar2 + 0x38);
          pfVar6[2] = fVar4;
          local_c = (int)(longlong)ROUND(fVar4);
          if (DAT_00668fc8 == 0) {
            fVar4 = 0.0;
          }
          else if (local_c < DAT_00668fb4) {
            if (local_c < DAT_00668fb8) {
              fVar4 = 0.0;
            }
            else {
              fVar4 = (float)((int)((ulonglong)
                                    ((longlong)(local_c - DAT_00668fb8) * (longlong)DAT_00668fc4) >>
                                   0x20) << 0x18);
            }
          }
          else {
            fVar4 = -1.7014118e+38;
          }
          pfVar6[6] = fVar4;
          *(undefined2 *)(pfVar6 + 7) = 1;
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar6 + 0xc;
        } while (uVar5 < *(uint *)(iVar1 + 0x28));
        return;
      }
    }
    else {
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x28) != 0) {
        do {
          *pfVar6 = DAT_0062c100 * pfVar6[9] +
                    _DAT_0062c118 * pfVar6[0xb] + _DAT_0062c10c * pfVar6[10] +
                    (float)*(int *)(iVar2 + 0x30);
          pfVar6[1] = DAT_0062c104 * pfVar6[9] +
                      _DAT_0062c11c * pfVar6[0xb] + _DAT_0062c110 * pfVar6[10] +
                      (float)*(int *)(iVar2 + 0x34);
          fVar4 = _DAT_0062c108 * pfVar6[9] +
                  _DAT_0062c120 * pfVar6[0xb] + _DAT_0062c114 * pfVar6[10] +
                  (float)*(int *)(iVar2 + 0x38);
          pfVar6[2] = fVar4;
          local_14 = (int)(longlong)ROUND(fVar4);
          if (DAT_00668fc8 == 0) {
            fVar4 = 0.0;
          }
          else if (local_14 < DAT_00668fb4) {
            if (local_14 < DAT_00668fb8) {
              fVar4 = 0.0;
            }
            else {
              fVar4 = (float)((int)((ulonglong)
                                    ((longlong)(local_14 - DAT_00668fb8) * (longlong)DAT_00668fc4)
                                   >> 0x20) << 0x18);
            }
          }
          else {
            fVar4 = -1.7014118e+38;
          }
          pfVar6[6] = fVar4;
          uVar3 = FUN_004baeb0(pfVar6,*(undefined2 *)(param_1 + 0x1a));
          *(undefined2 *)(pfVar6 + 7) = uVar3;
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar6 + 0xc;
        } while (uVar5 < *(uint *)(iVar1 + 0x28));
        return;
      }
    }
  }
  else {
    FUN_004b4630(param_1,param_2);
  }
  return;
}

