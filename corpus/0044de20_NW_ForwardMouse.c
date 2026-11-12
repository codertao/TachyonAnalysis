
/* sweep: ibrowse_* */

void NW_ForwardMouse(void)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00603e44;
  iVar2 = DAT_00603e40;
  pt.y = DAT_00603e44;
  pt.x = DAT_00603e40;
  BVar1 = PtInRect((RECT *)&DAT_005927d0,pt);
  if (BVar1 != 0) {
    iVar2 = iVar2 - DAT_005927d0;
    iVar3 = iVar3 - DAT_005927d4;
    if ((DAT_00547aa0 != iVar2) || (DAT_00547aa4 != iVar3)) {
      ibrowse_OnMouseMove(iVar2,iVar3);
    }
    DAT_00547aa0 = iVar2;
    DAT_00547aa4 = iVar3;
    if (((byte)DAT_00603e48 & 1) != 0) {
      ibrowse_OnLMouseDown(iVar2,iVar3);
      DAT_00562cc4 = 1;
    }
    if (((byte)DAT_00603e48 & 2) != 0) {
      ibrowse_OnRMouseDown(iVar2,iVar3);
      DAT_00562cc8 = 1;
    }
    if ((((byte)DAT_00603e48 & 1) == 0) && (DAT_00562cc4 != 0)) {
      ibrowse_OnLMouseUp(iVar2,iVar3);
      DAT_00562cc4 = 0;
    }
    if ((((byte)DAT_00603e48 & 2) == 0) && (DAT_00562cc8 != 0)) {
      ibrowse_OnRMouseUp(iVar2,iVar3);
      DAT_00562cc8 = 0;
    }
  }
  return;
}

