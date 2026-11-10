
void FUN_0040a590(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if ((*(uint *)(iVar1 + 0x34) & 0x6918) != 0) {
    *(code **)(param_1 + 0x80) = FUN_0040a2f0;
    if ((*(uint *)(iVar1 + 0x34) & 0x4000) != 0) {
      *(undefined1 **)(param_1 + 0x80) = &LAB_0040a400;
    }
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + 0x5c);
    Ent_SetEngageLimits(param_1,4,4);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
    FUN_0041b870(param_1);
    return;
  }
  *(undefined1 **)(param_1 + 0x80) = &LAB_00460f30;
  FUN_0041b870(param_1);
  return;
}

