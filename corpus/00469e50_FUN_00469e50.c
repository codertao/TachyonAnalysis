
void FUN_00469e50(void)

{
  uint uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  uVar1 = 0;
  if (DAT_005896f8 != 0) {
    iVar2 = DAT_005896fc + 0x40;
    do {
      str_sprintf(local_80,s_IMAGE__s_005444a8,iVar2);
      FUN_00439f70(DAT_005879a0,local_80);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x74;
    } while (uVar1 < DAT_005896f8);
  }
  return;
}

