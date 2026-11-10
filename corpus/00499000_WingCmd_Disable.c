
/* attack, +0x324 = 2 (needs disable weapon) */

undefined4 WingCmd_Disable(void)

{
  int iVar1;
  
  if (DAT_005653ac != 0) {
    iVar1 = WingCmd_Attack();
    if (iVar1 != 0) {
      *(undefined1 *)(g_Wingman + 0x324) = 2;
      return 1;
    }
  }
  return 0;
}

