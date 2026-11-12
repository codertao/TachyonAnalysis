
/* add per-frame deltas; next keyframe at TIME; PAUSE holds; SOUND fires */

void Anim_StepFrame(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined1 local_80 [128];
  
  iVar2 = *(int *)(param_2 + 0x18);
  puVar3 = *(uint **)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + -1;
  }
  if ((*(int *)(param_2 + 0x4c) == 0) && (*(int *)(param_2 + 0x40) == 0)) {
    iVar4 = *(int *)(param_2 + 0x24);
    iVar5 = *(int *)(iVar4 + 0x24);
    if (iVar5 != 0) {
      Snd_PlayAtEntLoop(iVar5,param_1,0x10000);
      if (DAT_005a6730 != 0) {
        str_sprintf(local_80,s_Playing__s_00532978,*(undefined4 *)(iVar4 + 0x24));
        TextBar_Add(local_80,DAT_005a632c._1_1_);
      }
    }
    *(undefined4 *)(param_2 + 0x4c) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x30);
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x34) >> 0x10;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -1;
    return;
  }
  if ((*(uint *)(param_2 + 0x28) < *(uint *)(iVar2 + 0x18)) && (puVar3 != (uint *)0x0)) {
    piVar6 = (int *)puVar3[2];
    uVar7 = 0;
    if (puVar3[1] != 0) {
      do {
        piVar1 = (int *)(*(int *)(param_2 + 0x10) + *piVar6 * 0xc);
        *piVar1 = *piVar1 + piVar6[4];
        piVar1[1] = piVar1[1] + piVar6[5];
        piVar1[2] = piVar1[2] + piVar6[6];
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 7;
      } while (uVar7 < puVar3[1]);
    }
    *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + puVar3[5];
    uVar7 = *(int *)(param_2 + 0x1c) + 1;
    *(uint *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + puVar3[6];
    *(uint *)(param_2 + 0x1c) = uVar7;
    if (*puVar3 <= uVar7) {
      Anim_SetPose(param_1,param_2,puVar3,*(undefined4 *)(param_2 + 0x10),1);
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 0x2c;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(uint *)(param_2 + 0x2c) = puVar3[3];
      *(uint *)(param_2 + 0x40) = puVar3[10];
      *(uint **)(param_2 + 0x24) = puVar3;
      *(undefined4 *)(param_2 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x30);
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x34) >> 0x10;
    return;
  }
  Anim_Finish(param_1);
  return;
}

