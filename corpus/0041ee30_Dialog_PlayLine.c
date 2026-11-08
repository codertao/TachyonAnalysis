
/* play .SCR line; posts event {7,dialogIdx,0,line} */

undefined4
Dialog_PlayLine(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5,
               undefined4 param_6,undefined4 param_7,int param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  iVar1 = *(int *)(param_4 + 0x5c);
  if (DAT_005a6730 == 0) {
    if (param_5 != 0) goto LAB_0041ef0f;
  }
  else {
    if (param_5 != 0) goto LAB_0041ef0f;
    str_sprintf(local_80,s_PENDING_DIALOG__s___line__d_00535858,param_1,param_2);
    FUN_0045d9d0(local_80,0);
  }
  if (*(int *)(iVar1 + 0x24) != 0) {
    if (DAT_005a6730 != 0) {
      FUN_0045d9d0(s_Cannot_play___line_in_progress_00535838,0);
    }
    if (param_8 == 0) {
      return 0;
    }
    local_98 = 7;
    local_94 = param_6;
    local_90 = 0;
    local_8c = param_7;
    local_88 = 0xffffffff;
    local_84 = 0xffffffff;
    Mission_PostEvent(&local_98,param_4);
    return 0;
  }
LAB_0041ef0f:
  iVar1 = FUN_0041e6d0(param_1,param_3);
  if (iVar1 == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_80,s_Cannot_find__s_00535828,param_1);
      FUN_0045d9d0(local_80,0);
      return 0;
    }
  }
  else if (((*(byte *)(iVar1 + 0x58) & 1) == 0) || (*(int *)(iVar1 + 0x6c) != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x48)) {
      iVar3 = *(int *)(iVar1 + 0x4c) + param_2 * 0x40;
      if ((*(int *)(iVar3 + 0x24) == 0) ||
         (iVar2 = FUN_0041ec50(*(int *)(iVar3 + 0x24)), iVar2 != 0)) {
        uVar6 = param_6;
        uVar7 = param_7;
        iVar2 = param_8;
        if (param_5 == 0) {
          if (*(int *)(iVar3 + 0x2c) == 0) {
            param_10 = 0;
            iVar4 = *(int *)(iVar3 + 0x30);
          }
          else {
            param_10 = 0;
            iVar4 = *(int *)(iVar3 + 0x30);
            uVar6 = 0xffffffff;
            uVar7 = 0xffffffff;
            iVar2 = 0;
          }
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x30);
          if (*(int *)(iVar3 + 0x30) == 0) {
            iVar4 = param_9;
          }
        }
        FUN_0041e7e0(iVar1,iVar3,iVar4,param_10,param_4,uVar6,uVar7,iVar2);
        if ((*(int *)(iVar3 + 0x2c) != 0) && (param_5 == 0)) {
          FUN_0041ede0(iVar1,iVar3,param_4,param_6,param_7,param_8);
        }
        return 1;
      }
      if (DAT_005a6730 == 0) {
        return 0;
      }
      pcVar5 = s_DEPENDANT_NOT_FOUND__s_line__d_005357ac;
    }
    else {
      if (DAT_005a6730 == 0) {
        return 0;
      }
      pcVar5 = s__s_line__d_is_an_invalid_line_nu_005357cc;
    }
    str_sprintf(local_80,pcVar5,param_1,param_2);
    FUN_0045d9d0(local_80,0);
  }
  else if (DAT_005a6730 != 0) {
    str_sprintf(local_80,s_CANNOT_PLAY_DIALOG____s_ACTOR_IS_005357f0,iVar1 + 0x10);
    FUN_0045d9d0(local_80,0);
    return 0;
  }
  return 0;
}

