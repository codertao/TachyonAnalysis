
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438bd0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int local_26c;
  char local_264 [64];
  char local_224 [48];
  undefined4 local_1f4 [19];
  undefined4 local_1a8 [19];
  undefined4 local_15c [19];
  undefined4 local_110 [19];
  undefined4 local_c4 [19];
  undefined4 local_78 [20];
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = Cbin_SelectGroup(s_FONTS_005367ec);
  if (iVar1 != 0) {
    iVar1 = FUN_0049b480(&DAT_005367f4,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_264;
      for (iVar1 = 0x99; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_264,pcVar2,0x3f);
      pcVar2 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_224,pcVar2,0xf);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_1f4;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_1a8;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_15c;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_110;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_c4;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      puVar4 = (undefined4 *)FUN_0043bc10(param_1,uVar3);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = local_78;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      iVar1 = FUN_004bcef7(0,&DAT_0053ebb4);
      if (iVar1 == 0) {
        fVar6 = (float10)_DAT_0052e544;
      }
      else {
        fVar6 = (float10)FUN_004bd36f(iVar1);
        fVar6 = fVar6 * (float10)_DAT_0052e544;
      }
      local_26c = (int)(longlong)ROUND(fVar6);
      local_28 = (undefined4)(((longlong)local_26c * (longlong)DAT_005a67a8 & 0xffffffffU) / 0x280);
      local_24 = (undefined4)(((longlong)local_26c * (longlong)DAT_005a67ac & 0xffffffffU) / 0x1e0);
      FUN_0043b830(param_1,local_264);
      iVar1 = FUN_0049b480(&DAT_005367f4,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x50),0x264,&LAB_004397a0);
  return;
}

