
void FUN_0047e660(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  g_NextMode = g_StarbaseScreen;
  FUN_00440c80();
  FUN_0047a930();
  FUN_00437af0(0x73,0);
  puVar2 = &DAT_00571ca0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

