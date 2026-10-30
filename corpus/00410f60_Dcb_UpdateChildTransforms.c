
/* update attached sub-object transforms (child chain via +0xe0); recompute each child world
   posDelta +0xa0 = newPos-oldPos */

void Dcb_UpdateChildTransforms(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  DAT_005b9810 = param_1;
  *(int *)(*(int *)(param_1 + 0xe4) + 0x7c) = param_1;
  for (iVar2 = *(int *)(param_1 + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xe0)) {
    *(int *)(*(int *)(iVar2 + 0xe4) + 0x7c) = iVar2;
  }
  FUN_00408ea0(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x154),param_1 + 0x4c);
  for (iVar2 = *(int *)(param_1 + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xe0)) {
    iVar3 = *(int *)(iVar2 + 0x34);
    iVar4 = *(int *)(iVar2 + 0x38);
    iVar5 = *(int *)(iVar2 + 0x3c);
    if ((*(byte *)(*(int *)(iVar2 + 0xe4) + 0x34) & 6) == 0) {
      FUN_00408ef0(iVar2,*(int *)(iVar2 + 0xe4),param_1);
    }
    else {
      puVar1 = (undefined4 *)(iVar2 + 0x4c);
      uVar6 = *puVar1;
      uVar7 = *(undefined4 *)(iVar2 + 0x50);
      uVar8 = *(undefined4 *)(iVar2 + 0x54);
      FUN_00408ef0(iVar2,*(undefined4 *)(iVar2 + 0xe4),param_1);
      *(undefined4 *)(iVar2 + 0xf4) = *puVar1;
      *(undefined4 *)(iVar2 + 0xf8) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined4 *)(iVar2 + 0xfc) = *(undefined4 *)(iVar2 + 0x54);
      *puVar1 = uVar6;
      *(undefined4 *)(iVar2 + 0x50) = uVar7;
      *(undefined4 *)(iVar2 + 0x54) = uVar8;
    }
    *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0x34) - iVar3;
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0x38) - iVar4;
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0x3c) - iVar5;
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  }
  return;
}

