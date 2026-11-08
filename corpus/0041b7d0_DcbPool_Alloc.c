
/* pop a DCB from a pool free-list; assign id; dec free count */

undefined4 * DcbPool_Alloc(int param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_18 [6];
  
  puVar1 = (undefined4 *)something_list_related_get_next(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = puVar1;
    puVar6 = local_18;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    puVar5 = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = local_18;
    puVar6 = puVar1;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(uint **)(param_1 + 0x24) != (uint *)0x0) {
      puVar1[0x1e] = **(uint **)(param_1 + 0x24) | 1;
      **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + 2;
    }
    *(undefined2 *)((int)puVar1 + 0x76) = param_2;
    puVar1[0x19] = param_3;
  }
  return puVar1;
}

