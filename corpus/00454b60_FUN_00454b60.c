
void FUN_00454b60(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  piVar1 = &DAT_005b1f10;
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_24);
  str_sprintf(local_20,s_SHIP__02d_DATA_0053643c,local_24);
  uVar2 = 0;
  if (DAT_005b20d0 != 0) {
    do {
      if ((*(int *)(*piVar1 + 0x50) != 0) && ((*(byte *)(*piVar1 + 0xd8) & 4) == 0)) {
        FUN_00454b20(local_20,(short)piVar1[0xd],piVar1[0xb]);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (uVar2 < DAT_005b20d0);
  }
  return;
}

