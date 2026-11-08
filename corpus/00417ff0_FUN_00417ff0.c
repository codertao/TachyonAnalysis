
void FUN_00417ff0(void)

{
  DAT_005b905c = 0;
  if (DAT_005b9048 == 0) {
    DAT_005b9048 = 1;
    return;
  }
  FUN_00454e90();
  if ((g_FlightStateFlags & 1) == 0) {
    DescReg_ShutdownAll();
  }
  FUN_00467810();
  FUN_00466d70();
  DAT_005b3394 = 0;
  FUN_0049cca0(s_CLFREE_TXT_00534318);
  return;
}

