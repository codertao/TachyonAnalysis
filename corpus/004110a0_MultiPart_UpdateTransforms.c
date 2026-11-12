
/* sweep */

void MultiPart_UpdateTransforms(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  DAT_005b9810 = param_1;
  *(int *)(*(int *)(param_1 + 0xe0) + 0x7c) = param_1;
  for (iVar2 = *(int *)(param_1 + 0xd8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xd8)) {
    *(int *)(*(int *)(iVar2 + 0xe0) + 0x7c) = iVar2;
  }
  PartList_RotateAll(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x154),param_1 + 0x4c);
  for (iVar2 = *(int *)(param_1 + 0xd8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xd8)) {
    piVar1 = (int *)(iVar2 + 0x34);
    iVar3 = *piVar1;
    iVar4 = *(int *)(iVar2 + 0x38);
    iVar5 = *(int *)(iVar2 + 0x3c);
    iVar6 = *(int *)(iVar2 + 0xf4);
    if (iVar6 == 0) {
      Part_UpdateWorldTransform(iVar2,*(undefined4 *)(iVar2 + 0xe0),param_1);
    }
    else {
      *piVar1 = *(int *)(iVar6 + 0x34);
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar6 + 0x38);
      *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar6 + 0x3c);
      if (*(short *)(iVar6 + 0x76) == 0xf) {
        puVar7 = (undefined4 *)(iVar6 + 0xf4);
      }
      else {
        puVar7 = (undefined4 *)(iVar6 + 0x4c);
      }
      *(undefined4 *)(iVar2 + 0x4c) = *puVar7;
      *(undefined4 *)(iVar2 + 0x50) = puVar7[1];
      *(undefined4 *)(iVar2 + 0x54) = puVar7[2];
    }
    *(int *)(iVar2 + 0xa0) = *piVar1 - iVar3;
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0x38) - iVar4;
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0x3c) - iVar5;
  }
  return;
}

