
void FUN_00490b70(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_005b3300 + 0x90);
  if (((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (((iVar2 != 0) && (*(short *)(iVar2 + 0x76) == 1)) &&
       (uVar1 = *(ushort *)(iVar2 + 0xf2), uVar1 < 0x80)) {
      if (DAT_00565a34._2_1_ == '\0') {
        FUN_00491440();
      }
      DAT_0056589c = (uint)uVar1;
      return;
    }
    FUN_00491330(0);
  }
  return;
}

