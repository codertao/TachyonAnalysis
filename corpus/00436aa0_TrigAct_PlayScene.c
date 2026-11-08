
/* action 3: play main SPX scene[arg2] (.SEN) -> SrvSend_PlayScene */

void TrigAct_PlayScene(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(*(int *)(param_4 + 0x3c) + 4);
  uVar1 = *(uint *)(iVar2 + 100);
  if (param_2 < uVar1) {
    iVar2 = *(int *)(iVar2 + 0x68) + param_2 * 0x10;
    SrvSend_PlayScene(iVar2);
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_PLAY_SCENE__s_0053fb14,iVar2);
      FUN_0045d9d0(local_40,0);
    }
  }
  else if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_SCENE_NUM__d_OUT_OF_ARRAY_RANGE___0053fb24,param_2,uVar1);
    FUN_0045d9d0(local_40,0);
    return;
  }
  return;
}

