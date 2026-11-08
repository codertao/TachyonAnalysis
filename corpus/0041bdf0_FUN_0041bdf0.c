
uint FUN_0041bdf0(uint param_1)

{
  uint uVar1;
  undefined1 local_80 [128];
  
  uVar1 = param_1 * 0x57619f1;
  param_1 = param_1 / 3000;
  if (4 < param_1) {
    uVar1 = param_1 / 3000;
    if (param_1 % 3000 == 0) {
      str_sprintf(local_80,s__d_MINUTES_LEFT_IN_THIS_ROUND_00534c1c,param_1);
      uVar1 = SrvSend_TextMsg(local_80,0,0,0,0xffffffff,0,DAT_005a6320._1_1_);
    }
  }
  return uVar1;
}

