
void FUN_00437e40(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char local_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  iVar1 = Cbin_SelectGroup(s_SOUNDS_0053fd80);
  if ((iVar1 != 0) && (iVar1 = FUN_0049b480(&DAT_0053fd7c,&DAT_005a41e0,0x100,0), iVar1 != 0)) {
    iVar1 = param_1 + 0x78;
    FUN_0049cf30(&DAT_005a41e0,iVar1,0xa000);
    iVar2 = FUN_0049b480(s_SOUND_00532778,&DAT_005a41e0,0x100,0);
    while (iVar2 != 0) {
      FUN_0049d1c0(&DAT_005a41e0,iVar1);
      iVar2 = FUN_0049b480(s_SOUND_00532778,&DAT_005a41e0,0x100,0);
    }
    FUN_0049d270(iVar1);
  }
  iVar1 = Cbin_SelectGroup(s_SOUNDEVENTS_0053fd70);
  if (iVar1 != 0) {
    iVar1 = FUN_0049b480(s_SOUNDEVENT_0053fd64,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar3 = local_70;
      for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        pcVar3 = pcVar3 + 4;
      }
      pcVar3 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_70,pcVar3,0x3f);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_30 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_2c = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_28 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_24 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_20 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_1c = FUN_004bd32f(uVar4);
      FUN_004bcef7(0,&DAT_0053ebb4);
      local_10 = 0;
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_8 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_6 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_4 = FUN_004bd32f(uVar4);
      uVar4 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_2 = FUN_004bd32f(uVar4);
      FUN_004404d0(param_1,local_70);
      iVar1 = FUN_0049b480(s_SOUNDEVENT_0053fd64,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x68),0x70,&LAB_004397a0);
  return;
}

