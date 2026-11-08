
/* S->C 0x1028 handler */

void CliOn_NavSecondary(undefined4 *param_1)

{
  DAT_005b9040 = *param_1;
  DAT_005b9044 = Dcb_FindById(*param_1);
  FUN_00450b20(param_1[1],param_1 + 2);
  if ((DAT_005b9044 != 0) && (DAT_005b9044 == DAT_005b7e44)) {
    DAT_005b9044 = 0;
  }
  return;
}

