
/* sweep: PLAYER_MOUNTED_WEAPONS */

void PlayerShip_LoadMountedWeapons(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  Var_ResetSection(DAT_005a6148,s_PLAYER_MOUNTED_WEAPONS_0053fa24);
  uVar3 = Var_SectionIndex(s_PLAYER_MOUNTED_WEAPONS_0053fa24);
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_44);
  str_sprintf(local_40,s_SHIP__02d_DATA_0053643c,local_44);
  piVar6 = (int *)(param_1 + 0x168);
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    str_sprintf(local_20,s_MOUNT__d_0053fa18,uVar1);
    Var_GetInt(DAT_005a6148,local_40,local_20,&local_48);
    if (local_48 != 0) {
      iVar4 = WeaponDef_Get(local_48 + -1);
      piVar6[-1] = iVar4;
      if (*(int *)(iVar4 + 0x50) != 0) {
        if ((*(byte *)(iVar4 + 0xd8) & 4) == 0) {
          sVar2 = Store_GetCount(local_40,uVar5);
          *piVar6 = (int)sVar2;
        }
        else {
          sVar2 = WeaponDef_GetSafe(iVar4,DAT_005b1bfc);
          *piVar6 = (int)sVar2;
        }
        piVar6[1] = *piVar6;
      }
      Var_EntryPtr(DAT_005a6148,uVar3,local_48 + -1,1);
    }
    piVar6 = piVar6 + 3;
    uVar5 = uVar1;
  } while (uVar1 < 8);
  return;
}

