
void FUN_0045b640(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134);
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x134) = uVar1 & 0xfffffffb;
    FUN_0045c980(param_1);
    FUN_0045b430(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_0045c670(0xffffffff,*(int *)(param_1 + 0x140),&LAB_0045b610,1);
    return;
  }
  if ((uVar1 & 1) != 0) {
    FUN_004107c0(0xf1,&LAB_0045b610);
    return;
  }
  FUN_004107c0(*(undefined4 *)(param_1 + 0x138),&LAB_0045b610);
  return;
}

