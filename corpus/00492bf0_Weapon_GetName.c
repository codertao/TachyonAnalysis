
/* sweep: NO WEAPON */

char * Weapon_GetName(int *param_1)

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
    uVar1 = Weapon_GetDef(param_1);
    pcVar2 = (char *)Rtxt_GetText(DAT_005a6140,uVar1);
  }
  return pcVar2;
}

