
/* sweep */

undefined4 Dialog_PlayNamed(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  iVar1 = Dialog_LoadActor(param_1,&DAT_005a5dd0);
  if (iVar1 == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_80,s__s_not_found_00535728,param_1);
      TextBar_Add(local_80,DAT_005a6320._2_1_);
    }
    return 0;
  }
  if (param_3 == 1) {
    uVar2 = Dialog_PlayConvLine();
    return uVar2;
  }
  uVar2 = Dialog_PlayRegionLine(iVar1,param_2,param_4);
  return uVar2;
}

