
int FUN_004c522d(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_005652b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x004c5247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_005652b0 = 1;
                    /* WARNING: Could not recover jumptable at 0x004c525c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00565148;
  }
  DAT_005652b0 = (uint)bVar2;
  return param_1;
}

