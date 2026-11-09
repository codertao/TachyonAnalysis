
void __cdecl FUN_10002180(int param_1)

{
  DWORD DVar1;
  
  if (DAT_10019c88 != 0) {
    DVar1 = timeGetTime();
    DAT_10019c88 = 0;
    DAT_10019c96 = (DVar1 + (uint)*(ushort *)(param_1 + 2) * -0x10000) -
                   (uint)*(ushort *)(param_1 + 6);
    DAT_10019c8c = 0x30;
    if (DAT_100198ac == 0) {
      FUN_10001830();
      return;
    }
  }
  return;
}

