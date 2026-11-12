
/* sweep */

void BW_FormatPlayerName(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 local_40 [64];
  
  uVar1 = BW_RankName(*(undefined4 *)(param_1 + 0x2c));
  uVar1 = Race_GetAffiliation(*(undefined4 *)(param_1 + 0x28),uVar1);
  str_sprintf(local_40,s_<_s__s>_005338d0,uVar1);
  __strupr(local_40);
  str_sprintf(param_2,s__s__s_005336a4,param_1,local_40);
  *param_3 = ((*(int *)(param_1 + 0x28) != DAT_005b3a24) - 1 & 0xff21ff20) + 0xff0000;
  return;
}

