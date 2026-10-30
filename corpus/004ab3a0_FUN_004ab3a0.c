
undefined4 FUN_004ab3a0(void)

{
  undefined1 local_100 [224];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_0055e3e0 == 0) {
    return 0xffffffff;
  }
  local_1c = DAT_0052e8c4;
  local_20 = DAT_0052e8c0;
  local_18 = DAT_0052e8c8;
  local_14 = DAT_0052e8cc;
  netsock_EnumSessions(local_100,0,FUN_004ab320,0,0);
  return 0;
}

