
void Anim_Start(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *(int *)(param_2 + 0x20) = *(int *)(param_3 + 0x1c) + 0x2c;
  *(undefined4 *)(param_2 + 0x28) = 1;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0xc);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x28);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x1c);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x20);
  clr_bytes(*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 0xc) * 0xc);
  Anim_SetPose(param_1,param_2,*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_2 + 0x10),1);
  return;
}

