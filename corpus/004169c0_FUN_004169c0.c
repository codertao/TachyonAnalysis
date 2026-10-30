
void FUN_004169c0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 1) == 0x13) {
      *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 0x20;
      FUN_00416980(iVar1);
      return;
    }
    *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) & 0xdf;
    FUN_00415ec0(iVar1);
  }
  return;
}

