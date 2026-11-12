
/* sweep */

void Anim_StartCamera(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + 0x1c;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    CamTable_SetEntity(param_2,3);
    Camera_SetModeById(5);
    Camera_SetModeField4(0);
    Camera_SetModeField34(0);
    puVar1 = *(undefined4 **)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x34) = puVar1[6];
    Camera_SetFromEntity(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    Anim_CameraSetupDelta(param_1,puVar1,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

