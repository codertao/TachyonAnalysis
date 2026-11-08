
void FUN_00402730(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  if ((pcVar1 != Ai_ApproachTarget) && (pcVar1 != (code *)&DAT_00402b90)) {
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_00402700(param_1);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x334);
    if ((iVar2 != 0) &&
       ((*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8) &
        *(uint *)((uint)*(byte *)(iVar2 + 0xc2) * 0x10 + DAT_0058f2e8)) != 0)) {
      iVar2 = FUN_00401550(param_1,iVar2);
      if (iVar2 != 0) {
        FUN_00401080(param_1,1);
        *(undefined4 *)(param_1 + 0x334) = 0;
        return;
      }
    }
    FUN_004031e0(param_1);
    return;
  }
  *(code **)(param_1 + 0x304) = pcVar1;
  return;
}

