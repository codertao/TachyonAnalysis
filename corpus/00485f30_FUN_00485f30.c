
void FUN_00485f30(void)

{
  POINT pt;
  POINT pt_00;
  LONG LVar1;
  LONG LVar2;
  undefined4 uVar3;
  BOOL BVar4;
  char *pcVar5;
  
  uVar3 = 1;
  if (DAT_00603a30 != '\0') {
    uVar3 = 0xffffffff;
  }
  if (DAT_00603a29 == '\0') {
    if (DAT_00563e10 != 0) {
      FUN_00486320(uVar3);
      DAT_00563e10 = 0;
    }
  }
  else {
    DAT_00563e10 = 1;
  }
  if ((((DAT_00603e48 & 1) == 0) && (DAT_00563e0c != 0)) && (1 < DAT_00563e08)) {
    if (DAT_00557a7c == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      if (DAT_00557a7c != 1) goto LAB_00485fb2;
      uVar3 = 1;
    }
    FUN_00486320(uVar3);
  }
LAB_00485fb2:
  LVar2 = DAT_00603e44;
  LVar1 = DAT_00603e40;
  DAT_00563e0c = DAT_00603e48 & 1;
  pt.y = DAT_00603e44;
  pt.x = DAT_00603e40;
  BVar4 = PtInRect((RECT *)&DAT_00557a48,pt);
  if (BVar4 == 0) {
    pt_00.y = LVar2;
    pt_00.x = LVar1;
    BVar4 = PtInRect((RECT *)&DAT_00557a58,pt_00);
    DAT_00557a7c = 2 - (uint)(BVar4 != 0);
  }
  else {
    DAT_00557a7c = 0;
  }
  if ((DAT_00557a7c != DAT_00557a78) && (1 < DAT_00563e08)) {
    if (DAT_00557a7c == 0) {
      pcVar5 = s_CursorLeft_00557b24;
    }
    else if (DAT_00557a7c == 1) {
      pcVar5 = s_CursorRight_00557b30;
    }
    else {
      if (DAT_00557a7c != 2) {
        DAT_00557a78 = DAT_00557a7c;
        return;
      }
      pcVar5 = s_Cursor1_0053ff4c;
    }
    FUN_0043e8f0(&DAT_00583420,pcVar5);
    DAT_00557a78 = DAT_00557a7c;
  }
  return;
}

