
/* sweep */

void MpShipBW_OnSideBtn(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Race_FindByName(s_GALSPAN_00533548);
  if (DAT_00545bd0 == iVar1) {
    uVar2 = Race_FindByName(&DAT_00533540);
    MpShipBW_RefreshSides(uVar2);
    return;
  }
  uVar2 = Race_FindByName(s_GALSPAN_00533548);
  MpShipBW_RefreshSides(uVar2);
  return;
}

