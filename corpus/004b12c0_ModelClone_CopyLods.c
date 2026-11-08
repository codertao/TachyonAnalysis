
/* copy LOD table + groups, MeshClone_Build each part mesh */

undefined1 * ModelClone_CopyLods(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *local_c;
  uint local_8;
  
  iVar5 = *(int *)(param_3 + 0x2c);
  uVar4 = iVar5 * 0x14;
  if (iVar5 != 0) {
    piVar1 = (int *)(*(int *)(param_3 + 0x90) + 4);
    do {
      uVar4 = uVar4 + *(int *)(*piVar1 + 0x20) * *(int *)(*piVar1 + 4);
      piVar1 = piVar1 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 **)(param_2 + 0x90) = param_1;
  puVar6 = *(undefined4 **)(param_3 + 0x90);
  puVar8 = param_1;
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  param_1 = (undefined4 *)((int)param_1 + uVar4);
  local_8 = 0;
  if (*(int *)(param_3 + 0x2c) != 0) {
    piVar1 = (int *)(*(int *)(param_3 + 0x90) + 4);
    local_c = (int *)(*(int *)(param_2 + 0x90) + 4);
    do {
      iVar3 = (*(int *)(param_2 + 0x90) - *(int *)(param_3 + 0x90)) + *piVar1;
      *local_c = iVar3;
      iVar5 = *piVar1;
      iVar3 = *(int *)(iVar3 + 8) + iVar3;
      iVar7 = *(int *)(iVar5 + 8) + iVar5;
      uVar4 = 0;
      if (*(int *)(iVar5 + 4) != 0) {
        do {
          if (*(int *)(iVar7 + 0x20) != 0) {
            *(int *)(iVar3 + 0x20) = (*(int *)(iVar7 + 0x20) - iVar7) + iVar3;
          }
          if (*(int *)(iVar7 + 0x24) != 0) {
            *(int *)(iVar3 + 0x24) = (*(int *)(iVar7 + 0x24) - iVar7) + iVar3;
          }
          param_1 = (undefined4 *)MeshClone_Build(param_1,iVar3,iVar7);
          uVar4 = uVar4 + 1;
          iVar7 = iVar7 + 0x2c;
          iVar3 = iVar3 + 0x2c;
        } while (uVar4 < *(uint *)(iVar5 + 4));
      }
      local_8 = local_8 + 1;
      piVar1 = piVar1 + 2;
      local_c = local_c + 2;
    } while (local_8 < *(uint *)(param_3 + 0x2c));
  }
  return (undefined1 *)param_1;
}

