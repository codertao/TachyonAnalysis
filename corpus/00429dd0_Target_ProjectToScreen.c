
/* sweep */

void Target_ProjectToScreen
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  vec3 *fvec;
  undefined4 uVar3;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar2 = GLBL_SOME_CONTEXT;
  uVar3 = 0;
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78);
    if (pcVar1 != (code *)0x0) {
      fvec = (vec3 *)(*pcVar1)(param_1,0xb,0);
      if (fvec != (vec3 *)0x0) {
        Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
        some_rotate_by_global(fvec,&local_24);
      }
      uVar3 = (*pcVar1)(param_1,0x10,0);
    }
    Rot_FromAnglesInv(local_18,iVar2 + 0x4c);
    iStack_30 = (*(int *)(param_1 + 0x34) - *(int *)(iVar2 + 0x34)) + local_24.x;
    iStack_2c = (*(int *)(param_1 + 0x38) - *(int *)(iVar2 + 0x38)) + local_24.y;
    iStack_28 = (*(int *)(param_1 + 0x3c) - *(int *)(iVar2 + 0x3c)) + local_24.z;
    Rot_ApplyCurrent(&iStack_30,&iStack_30);
    View_ProjectPointFixed(&iStack_30,&iStack_38);
    iStack_30 = Ent_GetTargetRadius(param_1);
    View_ProjectPointFixed(&iStack_30,aiStack_40);
    aiStack_40[0] = aiStack_40[0] - DAT_00604474 >> 7;
    if (-1 < iStack_28) {
      if (aiStack_40[0] < 0x10) {
        aiStack_40[0] = 0x10;
      }
      (*(code *)(&PTR_TargetBox_DrawA_005365b8)[param_5])
                (iStack_38 >> 7,iStack_34 >> 7,aiStack_40[0] + param_3,param_1,param_2,param_4,uVar3
                 ,0x10000);
    }
  }
  return;
}

