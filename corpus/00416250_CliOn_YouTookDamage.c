
/* S->C 0x1005 handler */

void CliOn_YouTookDamage(void)

{
  DAT_005b1efc = DAT_005b1efc + 0x40;
  if (0xf0 < DAT_005b1efc) {
    DAT_005b1efc = 0xf0;
  }
  FUN_004666e0(2,2,2,GLBL_SOME_CONTEXT,0x10000);
  FUN_004a0aa0(5000,250000);
  return;
}

