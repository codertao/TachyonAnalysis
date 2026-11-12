
/* refine: child-part variant (origin from part +0x28 -> +0x30..) */

void SubPart_TransformVerts(byte *param_1,int *param_2)

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
          *pfVar6 = GLBL_3VEC3_output[0] * pfVar6[9] +
                    GLBL_3VEC3_output[6] * pfVar6[0xb] + GLBL_3VEC3_output[3] * pfVar6[10] +
                    (float)*(int *)(iVar2 + 0x30);
          pfVar6[1] = GLBL_3VEC3_output[1] * pfVar6[9] +
                      GLBL_3VEC3_output[7] * pfVar6[0xb] + GLBL_3VEC3_output[4] * pfVar6[10] +
                      (float)*(int *)(iVar2 + 0x34);
          fVar4 = GLBL_3VEC3_output[2] * pfVar6[9] +
                  GLBL_3VEC3_output[8] * pfVar6[0xb] + GLBL_3VEC3_output[5] * pfVar6[10] +
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
          *pfVar6 = GLBL_3VEC3_output[0] * pfVar6[9] +
                    GLBL_3VEC3_output[6] * pfVar6[0xb] + GLBL_3VEC3_output[3] * pfVar6[10] +
                    (float)*(int *)(iVar2 + 0x30);
          pfVar6[1] = GLBL_3VEC3_output[1] * pfVar6[9] +
                      GLBL_3VEC3_output[7] * pfVar6[0xb] + GLBL_3VEC3_output[4] * pfVar6[10] +
                      (float)*(int *)(iVar2 + 0x34);
          fVar4 = GLBL_3VEC3_output[2] * pfVar6[9] +
                  GLBL_3VEC3_output[8] * pfVar6[0xb] + GLBL_3VEC3_output[5] * pfVar6[10] +
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
          uVar3 = Frustum_PointInside(pfVar6,*(undefined2 *)(param_1 + 0x1a));
          *(undefined2 *)(pfVar6 + 7) = uVar3;
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar6 + 0xc;
        } while (uVar5 < *(uint *)(iVar1 + 0x28));
        return;
      }
    }
  }
  else {
    SubPart_TransformVertsNoRot(param_1,param_2);
  }
  return;
}

