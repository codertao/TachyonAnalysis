
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4230(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x28);
  pfVar7 = *(float **)(param_2 + 0x40);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x1a) == 0) {
    uVar6 = 0;
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        *pfVar7 = DAT_0062c100 * pfVar7[9] + (float)iVar1;
        pfVar7[1] = _DAT_0062c110 * pfVar7[10] + (float)iVar2;
        fVar5 = _DAT_0062c120 * pfVar7[0xb] + (float)iVar3;
        pfVar7[2] = fVar5;
        local_c = (int)(longlong)ROUND(fVar5);
        if (DAT_00668fc8 == 0) {
          fVar5 = 0.0;
        }
        else if (local_c < DAT_00668fb4) {
          if (local_c < DAT_00668fb8) {
            fVar5 = 0.0;
          }
          else {
            fVar5 = (float)((int)((ulonglong)
                                  ((longlong)(local_c - DAT_00668fb8) * (longlong)DAT_00668fc4) >>
                                 0x20) << 0x18);
          }
        }
        else {
          fVar5 = -1.7014118e+38;
        }
        pfVar7[6] = fVar5;
        *(undefined2 *)(pfVar7 + 7) = 1;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 0xc;
      } while (uVar6 < *(uint *)(param_2 + 0x28));
      return;
    }
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        *pfVar7 = DAT_0062c100 * pfVar7[9] + (float)iVar1;
        pfVar7[1] = _DAT_0062c110 * pfVar7[10] + (float)iVar2;
        fVar5 = _DAT_0062c120 * pfVar7[0xb] + (float)iVar3;
        pfVar7[2] = fVar5;
        local_c = (int)(longlong)ROUND(fVar5);
        if (DAT_00668fc8 == 0) {
          fVar5 = 0.0;
        }
        else if (local_c < DAT_00668fb4) {
          if (local_c < DAT_00668fb8) {
            fVar5 = 0.0;
          }
          else {
            fVar5 = (float)((int)((ulonglong)
                                  ((longlong)(local_c - DAT_00668fb8) * (longlong)DAT_00668fc4) >>
                                 0x20) << 0x18);
          }
        }
        else {
          fVar5 = -1.7014118e+38;
        }
        pfVar7[6] = fVar5;
        uVar4 = FUN_004baeb0(pfVar7,*(undefined2 *)(param_1 + 0x1a));
        *(undefined2 *)(pfVar7 + 7) = uVar4;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 0xc;
      } while (uVar6 < *(uint *)(param_2 + 0x28));
    }
  }
  return;
}

