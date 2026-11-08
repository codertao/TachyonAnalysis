
void FUN_004383b0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char local_370 [64];
  char local_330 [64];
  char local_2f0 [64];
  undefined4 local_2b0;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_2a0;
  int local_29c;
  int local_298;
  char local_290 [128];
  char local_210 [64];
  char local_1d0 [72];
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  uint local_16c;
  char local_134 [64];
  char local_f4 [64];
  char local_b4 [64];
  char local_74 [64];
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  iVar2 = Cbin_SelectGroup(s_BUTTONS_0053fdac);
  if (iVar2 != 0) {
    iVar2 = FUN_0049b480(s_BUTTON_0053fda4,&DAT_005a41e0,0x100,0);
    while (iVar2 != 0) {
      pcVar3 = local_370;
      for (iVar2 = 0x8f; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        pcVar3 = pcVar3 + 4;
      }
      local_178 = 1;
      pcVar3 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_330,pcVar3,0x3f);
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_2f0,pcVar3,0x3f);
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_370,pcVar3,0x3f);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_2a0 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_29c = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_298 = FUN_004bd32f(uVar4);
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_210,pcVar3,0x3f);
      iVar2 = str_cmp(local_210,&DAT_0053f1e4);
      if (iVar2 == 0) {
        local_210[0] = '\0';
      }
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_1d0,pcVar3,0x3f);
      iVar2 = str_cmp(local_1d0,&DAT_0053f1e4);
      if (iVar2 == 0) {
        local_210[0] = '\0';
      }
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_16c = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_184 = FUN_0043b7f0(param_1,uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_180 = FUN_0043b7f0(param_1,uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_17c = FUN_0043b7f0(param_1,uVar4);
      pcVar3 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      if (pcVar3 != (char *)0x0) {
        _strncpy(local_290,pcVar3,0x3f);
      }
      local_188 = FUN_0043a7a0(param_1,local_2f0);
      if (local_188 == 0) {
        iVar2 = -1;
        pcVar3 = local_210;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if ((iVar2 != -2) && (iVar2 = FUN_0043bf10(param_1,local_210), iVar2 != 0)) {
          FUN_0043b990(param_1,local_1d0,*(undefined4 *)(iVar2 + 0x40),&local_2a8,&local_2a4);
          local_2a8 = ((local_2a8 + 0x10) * 0x10000) / DAT_005a67e4;
          local_2a4 = (local_2a4 << 0x10) / DAT_005a67e4;
        }
      }
      else {
        Ui_AddButtonToWindow(param_1,local_370,0,0);
      }
      if (local_210[0] != '\0') {
        pcVar3 = local_134;
        for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        _strncpy(local_f4,local_330,0x3f);
        _strncpy(local_134,local_370,0x3f);
        _strncpy(local_b4,local_1d0,0x3f);
        _strncpy(local_74,local_210,0x3f);
        if ((local_16c & 0x80) == 0) {
          if ((local_16c & 0x100) == 0) {
            if ((local_16c & 0x200) == 0) {
              if ((local_16c & 0x4000) != 0) goto LAB_00438726;
              local_28 = local_29c;
              local_24 = local_298;
              if ((local_16c & 0x8000) == 0) {
                local_16c = local_16c | 0x200;
              }
            }
            else {
              local_28 = local_29c - (local_2a8 >> 1);
              local_24 = local_298 - (local_2a4 >> 1);
            }
          }
          else {
            local_29c = local_29c - local_2a8;
LAB_00438726:
            local_24 = local_298;
            local_28 = local_29c;
          }
        }
        else {
          local_28 = local_29c;
          local_24 = local_298;
        }
        local_20 = local_2a8 + local_28;
        local_1c = local_24 + local_2a4;
        local_29c = local_28;
        local_298 = local_24;
        local_18 = local_16c;
        iVar2 = FUN_0043bf10(param_1,local_210);
        if (iVar2 != 0) {
          local_30 = *(undefined4 *)(iVar2 + 0x40);
          local_2b0 = *(undefined4 *)(iVar2 + 0x88);
          local_34 = *(undefined4 *)(iVar2 + 0x88);
        }
        FUN_0043d030(param_1,local_134);
      }
      FUN_0043bf70(param_1,local_370);
      iVar2 = FUN_0049b480(s_BUTTON_0053fda4,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x4c),0x23c,&LAB_004397a0);
  return;
}

