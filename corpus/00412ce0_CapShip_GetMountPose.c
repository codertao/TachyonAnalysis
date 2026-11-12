
/* sweep */

void CapShip_GetMountPose(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = *(int *)(param_1 + 0x34);
  param_2[1] = *(int *)(param_1 + 0x38);
  param_2[2] = *(int *)(param_1 + 0x3c);
  param_2[3] = *(int *)(param_1 + 0x4c);
  param_2[4] = *(int *)(param_1 + 0x50);
  param_2[5] = *(int *)(param_1 + 0x54);
  iVar2 = PartList_FindFlag(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x154),0x40);
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x7c), iVar1 != 0)) {
    Ent_UpdatePartTransforms(iVar1 + 0x18);
    iVar2 = Pak_GetAttachPoint(*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar2 + 0x3c));
    *param_2 = *(int *)(iVar1 + 0x34) + **(int **)(iVar2 + 0xc);
    param_2[1] = *(int *)(*(int *)(iVar2 + 0xc) + 4) + *(int *)(iVar1 + 0x38);
    param_2[2] = *(int *)(*(int *)(iVar2 + 0xc) + 8) + *(int *)(iVar1 + 0x3c);
    param_2[3] = *(int *)(iVar1 + 0x4c);
    param_2[4] = *(int *)(iVar1 + 0x50);
    param_2[5] = *(int *)(iVar1 + 0x54);
  }
  return;
}

