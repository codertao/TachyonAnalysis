
bool FUN_0044c8b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_NwAdvert;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Net_SelectTransport(0);
  FUN_004a6de0();
  iVar1 = thunk_FUN_004aa260();
  return iVar1 == 0;
}

