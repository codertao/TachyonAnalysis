
void FUN_0045fbb0(int param_1)

{
  int iVar1;
  undefined1 local_80 [128];
  
  if ((g_FlightStateFlags & 4) == 0) {
    iVar1 = FUN_0048e800(DAT_005a6140,0x79);
    if (iVar1 != 0) {
      str_sprintf(local_80,s__s_CRASHED_005493f4,param_1 + 0xcc);
      SrvSend_TextMsg(local_80,0,0,0,0xffffffff,*(undefined4 *)(*(int *)(param_1 + 200) + 100),
                      DAT_005a632c & 0xff);
    }
  }
  return;
}

