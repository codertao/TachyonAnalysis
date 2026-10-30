
void FUN_004380a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_8c [64];
  char local_4c [64];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Cbin_SelectGroup(s_CURSORS_0053fd90);
  if (iVar1 != 0) {
    iVar1 = FUN_0049b480(s_CURSOR_0053fd88,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_8c;
      for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)FUN_004bcef7(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_8c,pcVar2,0x3f);
      pcVar2 = (char *)FUN_004bcef7(0,&DAT_0053ebb4);
      _strncpy(local_4c,pcVar2,0x3f);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_c = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_8 = FUN_004bd32f(uVar3);
      uVar3 = FUN_004bcef7(0,&DAT_0053ebb4);
      local_4 = FUN_004bd32f(uVar3);
      FUN_0043e7e0(param_1,local_8c);
      iVar1 = FUN_0049b480(s_CURSOR_0053fd88,&DAT_005a41e0,0x100,0);
    }
  }
  FUN_004bd0d6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 100),0x8c,&LAB_004397a0);
  return;
}

