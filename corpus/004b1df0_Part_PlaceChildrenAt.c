
/* refine: Part_PlaceChildren with origin from part matrix block (+0x28 -> +0x30..) */

void Part_PlaceChildrenAt(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int local_14;
  
  if (param_1[9] != 0) {
    iVar1 = param_1[10];
    iVar2 = *(int *)(iVar1 + 0x30);
    iVar3 = *(int *)(iVar1 + 0x34);
    iVar1 = *(int *)(iVar1 + 0x38);
    uVar6 = 0;
    if (*(char *)((int)param_1 + 0x1b) != '\0') {
      piVar4 = *(int **)(*param_1 + 0x4c);
      piVar5 = (int *)(*(int *)(param_1[9] + 0x28) + 0x34);
      do {
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * GLBL_3VEC3_output[3] +
                              (float)*piVar4 * GLBL_3VEC3_output[0] +
                              (float)piVar4[2] * GLBL_3VEC3_output[6]);
        piVar5[-1] = local_14 + iVar2;
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * GLBL_3VEC3_output[4] +
                              (float)*piVar4 * GLBL_3VEC3_output[1] +
                              (float)piVar4[2] * GLBL_3VEC3_output[7]);
        *piVar5 = local_14 + iVar3;
        local_14 = (int)(longlong)
                        ROUND((float)piVar4[1] * GLBL_3VEC3_output[5] +
                              (float)*piVar4 * GLBL_3VEC3_output[2] +
                              (float)piVar4[2] * GLBL_3VEC3_output[8]);
        piVar5[1] = local_14 + iVar1;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 3;
        piVar5 = piVar5 + 0xf;
      } while (uVar6 < *(byte *)((int)param_1 + 0x1b));
    }
  }
  return;
}

