
/* refine: mesh attach points (+0x50, n +0x38) -> world, written through the loader-patched pointer
   in each record */

void Part_TransformAttachPoints(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_8;
  
  iVar1 = *param_1;
  iVar2 = param_1[10];
  piVar4 = *(int **)(iVar1 + 0x50);
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x38) != 0) {
    do {
      piVar3 = (int *)piVar4[3];
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * GLBL_3VEC3_output[6] +
                           (float)*piVar4 * GLBL_3VEC3_output[0] +
                           (float)piVar4[1] * GLBL_3VEC3_output[3]);
      *piVar3 = local_8 + *(int *)(iVar2 + 0x30);
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * GLBL_3VEC3_output[7] +
                           (float)*piVar4 * GLBL_3VEC3_output[1] +
                           (float)piVar4[1] * GLBL_3VEC3_output[4]);
      piVar3[1] = local_8 + *(int *)(iVar2 + 0x34);
      local_8 = (int)(longlong)
                     ROUND((float)piVar4[2] * GLBL_3VEC3_output[8] +
                           (float)*piVar4 * GLBL_3VEC3_output[2] +
                           (float)piVar4[1] * GLBL_3VEC3_output[5]);
      piVar3[2] = local_8 + *(int *)(iVar2 + 0x38);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar5 < *(uint *)(iVar1 + 0x38));
  }
  return;
}

