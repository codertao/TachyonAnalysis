
int FUN_00481670(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_005711ec != 0) {
    iVar1 = (500U - DAT_005711ec) * 0x51eb851f;
    if ((4 < (500U - DAT_005711ec) / 0x32) && (iVar1 = DAT_00571180, DAT_00571180 == 0)) {
      iVar1 = FUN_0043f6e0(DAT_00571280,s_IAP5VonIA_00556d3c,s_ImageOptionVonTest3_00556d6c);
      DAT_00571180 = 1;
    }
    DAT_005711ec = DAT_005711ec + -1;
    if (DAT_005711ec == 0) {
      iVar1 = FUN_00481530();
      return iVar1;
    }
  }
  return iVar1;
}

