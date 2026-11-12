
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SceneMember_InitPose(int param_1,int param_2)

{
  vec3 *fvec;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float local_18 [6];
  
  uVar5 = GLBL_SOME_CONTEXT;
  if ((*(uint *)(param_2 + 0x34) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x144);
      goto LAB_0045c108;
    }
    uVar5 = Replica_FindByLabel(*(undefined4 *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 0x30) = uVar5;
LAB_0045c108:
  if (*(int *)(param_2 + 0x30) != 0) {
    if ((*(byte *)(param_2 + 0x34) & 4) != 0) {
      *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x30);
    }
    SceneMember_SnapToEnt(param_2);
    iVar1 = *(int *)(param_2 + 0x30);
    if ((*(byte *)(param_2 + 0x34) & 8) != 0) {
      iVar2 = *(int *)(param_1 + 0x144);
      call_Math_SinCos3(local_18,*(int *)(iVar2 + 0x4c),*(int *)(iVar2 + 0x50),
                        *(int *)(iVar2 + 0x54));
      call_Rot_SetSinCos(local_18);
      fvec = (vec3 *)(iVar1 + 0x34);
      fvec->x = *(int *)(param_2 + 0x14);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_2 + 0x1c);
      some_rotate_by_global(fvec,fvec);
      iVar3 = *(int *)(iVar1 + 0x38);
      iVar4 = *(int *)(iVar1 + 0x3c);
      fvec->x = fvec->x + *(int *)(iVar2 + 0x34);
      *(int *)(iVar1 + 0x38) = iVar3 + *(int *)(iVar2 + 0x38);
      *(int *)(iVar1 + 0x3c) = iVar4 + *(int *)(iVar2 + 0x3c);
      *(int *)(iVar1 + 0x4c) = *(int *)(param_2 + 8) + *(int *)(iVar2 + 0x4c);
      *(int *)(iVar1 + 0x50) = *(int *)(param_2 + 0xc) + *(int *)(iVar2 + 0x50);
      *(int *)(iVar1 + 0x54) = *(int *)(param_2 + 0x10) + *(int *)(iVar2 + 0x54);
    }
    if (*(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x144)) {
      _DAT_0058f1c8 = param_2;
    }
  }
  return;
}

