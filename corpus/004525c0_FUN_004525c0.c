
void FUN_004525c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((((g_FlightStateFlags & 4) != 0) && (DAT_0058b064 != 0)) &&
     (*(int *)(DAT_0058b064 + 100) != 0)) {
    iVar1 = FUN_00452560(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_0048e350();
      if ((uVar2 & 0xffff) < *(uint *)(iVar1 + 0xc)) {
        iVar3 = FUN_00452590(iVar1);
        if (iVar3 != 0) {
          FUN_0041f0e0(s_PLAYER_SCR_0053fa3c,iVar3,*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(DAT_0058b064 + 100));
        }
      }
    }
  }
  return;
}

