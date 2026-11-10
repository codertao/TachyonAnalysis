
void FUN_00460720(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 9;
  local_c = 0;
  Mission_PostEventAll(&local_18);
  if (g_Wingman != 0) {
    WingCmd_FormOnMe();
  }
  return;
}

