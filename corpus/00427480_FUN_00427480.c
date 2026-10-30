
void FUN_00427480(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  uVar3 = 0x32;
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_24);
  str_sprintf(local_20,s_SHIP__02d_DATA_0053643c,local_24);
  if (DAT_005b1c00 == 0) {
    if (param_3 == 0) goto LAB_0042753d;
    uVar3 = FUN_0048e800(DAT_005a6140,0x53,0x32);
    FUN_0042ddb0(uVar3);
    DAT_005b1c00 = 1;
    uVar3 = 100;
  }
  if (param_3 != 0) {
    uVar1 = FUN_0048e850(DAT_005a6140,param_2);
    uVar2 = FUN_0048e800(DAT_005a6140,0x4f);
    str_sprintf(&DAT_00562b20,s___s__s____00536430,uVar1,uVar2);
    FUN_0042ddb0(&DAT_00562b20,uVar3);
  }
LAB_0042753d:
  FUN_00427440(param_2,1);
  if (param_3 != 0) {
    str_sprintf(&DAT_00562b20,s_SLOT__d_STATE_00536420,param_1 + 1);
    Var_SetStr(DAT_005a6148,local_20,&DAT_00562b20,s_INSTALLED_00536414);
  }
  return;
}

