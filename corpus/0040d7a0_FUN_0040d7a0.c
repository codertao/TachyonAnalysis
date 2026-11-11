
void FUN_0040d7a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_80 [128];
  
  iVar1 = *(int *)(param_1 + 200);
  iVar2 = *(int *)(iVar1 + 0x104);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x104) = 0;
    iVar3 = FUN_0040cf70(*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2));
    if (iVar3 == 0) {
      SrvSend_TextMsg(s_YOU_CANNOT_DROP_OFF_CREDITS_HERE_00533680,0,4,param_1,0xffffffff,0,
                      DAT_005a6324 & 0xff);
    }
    else {
      uVar4 = FUN_0048e800(DAT_005a6140,0x113,1,4,param_1,0xffffffff,0,0xffffffff);
      SrvSend_TextMsg(uVar4);
      uVar4 = FUN_0048e800(DAT_005a6140,0x114);
      str_sprintf(local_80,s__s__s_005336a4,param_1 + 0xcc,uVar4);
      SrvSend_TextMsg(local_80,0,0x10,0,*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2),0,
                      DAT_005a6320._1_1_);
      FUN_0040ce90(iVar3,iVar2);
      FUN_0040d120(*(undefined1 *)(*(int *)(param_1 + 200) + 0xc2),2,iVar2);
      iVar3 = FUN_0045d680(param_2,*(undefined4 *)(*(int *)(param_1 + 200) + 100));
      if (iVar3 != 0) {
        SrvSend_EntityDestroyed(iVar3 + 0x34,10,0,0,0,0,0,*(undefined4 *)(iVar3 + 100));
      }
    }
    BaseWars_AddPoints(iVar1,iVar2 / 10);
  }
  return;
}

