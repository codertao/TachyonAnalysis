
int FUN_00469570(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  iVar4 = DAT_00589730;
  iVar1 = Var_FindSection(s_PLAYER_MAIN_VARS_00534198);
  if (iVar1 != 0) {
    iVar1 = Var_FindKey(iVar1,s_JOB_COMPLETED_0054a96c);
    if (iVar1 != 0) {
      iVar2 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,
                         &local_8);
      if (iVar2 != 0) {
        local_4 = Var_GetKeyByIndex(*(undefined4 *)(iVar1 + 8),local_8);
        if (local_4 != 0) {
          iVar1 = FUN_004c67c0(local_4,s_NO_JOB_0054a964);
          if ((iVar1 != 0) && (local_c = 0, DAT_00589728 != 0)) {
            do {
              iVar1 = *(int *)(iVar4 + 0x124);
              uVar5 = 0;
              if (*(int *)(iVar4 + 0x128) != 0) {
                iVar2 = iVar1 + 0x40;
                do {
                  iVar3 = FUN_004c67c0(iVar1,s_PLAYER_MAIN_VARS_00534198);
                  if (iVar3 == 0) {
                    iVar3 = FUN_004c67c0(iVar2 + -0x20,s_CURRENT_JOB_005342b0);
                    if (iVar3 == 0) {
                      iVar3 = FUN_004c67c0(iVar2,local_4);
                      if (iVar3 == 0) {
                        return iVar4;
                      }
                    }
                  }
                  uVar5 = uVar5 + 1;
                  iVar1 = iVar1 + 0x60;
                  iVar2 = iVar2 + 0x60;
                } while (uVar5 < *(uint *)(iVar4 + 0x128));
              }
              local_c = local_c + 1;
              iVar4 = iVar4 + 0x1b8;
            } while (local_c < DAT_00589728);
          }
        }
      }
    }
  }
  return 0;
}

