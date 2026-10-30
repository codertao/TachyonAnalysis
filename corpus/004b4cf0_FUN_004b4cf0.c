
void FUN_004b4cf0(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_4 + 0xf);
  if (bVar1 != 0) {
    if (bVar1 == 0xff) {
      iVar2 = 0xff;
    }
    else {
      iVar2 = DAT_00668f38;
      if ((*param_1 & 0x80) == 0) {
        iVar2 = (uint)bVar1 << 1;
      }
    }
    FUN_004b4c10(param_2,param_3,iVar2);
    return;
  }
  if (*(char *)(param_4 + 0x15) == '\0') {
    FUN_004b4b20(param_2,param_3);
    return;
  }
  FUN_004b4b80(param_2,param_3,(int)*(char *)(param_4 + 0x15),(int)*(char *)(param_4 + 0x14));
  return;
}

