
void FUN_00438e10(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_114 [64];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_6c [64];
  undefined4 local_2c;
  int local_28;
  
  iVar1 = Cbin_SelectGroup(s_WINDOWS_0053fdfc);
  if (iVar1 != 0) {
    iVar1 = FUN_0049b480(&DAT_0053fdf8,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_114;
      for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_114,pcVar2,0x3f);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_d4 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_d0 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_cc = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      str_sprintf(local_6c,uVar3);
      local_2c = FUN_0043a7a0(param_1,local_6c);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_28 = FUN_0043ba90(param_1,uVar3);
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = local_28 + 0x50;
      }
      iVar1 = FUN_004bcef7(0,&DAT_0053ebb4);
      if (iVar1 != 0) {
        local_c8 = FUN_004bd32f(iVar1);
      }
      iVar1 = FUN_004bcef7(0,&DAT_0053ebb4);
      if (iVar1 != 0) {
        local_c4 = FUN_004bd32f(iVar1);
      }
      if ((local_c8 < 1) && (local_c4 < 1)) {
        local_c8 = 0x280;
        local_c4 = 0x1e0;
      }
      local_b8 = 0xffffffff;
      local_b4 = 0xffffffff;
      FUN_0043a900(param_1,local_114);
      iVar1 = FUN_0049b480(&DAT_0053fdf8,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x40),0x114,&LAB_004397a0);
  return;
}

