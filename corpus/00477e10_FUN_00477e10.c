
void FUN_00477e10(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_00477d70();
  DAT_00572020 = 0;
  DAT_0057202c = 0;
  iVar1 = Cbin_Open_Inner(s_cargo_cfg_00550a58);
  if (iVar1 == 0) {
    DAT_00572028 = DAT_00572024;
    return;
  }
  iVar1 = Cbin_SelectGroup(s_CARGO_ITEMS_00550a4c);
  if (iVar1 != 0) {
    iVar1 = Cbin_SelectGroup(s_SUPER_KEYS_00550a40);
    if (iVar1 != 0) {
      iVar1 = FUN_0049bdb0(&PTR_DAT_00550a3c,&DAT_005a41e0,0x7f,0,4,1);
      while (iVar1 != 0) {
        pcVar2 = (char *)FUN_00477db0();
        if (pcVar2 != (char *)0x0) {
          _strncpy(pcVar2,(char *)&DAT_005a41e0,0x1f);
          FUN_0049b930(&PTR_DAT_00550a3c,pcVar2 + 0x20,0xf,0,4,2);
          FUN_0049b930(&PTR_DAT_00550a3c,0,0,pcVar2 + 0x70,1,3);
          FUN_0049b930(&PTR_DAT_00550a3c,0,0,pcVar2 + 0x74,1,4);
          FUN_0049b930(&PTR_DAT_00550a3c,pcVar2 + 0x30,0x1f,0,4,5);
          FUN_0049b930(&PTR_DAT_00550a3c,pcVar2 + 0x50,0x1f,0,4,6);
          uVar3 = FUN_0046d580(&GLBL_UI_ELEM_LIST,pcVar2 + 0x20,1,*(undefined4 *)(pcVar2 + 0x70),
                               *(undefined4 *)(pcVar2 + 0x74),0);
          *(undefined4 *)(pcVar2 + 0x7c) = uVar3;
          pcVar2[0x78] = '\x01';
          pcVar2[0x79] = '\0';
          pcVar2[0x7a] = '\0';
          pcVar2[0x7b] = '\0';
          Var_GetInt(g_PlayerVarStore,s_PLAYER_SUPER_KEYS_00550a28,pcVar2,pcVar2 + 0x80);
        }
        iVar1 = FUN_0049bdb0(&PTR_DAT_00550a3c,&DAT_005a41e0,0x7f,0,4,1);
      }
    }
    iVar1 = Cbin_SelectGroup(s_CARGO_ITEMS_00550a4c);
    if (iVar1 == 0) {
      DAT_00572028 = DAT_00572024;
      return;
    }
    iVar1 = FUN_0049bdb0(s_CARGO_00533fe8,&DAT_005a41e0,0x7f,0,4,1);
    if (iVar1 == 0) {
      DAT_00572028 = DAT_00572024;
      return;
    }
    do {
      pcVar2 = (char *)FUN_00477db0();
      if (pcVar2 != (char *)0x0) {
        _strncpy(pcVar2,(char *)&DAT_005a41e0,0x1f);
        FUN_0049b930(s_CARGO_00533fe8,pcVar2 + 0x20,0xf,0,4,2);
        FUN_0049b930(s_CARGO_00533fe8,0,0,pcVar2 + 0x70,1,3);
        FUN_0049b930(s_CARGO_00533fe8,0,0,pcVar2 + 0x74,1,4);
        FUN_0049b930(s_CARGO_00533fe8,pcVar2 + 0x30,0x1f,0,4,5);
        FUN_0049b930(s_CARGO_00533fe8,pcVar2 + 0x50,0x1f,0,4,6);
        uVar3 = FUN_0046d580(&GLBL_UI_ELEM_LIST,pcVar2 + 0x20,1,*(undefined4 *)(pcVar2 + 0x70),
                             *(undefined4 *)(pcVar2 + 0x74),0);
        *(undefined4 *)(pcVar2 + 0x7c) = uVar3;
        pcVar2[0x78] = '\0';
        pcVar2[0x79] = '\0';
        pcVar2[0x7a] = '\0';
        pcVar2[0x7b] = '\0';
        Var_GetInt(g_PlayerVarStore,s_PLAYER_CARGO_HOLDS_00548a18,pcVar2,pcVar2 + 0x80);
        if ((*(int *)(pcVar2 + 0x80) != 0) && (*(int *)(pcVar2 + 0x7c) != 0)) {
          DAT_00572020 = DAT_00572020 + 1;
        }
      }
      iVar1 = FUN_0049bdb0(s_CARGO_00533fe8,&DAT_005a41e0,0x7f,0,4,1);
    } while (iVar1 != 0);
  }
  DAT_00572028 = DAT_00572024;
  return;
}

