
/* sweep: guess */

void Mss_SetAllChannelPriority(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_00601e74 != 0) {
    do {
      Mss_SetChannelPriority(uVar1,param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_00601e74);
  }
  return;
}

