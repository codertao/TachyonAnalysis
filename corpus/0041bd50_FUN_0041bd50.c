
void FUN_0041bd50(undefined4 param_1,int param_2)

{
  if (((param_2 != 0) && (*(short *)(param_2 + 0x76) == 1)) &&
     (GLBL_spacesav[0x62] <= *(int *)(param_2 + 0xe0))) {
    SrvSend_RoundFreeze();
    DAT_005b2820 = FUN_0041bbd0();
    FUN_0041bbf0();
    return;
  }
  return;
}

