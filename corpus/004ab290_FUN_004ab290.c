
void FUN_004ab290(void)

{
  if (DAT_0055e3e0 != 0) {
    FUN_004a9cf0();
    netsock_Close();
    FUN_0049c810(DAT_005649a0);
    DAT_005649a0 = 0;
    DAT_0055e3e0 = 0;
  }
  return;
}

