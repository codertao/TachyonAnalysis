
/* sweep: "WEAPON %d - %s" */

void Loadout_FormatItem(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == 1) {
    uVar1 = Loadout_WeaponLabel(param_1[1]);
    iVar2 = param_1[2] + 1;
    pcVar3 = s_WEAPON__d____s_0053f224;
  }
  else if ((*(uint *)(DAT_005b1f0c + 0x680 + param_1[2] * 4) & 0x80004) == 0) {
    uVar1 = Loadout_SystemLabel(param_1[1]);
    iVar2 = param_1[2] + 1;
    pcVar3 = s_CARD__2d____s_0053f23c;
  }
  else {
    uVar1 = Loadout_SystemLabel(param_1[1]);
    iVar2 = param_1[2] + 1;
    pcVar3 = s_ENGINE__2d____s_0053f24c;
  }
  str_sprintf(param_2,pcVar3,iVar2,uVar1);
  __strupr(param_2);
  return;
}

