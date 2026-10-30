
void FUN_00425ba0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = param_1[0x12];
  iVar2 = *(int *)(uVar1 + 0x8c);
  *(short *)(param_1 + 6) = (short)param_1[6] + 1;
  if (*(int *)(*(int *)(uVar1 + 0xd8) + 0xe8) == 0) {
    pcVar3 = s_GATE_OPEN_00536128;
  }
  else {
    pcVar3 = s_GATE_CLOSE_0053610c;
  }
  FUN_00407b50(uVar1,pcVar3,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0x198));
  if ((*param_1 & 0x400) != 0) {
    FUN_004b27d0(param_1,0,param_2,param_4);
  }
  return;
}

