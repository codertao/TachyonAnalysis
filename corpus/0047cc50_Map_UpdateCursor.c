
/* sweep: CursorMap* */

void Map_UpdateCursor(int param_1)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  RECT local_1c;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  DAT_00563684 = 0;
  iVar2 = DAT_00603e40;
  if (DAT_00603e40 < 0) {
    iVar2 = 0;
  }
  iVar3 = DAT_00603e44;
  if (DAT_00603e44 < 0) {
    iVar3 = 0;
  }
  if (((byte)DAT_00603e48 & 1) == 0) {
    pt.y = iVar3;
    pt.x = iVar2;
    BVar1 = PtInRect((RECT *)&DAT_00571fd0,pt);
    if (BVar1 == 0) goto LAB_0047ccd1;
    if (param_1 == 2) {
      local_8 = 3;
      goto LAB_0047ccd1;
    }
    if (DAT_00563680 != 0) {
      local_8 = 2;
      goto LAB_0047ccd1;
    }
    local_8 = 1;
  }
  else {
    local_c = 1;
    param_1 = 0;
LAB_0047ccd1:
    if ((DAT_00563680 != 0) && (param_1 != 2)) {
      local_1c.right = DAT_00571fd0 + 0x20;
      local_1c.left = 0;
      local_1c.top = DAT_00571fd4;
      local_1c.bottom = DAT_00571fdc;
      pt_00.y = iVar3;
      pt_00.x = iVar2;
      BVar1 = PtInRect(&local_1c,pt_00);
      if (BVar1 != 0) {
        local_8 = 4;
        if (local_c != 0) {
          Map_ScrollX(0xc0800000);
        }
        DAT_00563684 = 1;
      }
      local_1c.left = DAT_00571fd0;
      local_1c.bottom = DAT_00571fd4 + 0x20;
      local_1c.top = 0;
      local_1c.right = DAT_00571fd8;
      pt_01.y = iVar3;
      pt_01.x = iVar2;
      BVar1 = PtInRect(&local_1c,pt_01);
      if (BVar1 != 0) {
        local_8 = 5;
        if (local_c != 0) {
          Map_ScrollY(0xc0800000);
        }
        DAT_00563684 = 1;
      }
      local_1c.left = (DAT_00571fd8 - DAT_005a54ec) + -0x20;
      local_1c.top = DAT_00571fd4;
      local_1c.right =
           (uint)((longlong)DAT_005a67e4 * 0x280) >> 0x10 |
           (int)((ulonglong)((longlong)DAT_005a67e4 * 0x280) >> 0x20) << 0x10;
      local_1c.bottom = DAT_00571fdc;
      pt_02.y = iVar3;
      pt_02.x = iVar2;
      BVar1 = PtInRect(&local_1c,pt_02);
      if (BVar1 != 0) {
        local_8 = 6;
        if (local_c != 0) {
          Map_ScrollX(0x40800000);
        }
        DAT_00563684 = 1;
      }
      local_1c.left = DAT_00571fd0;
      local_1c.bottom = DAT_00571fdc;
      local_1c.top = (DAT_00571fdc - DAT_005a54f0) + -0x20;
      local_1c.right = DAT_00571fd8;
      pt_03.y = iVar3;
      pt_03.x = iVar2;
      BVar1 = PtInRect(&local_1c,pt_03);
      if (BVar1 != 0) {
        local_8 = 7;
        if (local_c != 0) {
          Map_ScrollY(0x40800000);
        }
        DAT_00563684 = 1;
      }
    }
  }
  if (DAT_00563694 == local_8) {
    return;
  }
  switch(local_8) {
  case 0:
    pcVar4 = s_Cursor1_0053ff4c;
    break;
  case 1:
    pcVar4 = s_CursorMapIn_005528bc;
    break;
  case 2:
    pcVar4 = s_CursorMapOut_005528ac;
    break;
  case 3:
    pcVar4 = s_Cursor2_005444a0;
    break;
  case 4:
    pcVar4 = s_CursorMapLeft_0055289c;
    break;
  case 5:
    pcVar4 = s_CursorMapUp_00552890;
    break;
  case 6:
    pcVar4 = s_CursorMapRight_00552880;
    break;
  case 7:
    pcVar4 = s_CursorMapDown_00552870;
    break;
  default:
    goto switchD_0047ce67_default;
  }
  Ui_SetCursor(g_MapUiCtx,pcVar4);
switchD_0047ce67_default:
  DAT_00563694 = local_8;
  return;
}

