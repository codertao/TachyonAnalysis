
/* sweep */

void SceneCam_Init(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  CamTable_SetEntity(*(undefined4 *)(param_1 + 0x144),3);
  Camera_SetModeById(3);
  Camera_SetModeField34(0);
  SpaceDust_SetEnabled(0);
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  *(undefined4 **)(param_1 + 0x40) = puVar1;
  *(undefined4 *)(param_1 + 0x4c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x48) = *puVar1;
  iVar2 = puVar1[7];
  if ((iVar2 == 0) || (iVar2 == -1)) {
    DAT_005b9600 = puVar1[0x13];
    DAT_005b9604 = puVar1[0x14];
    DAT_005b9608 = puVar1[0x15];
  }
  else if (*(int *)(iVar2 + 0x30) != 0) {
    *DAT_005b95e0 = *(int *)(iVar2 + 0x30);
    Camera_SetFromEntity
              (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(iVar2 + 0x18);
  if ((iVar3 == 0) || (iVar3 == -1)) {
    DAT_005b95e8 = *(undefined4 *)(iVar2 + 0xc);
    DAT_005b95ec = *(undefined4 *)(iVar2 + 0x10);
    DAT_005b95f0 = *(undefined4 *)(iVar2 + 0x14);
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x30);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x148) = iVar2;
      Camera_SetModeField4(iVar2);
      Camera_LookAtEntitySnap(DAT_005b95e0[1],0);
    }
  }
  DAT_005b9694 = 0x100000;
  DAT_005b9698 = 0x100000;
  SceneCam_ApplyKey(*(undefined4 *)(param_1 + 0x40),param_1);
  return;
}

