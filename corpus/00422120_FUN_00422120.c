
uint FUN_00422120(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = FUN_0048e350();
  uVar2 = uVar1 / param_2;
  uVar1 = uVar1 % param_2;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_0048e350();
      local_18 = (uVar2 & 0x3fff) - 0x2000;
      uVar2 = FUN_0048e350();
      local_14 = (uVar2 & 0x3fff) - 0x2000;
      local_10 = FUN_0048e350();
      local_10 = local_10 & 0x3fff;
      iVar3 = 0x2000;
      if (local_18 < 0) {
        iVar3 = -0x2000;
      }
      local_18 = local_18 + iVar3;
      iVar3 = 0x2000;
      if (local_14 < 0) {
        iVar3 = -0x2000;
      }
      local_14 = local_14 + iVar3;
      if ((int)(local_10 - 0x2000) < 0) {
        local_10 = local_10 - 0x4000;
      }
      uVar2 = FUN_0048e350();
      uVar2 = uVar2 & 0x14;
      uVar4 = DAT_005a746c;
      if (((5 < uVar2) && (uVar4 = DAT_005a7478, 10 < uVar2)) && (uVar4 = DAT_005a7484, 0xf < uVar2)
         ) {
        uVar4 = DAT_005a7490;
      }
      local_c = *param_1 + local_18;
      local_8 = param_1[1] + local_14;
      local_4 = param_1[2] + local_10;
      iVar3 = FUN_00421f20(&local_c,uVar4,&local_18,2000,0x10000,0,0x2ee,0);
      uVar2 = 0;
      if ((iVar3 != 0) && (uVar2 = 0, *(int *)(iVar3 + 0x104) != 0)) {
        uVar4 = FUN_0049d570(s_DEBRIS_FIRE_LOOP_00535b68,&DAT_005a61e0,0x10000,0,0x9c4,0xff,0);
        uVar2 = FUN_00466160(iVar3,uVar4);
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar2;
}

