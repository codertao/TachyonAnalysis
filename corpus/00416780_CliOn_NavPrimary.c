
/* S->C 0x1015 handler */

void CliOn_NavPrimary(undefined4 *param_1)

{
  DAT_005b7e40 = *param_1;
  DAT_005b7e44 = Dcb_FindById(*param_1);
  Nav_SetPrimaryName(param_1[1],param_1 + 2);
  return;
}

