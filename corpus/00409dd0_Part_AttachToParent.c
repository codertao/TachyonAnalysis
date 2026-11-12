
/* sweep */

void Part_AttachToParent(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 != 0) {
    Ent_UpdatePartTransforms(param_3 + 0x18);
    Vec_AnglesToward((vec3 *)(param_2 + 0x10),(vec3 *)(DAT_005b9810 + 0x4c),(vec3 *)(param_1 + 0x4c)
                    );
    iVar2 = Pak_GetAttachPoint(*(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_2 + 0x20));
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(param_1 + 0x34) = *(int *)(param_3 + 0x34) + *piVar1;
    *(int *)(param_1 + 0x38) = piVar1[1] + *(int *)(param_3 + 0x38);
    *(int *)(param_1 + 0x3c) = piVar1[2] + *(int *)(param_3 + 0x3c);
    Ent_UpdatePartTransforms(param_1 + 0x18);
    iVar2 = Pak_GetAttachPoint(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x24));
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - *piVar1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - piVar1[1];
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - piVar1[2];
  }
  return;
}

