
/* sweep: guess */

undefined4 Sys_OnSysCommand(uint param_1)

{
  int iVar1;
  
  param_1 = param_1 & 0xfff0;
  iVar1 = DAT_00603994;
  if (param_1 < 0xf101) {
    if (param_1 == 0xf100) {
      return 1;
    }
    if (param_1 == 0xf020) {
      if (DAT_00603998 == 0) {
        return 0;
      }
      return 1;
    }
    if ((param_1 != 0xf040) && (param_1 != 0xf050)) {
      return 0;
    }
  }
  else if ((param_1 != 0xf130) && (iVar1 = DAT_0060399c, param_1 != 0xf140)) {
    return 0;
  }
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

