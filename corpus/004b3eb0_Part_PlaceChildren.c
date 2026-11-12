
/* refine: transforms the part's attach points by the current matrix + origin into child part
   positions (+0x30..) */

void Part_PlaceChildren(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int local_8;
  
  if (param_1[9] != 0) {
    uVar3 = 0;
    if (*(char *)((int)param_1 + 0x1b) != '\0') {
      piVar1 = *(int **)(*param_1 + 0x4c);
      piVar2 = (int *)(*(int *)(param_1[9] + 0x28) + 0x34);
      do {
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * GLBL_3VEC3_output[6] +
                             (float)*piVar1 * GLBL_3VEC3_output[0] +
                             (float)piVar1[1] * GLBL_3VEC3_output[3]);
        piVar2[-1] = local_8 + *param_2;
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * GLBL_3VEC3_output[7] +
                             (float)*piVar1 * GLBL_3VEC3_output[1] +
                             (float)piVar1[1] * GLBL_3VEC3_output[4]);
        *piVar2 = local_8 + param_2[1];
        local_8 = (int)(longlong)
                       ROUND((float)piVar1[2] * GLBL_3VEC3_output[8] +
                             (float)*piVar1 * GLBL_3VEC3_output[2] +
                             (float)piVar1[1] * GLBL_3VEC3_output[5]);
        piVar2[1] = local_8 + param_2[2];
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 3;
        piVar2 = piVar2 + 0xf;
      } while (uVar3 < *(byte *)((int)param_1 + 0x1b));
    }
  }
  return;
}

