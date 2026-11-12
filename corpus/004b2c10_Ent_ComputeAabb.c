
/* refine: collision AABB extended by all transformed LOD0 vertices (SectorMap_LinkObject) */

void Ent_ComputeAabb(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int local_38;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  piVar3 = param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    Ent_CollisionAabb(param_1,param_2,param_3);
    Ent_UpdatePartTransforms(param_1);
    Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x34));
    iVar4 = Model_GetLod0Mesh(*(undefined4 *)(param_1 + 0x40));
    piVar6 = (int *)(iVar4 + 0xc);
    param_2 = (int *)0x0;
    if (*(int *)(iVar4 + 4) != 0) {
      do {
        iVar1 = *piVar6;
        iVar2 = piVar6[10];
        param_1 = 0;
        if (*(int *)(iVar1 + 0x28) != 0) {
          pfVar9 = (float *)(*(int *)(iVar1 + 0x40) + 0x28);
          do {
            local_38 = (int)(longlong)ROUND(pfVar9[-1]);
            local_30.x = local_38;
            local_38 = (int)(longlong)ROUND(*pfVar9);
            local_30.y = local_38;
            local_38 = (int)(longlong)ROUND(pfVar9[1]);
            local_30.z = local_38;
            some_rotate_by_global(&local_30,&local_24);
            iVar5 = *(int *)(iVar2 + 0x30) + local_24.x;
            iVar7 = *(int *)(iVar2 + 0x34) + local_24.y;
            iVar8 = *(int *)(iVar2 + 0x38) + local_24.z;
            iVar10 = *piVar3;
            if (iVar5 < *piVar3) {
              iVar10 = iVar5;
            }
            *piVar3 = iVar10;
            iVar10 = piVar3[1];
            if (iVar7 < piVar3[1]) {
              iVar10 = iVar7;
            }
            piVar3[1] = iVar10;
            iVar10 = piVar3[2];
            if (iVar8 < piVar3[2]) {
              iVar10 = iVar8;
            }
            piVar3[2] = iVar10;
            if (iVar5 <= *param_3) {
              iVar5 = *param_3;
            }
            *param_3 = iVar5;
            iVar5 = param_3[1];
            if (param_3[1] < iVar7) {
              iVar5 = iVar7;
            }
            param_3[1] = iVar5;
            if (iVar8 <= param_3[2]) {
              iVar8 = param_3[2];
            }
            param_3[2] = iVar8;
            param_1 = param_1 + 1;
            pfVar9 = pfVar9 + 0xc;
          } while (param_1 < *(uint *)(iVar1 + 0x28));
        }
        param_2 = (int *)((int)param_2 + 1);
        piVar6 = piVar6 + 0xb;
      } while (param_2 < *(uint *)(iVar4 + 4));
    }
  }
  return;
}

