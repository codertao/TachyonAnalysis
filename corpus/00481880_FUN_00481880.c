
void FUN_00481880(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00563d5c + -0xc;
  DAT_00563d60 = DAT_00563d60 + param_1;
  if ((DAT_00563d60 < 0) || (iVar1 < 0)) {
    DAT_00563d60 = 0;
  }
  else if (iVar1 < DAT_00563d60) {
    DAT_00563d60 = iVar1;
  }
  FUN_00481c40();
  return;
}

