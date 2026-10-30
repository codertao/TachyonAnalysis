
void FUN_004957a0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  piVar2 = (int *)(param_1 + 0xa0);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x54);
  FUN_004b1bb0(local_18,param_2);
  FUN_004b24d0(piVar2,piVar2);
  if (param_3 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    local_24 = *param_3;
    local_20 = param_3[1];
    local_1c = param_3[2];
    FUN_004b24d0(&local_24,&local_24);
    piVar1 = (int *)(param_1 + 0x34);
    *piVar1 = *(int *)(param_1 + 0x34) + local_24;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + local_20;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + local_1c;
    *(int *)(param_1 + 0xe0) = *piVar1;
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
    local_24 = 0;
    local_20 = 0;
    local_1c = *(int *)(*(int *)(param_1 + 0x58) + 0x30) + *(int *)(*(int *)(param_1 + 0xdc) + 0x54)
    ;
    FUN_004b24d0(&local_24,&local_24);
    *piVar1 = *piVar1 + local_24;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + local_20;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + local_1c;
  }
  if (param_4 != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_4 * *piVar2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * param_4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_4 * *(int *)(param_1 + 0xa8);
  }
  return;
}

