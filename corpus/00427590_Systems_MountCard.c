
/* sweep */

void Systems_MountCard(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __stricmp(param_3,s_NO_CARD_0053644c);
  if (iVar1 != 0) {
    if (param_2 == DAT_005b1ba0) {
      Systems_InstallCard(param_1,param_3,param_4);
      return;
    }
    if (param_2 == DAT_005b1ba4) {
      Systems_BitForName(param_3,1);
      return;
    }
    if (param_2 == DAT_005b1ba8) {
      Systems_BitForName(param_3,0);
    }
  }
  return;
}

