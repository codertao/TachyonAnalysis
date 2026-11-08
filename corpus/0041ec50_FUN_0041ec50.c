
undefined4 FUN_0041ec50(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_005a6730 == 0) {
      return 0;
    }
    FUN_0045d9d0(s_Dependant_not_found_0053576c,0);
    return 0;
  }
  if (param_1[1] == 0) {
    copy_p2_to_p1_and_get_basename_(local_80,*param_1);
    iVar1 = FUN_0041e6d0(local_80,&DAT_005a5dd0);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      if (DAT_005a6730 == 0) {
        return 0;
      }
      pcVar2 = s_ACTOR_FILE__s_NOT_FOUND_00535754;
      goto LAB_0041ecf2;
    }
  }
  if ((*(byte *)(param_1[1] + 0x58) & 1) == 0) {
    return 1;
  }
  if (*(int *)(param_1[1] + 0x6c) != 0) {
    return 1;
  }
  if (DAT_005a6730 == 0) {
    return 0;
  }
  pcVar2 = s_ACTOR__s_IS_DEAD_00535740;
LAB_0041ecf2:
  str_sprintf(local_c0,pcVar2,local_80);
  FUN_0045d9d0(local_c0,0);
  return 0;
}

