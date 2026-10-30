
void FUN_00421ce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0x8f0000;
  local_4 = 0;
  iVar1 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar1 != 0) {
    FUN_0041b8b0(iVar1);
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined1 **)(iVar1 + 0x70) = &LAB_00421280;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
    *(code **)(iVar1 + 0x68) = FUN_00421570;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0x90;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = DAT_005b95e8;
    *(undefined4 *)(iVar1 + 0x50) = DAT_005b95ec;
    *(undefined4 *)(iVar1 + 0x54) = DAT_005b95f0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xff;
    local_8 = param_6;
    local_c = param_5;
    Vec_RotateByOrientation(&local_c,(undefined4 *)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x98) = param_4;
  }
  return;
}

