
void FUN_00425c70(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = param_1[0x12];
  if (*(int *)(*(int *)(uVar1 + 0xd4) + 0xe8) == 0) {
    pcVar2 = s_GATEWAY_OPEN_00536118;
  }
  else {
    pcVar2 = s_GATEWAY_CLOSE_005360fc;
  }
  FUN_00407b50(uVar1,pcVar2,param_2,param_3,param_4,*(undefined4 *)(*(int *)(uVar1 + 0x8c) + 0x1a0))
  ;
  if (param_1[5] != 0) {
    uVar1 = FUN_0048e350();
    param_1[5] = (uVar1 & 0x7f) + 0x80;
    uVar1 = FUN_0048e350();
    param_1[1] = param_1[1] + ((uVar1 & 0x3fff) - 0x2000);
  }
  if ((*param_1 & 0x400) != 0) {
    FUN_004b27d0(param_1,0,param_2,param_4);
  }
  return;
}

