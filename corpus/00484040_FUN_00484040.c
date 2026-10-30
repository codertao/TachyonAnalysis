
void FUN_00484040(void)

{
  int iVar1;
  POINT pt;
  LONG LVar2;
  LONG LVar3;
  BOOL BVar4;
  int *piVar5;
  int local_c;
  
  LVar3 = DAT_00603e44;
  LVar2 = DAT_00603e40;
  piVar5 = &DAT_0056f574;
  local_c = 5;
  do {
    if (piVar5[-0x10] != 0) {
      pt.y = LVar3;
      pt.x = LVar2;
      BVar4 = PtInRect((RECT *)(piVar5 + -0x14),pt);
      iVar1 = *piVar5;
      if (BVar4 == 0) {
        if (iVar1 == -0x800000) goto LAB_004840cb;
        *piVar5 = *piVar5 + -0x20000;
      }
      else {
        *piVar5 = iVar1 + 0x20000;
        if (0x17fffff < iVar1 + 0x20000) {
          *piVar5 = iVar1 + -0x1fe0000;
        }
      }
      Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseShipBuy_00557938,(RECT *)(piVar5 + -0x14),0);
      piVar5[4] = 1;
    }
LAB_004840cb:
    piVar5 = piVar5 + 0x52;
    local_c = local_c + -1;
    if (local_c == 0) {
      return;
    }
  } while( true );
}

