
/* action 5/8..21: Sped_DispatchAction(obj, extra=action id, arg2); debug 'OBJ %d ACTION %s' */

void TrigAct_ObjSpedAction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  if (DAT_005a6730 != 0) {
    uVar1 = Sped_ActionName(param_3,param_2);
    str_sprintf(local_80,s_OBJ__d_ACTION___s_PARAM__x_0053fba0,param_1,uVar1);
    SrvSend_TextMsg(local_80,0,0,0,0,param_4,DAT_005a6320._1_1_);
  }
  Sped_DispatchAction(param_1,param_3,param_2,param_4);
  return;
}

