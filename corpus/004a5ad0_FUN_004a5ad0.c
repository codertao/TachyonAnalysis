
undefined4 FUN_004a5ad0(void)

{
  MMRESULT MVar1;
  undefined4 local_1c;
  tMIXERCONTROLDETAILS local_18;
  
  FUN_004a60d0();
  if (DAT_0056489c == 0) {
    return 0xffffffff;
  }
  local_18.dwControlID = DAT_00601e80;
  local_18.cbStruct = 0x18;
  local_18.cChannels = 1;
  local_18.u.hwndOwner = (HWND)0x0;
  local_18.cbDetails = 4;
  local_18.paDetails = &local_1c;
  MVar1 = mixerGetControlDetailsA(DAT_00601e7c,&local_18,0);
  if (MVar1 != 0) {
    return 0xffffffff;
  }
  FUN_004a62a0();
  return local_1c;
}

