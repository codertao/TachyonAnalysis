
void FUN_00421b10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0x8f0000;
  local_4 = 0;
  iVar2 = FUN_0041b790(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar2 != 0) {
    FUN_0041b8b0(iVar2);
    *(undefined4 *)(iVar2 + 0x58) = param_2;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined2 *)(iVar2 + 0x74) = 2;
    *(undefined1 **)(iVar2 + 0x70) = &LAB_00421280;
    *(undefined4 *)(iVar2 + 0x34) = *param_1;
    *(undefined4 *)(iVar2 + 0x38) = param_1[1];
    uVar1 = param_1[2];
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined2 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = uVar1;
    *(code **)(iVar2 + 0x68) = FUN_00421450;
    *(undefined4 *)(iVar2 + 0x18) = 0x90;
    *(undefined4 *)(iVar2 + 0x1c) = 10000;
    *(undefined4 *)(iVar2 + 0x4c) = DAT_005b95e8;
    *(undefined4 *)(iVar2 + 0x50) = DAT_005b95ec;
    *(undefined4 *)(iVar2 + 0x54) = DAT_005b95f0;
    *(undefined4 *)(iVar2 + 0x2c) = 0xff;
    local_8 = global_bad_shift_rng();
    local_8 = local_8 & 0x7fffff;
    local_c = global_bad_shift_rng();
    local_c = local_c & 0x7fffff;
    Vec_RotateByOrientation(&local_c,(undefined4 *)(iVar2 + 0x4c));
    *(undefined4 *)(iVar2 + 0x98) = 45000;
  }
  return;
}

