
/* sweep */

void Part_GetAttachWorldPos(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  Ent_UpdatePartTransforms(param_1 + 0x18);
  iVar2 = Pak_GetAttachPoint(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x3c));
  piVar1 = *(int **)(iVar2 + 0xc);
  *param_3 = *(int *)(param_1 + 0x34) + *piVar1;
  param_3[1] = *(int *)(param_1 + 0x38) + piVar1[1];
  param_3[2] = *(int *)(param_1 + 0x3c) + piVar1[2];
  return;
}

