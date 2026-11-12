
/* refine: guess: lobby (DirectPlayLobbyCreate, Ordinal_1) address enumeration for the modem SP */

void DPlay_GetModemAddress(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uStack_43c;
  undefined1 **ppuStack_438;
  int *piStack_434;
  int *piStack_430;
  undefined1 *puStack_42c;
  undefined4 *puStack_428;
  int *piStack_424;
  undefined4 uStack_420;
  int local_418 [2];
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  
  local_410 = DAT_0052eea8;
  local_40c = DAT_0052eeac;
  local_404 = DAT_0052eeb4;
  local_408 = DAT_0052eeb0;
  DAT_0056495c._0_1_ = 0;
  if (DAT_005b9c00 == (int *)0x0) {
    DAT_0056495c._0_1_ = 0;
    return;
  }
  piStack_424 = local_418;
  uStack_420 = 0;
  puStack_428 = &local_410;
  puStack_42c = (undefined1 *)0x4a9c51;
  iVar1 = Ordinal_1();
  if (iVar1 != 0) {
    return;
  }
  piStack_430 = (int *)&DAT_0052ee98;
  piStack_434 = piStack_424;
  ppuStack_438 = (undefined1 **)0x4a9c6c;
  puStack_42c = (undefined1 *)&puStack_428;
  puVar2 = (undefined1 *)(**(code **)*piStack_424)();
  if (puVar2 != (undefined1 *)0x0) goto LAB_004a9cd9;
  ppuStack_438 = &puStack_42c;
  uStack_43c = 0;
  piVar3 = piStack_434;
  puStack_42c = puVar2;
  iVar1 = (**(code **)(*piStack_434 + 0x48))(piStack_434,0);
  if (iVar1 == -0x7788ffe2) {
    iVar1 = *piVar3;
    if (uStack_43c < 0x400) {
      iVar1 = (**(code **)(iVar1 + 0x48))(piVar3,0,&puStack_428,&uStack_43c);
      if (iVar1 == 0) {
        (**(code **)(*DAT_005b9c00 + 0x14))
                  (DAT_005b9c00,DPlay_EnumModemCb,&puStack_428,uStack_43c,0);
      }
      goto LAB_004a9ccf;
    }
  }
  else {
LAB_004a9ccf:
    iVar1 = *piVar3;
  }
  (**(code **)(iVar1 + 8))(piVar3);
LAB_004a9cd9:
  ppuStack_438 = (undefined1 **)piStack_430;
  uStack_43c = 0x4a9ce3;
  (**(code **)(*piStack_430 + 8))();
  return;
}

