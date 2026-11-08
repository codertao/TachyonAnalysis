
/* S->C 0x1015 handler */

void CliOn_NavPrimary(undefined4 *param_1)

{
  DAT_005b7e40 = *param_1;
  DAT_005b7e44 = Dcb_FindById(*param_1);
  FUN_00450ae0(param_1[1],param_1 + 2);
  return;
}

