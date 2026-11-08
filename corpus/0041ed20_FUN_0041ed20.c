
undefined4
FUN_0041ed20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  puVar1 = (undefined4 *)*param_1;
  iVar2 = FUN_0041ec50(puVar1);
  if (iVar2 == 0) {
    if ((DAT_005a6730 != 0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
      str_sprintf(local_c0,s_DEPENDANT_NOT_FOUND__s___CANNOT_P_00535780,*(undefined4 *)*param_1);
      FUN_0045d9d0(local_c0,0);
    }
    return 0;
  }
  copy_p2_to_p1_and_get_basename_(local_80,*puVar1);
  Dialog_PlayLine(local_80,param_1[2],&DAT_005a5dd0,param_2,1,param_3,param_4,param_5,param_1[1],0);
  return 1;
}

