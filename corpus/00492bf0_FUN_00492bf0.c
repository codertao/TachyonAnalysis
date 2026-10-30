
char * FUN_00492bf0(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 == (int *)0x0) {
    return s_NO_WEAPON_0055cf04;
  }
  if (*param_1 == 0) {
    return s_NO_WEAPON_0055cf04;
  }
  pcVar2 = *(char **)(*param_1 + 0xd4);
  if (pcVar2 == (char *)0x0) {
    uVar1 = FUN_004930e0(param_1);
    pcVar2 = (char *)FUN_0048e800(DAT_005a6140,uVar1);
  }
  return pcVar2;
}

