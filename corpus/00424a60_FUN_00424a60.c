
void FUN_00424a60(undefined4 param_1)

{
  float local_4;
  
  local_4 = 3072.0;
  if (((byte)DAT_005b8f58 & 1) != 0) {
    local_4 = 1536.0;
  }
  if (DAT_005b1edc == 0) {
    if (DAT_005b1ef0 != 0) {
      FUN_00423ed0(param_1,-local_4,DAT_005b1f0c + 0x84,&DAT_005b1ec8,&DAT_005b1ebc);
    }
    if (DAT_005b1ef4 != 0) {
      FUN_00423ed0(param_1,local_4,DAT_005b1f0c + 0x84,&DAT_005b1ec8,&DAT_005b1ebc);
    }
    if ((DAT_005b1ef0 == 0) && (DAT_005b1ef4 == 0)) {
      FUN_00423ed0(param_1,0,DAT_005b1f0c + 0x84,&DAT_005b1ec8,&DAT_005b1ebc);
      return;
    }
  }
  else {
    FUN_00423ed0(param_1,0,DAT_005b1f0c + 0x84,&DAT_005b1ec8,&DAT_005b1ebc);
  }
  return;
}

