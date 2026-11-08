
/* action 0/2,0/3: gate obj state = extra, SrvSend_GateState(...,0) */

void TrigAct_GateSet(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_00457b60(param_4,param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xe8) = param_3;
    sVar1 = *(short *)(*(int *)(iVar2 + 0xf0) + 0x48);
    if (sVar1 != -1) {
      Var_SetAndNotify((int)sVar1,*(undefined2 *)(*(int *)(iVar2 + 0xf0) + 0x4a),param_3 == 0);
    }
    SrvSend_GateState(*(undefined4 *)(iVar2 + 0x78),param_3,0,*(undefined4 *)(iVar2 + 100));
  }
  return;
}

