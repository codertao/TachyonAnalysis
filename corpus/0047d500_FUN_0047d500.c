
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047d500(undefined4 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = (float10)FUN_0047bc30(param_1);
  fVar4 = (float)fVar3;
  if (DAT_00603a40 != '\0') {
    FUN_0047d400();
  }
  if (DAT_00571720 < DAT_00571fd8) {
    DAT_00571720 = DAT_00571720 + 0x18;
  }
  if (DAT_00571724 < DAT_00571fdc) {
    DAT_00571724 = DAT_00571724 + 0x10;
  }
  if (DAT_005524e8 < 1) {
    FUN_0046eac0(0);
  }
  else {
    DAT_005524e8 = DAT_005524e8 + -4;
    if (DAT_005524e8 < 0) {
      DAT_005524e8 = 0;
    }
  }
  DAT_00571334 = DAT_00571334 + 1 & 0x1ff;
  DAT_00571c94 = DAT_00571c94 + 1 & 0x1ff;
  if (DAT_005717e0 == 0) {
    if (DAT_005524e4 == 0) {
      uVar1 = FUN_0047cf00();
      FUN_0047cc50(uVar1);
      FUN_0047d4a0();
      FUN_0047d430();
    }
    if (_DAT_005524d4 != _DAT_0052e59c) {
      if (DAT_00603b45 != '\0') {
        FUN_0047ba90(0xc0800000);
      }
      if (DAT_00603b47 != '\0') {
        FUN_0047ba90(0x40800000);
      }
      if (DAT_00603b46 != '\0') {
        FUN_0047bb00(0xc0800000);
      }
      if (DAT_00603b48 != '\0') {
        FUN_0047bb00(0x40800000);
      }
    }
    if (DAT_00603a8b != '\0') {
      FUN_0047cc30(0x40000000);
      FUN_0047bf50(0x43a00000,0x43700000);
    }
    if (DAT_00603a8d != '\0') {
      FUN_0047cc30(0x3f800000);
      FUN_0047bf50(0x43a00000,0x43700000);
    }
  }
  else {
    bVar2 = _DAT_005524d8 <= fVar4;
    if (bVar2) {
      FUN_0047bb70(-DAT_005714e4);
    }
    else {
      FUN_0047bb70(DAT_005714e4);
    }
    DAT_00563680 = (uint)!bVar2;
    FUN_0047ba90(DAT_00571fc0);
    FUN_0047bb00(DAT_00571fc4);
    DAT_005717e0 = DAT_005717e0 + -1;
  }
  if ((((DAT_00571720 < DAT_00571fd8) || (DAT_00571724 < DAT_00571fdc)) || (0 < DAT_005524e8)) ||
     (DAT_005524e4 = 0, DAT_005524dc != 0)) {
    DAT_005524e4 = 1;
  }
  return;
}

