
/* sweep: reaches gate -> Sped_LeaveWorld */

void AiThink_GateApproach(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  vec3 avStack_18 [2];
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    (**(code **)(*(int *)(iVar2 + 0x8c) + 0x58))(iVar2,4,avStack_18);
    Vec_DirAngles((vec3 *)(param_1 + 0x34),avStack_18,param_1 + 0xdc);
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),avStack_18);
    if (uVar1 < 0x64000) {
      Sped_LeaveWorld(param_1);
      iVar2 = Ent_DockIsAvailable(*(undefined4 *)(param_1 + 0x90));
      if (iVar2 != 0) {
        uStack_2c = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
        uStack_1c = *(undefined4 *)(iVar2 + 0x20);
        uStack_30 = 1;
        uStack_20 = 1;
        uStack_28 = 0xd;
        uStack_24 = 0;
        Mission_PostEvent(&uStack_30,*(undefined4 *)(param_1 + 100));
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined2 *)(param_1 + 0x312) = 0x300;
    }
  }
  return;
}

