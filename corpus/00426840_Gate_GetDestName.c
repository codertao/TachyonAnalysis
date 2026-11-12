
/* sweep */

int Gate_GetDestName(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    return param_1 + 0xf8;
  }
  iVar1 = Rtxt_GetText(DAT_005a6140,0x62);
  return iVar1;
}

