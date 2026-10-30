
int FUN_0046bea0(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  local_8 = 0;
  pcVar4 = s_PLAYER_WEAPONS_0054a790;
  if (s_PLAYER_WEAPONS_0054a790[0] == '\0') {
    return 0;
  }
  do {
    iVar2 = Var_FindSection(pcVar4);
    if (iVar2 != 0) {
      puVar3 = *(undefined4 **)(iVar2 + 0x28);
      uVar6 = 0;
      iVar5 = local_8;
      if (*(int *)(iVar2 + 0x20) != 0) {
        do {
          iVar5 = Var_GetInt(g_PlayerVarStore,pcVar4,*puVar3,&local_4);
          if ((iVar5 != 0) && (local_4 != 0)) {
            local_8 = local_8 + 1;
          }
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 3;
          iVar5 = local_8;
        } while (uVar6 < *(uint *)(iVar2 + 0x20));
      }
    }
    pcVar1 = pcVar4 + 0x20;
    pcVar4 = pcVar4 + 0x20;
  } while (*pcVar1 != '\0');
  return iVar5;
}

