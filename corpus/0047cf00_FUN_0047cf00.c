
int FUN_0047cf00(void)

{
  float fVar1;
  int iVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  float10 fVar14;
  int local_34;
  int local_30;
  undefined8 local_18;
  RECT local_10;
  
  bVar3 = false;
  fVar14 = (float10)FUN_0047bc30();
  fVar1 = (float)fVar14;
  fVar14 = (float10)FUN_0047ba70();
  local_18 = (longlong)ROUND(fVar14);
  iVar8 = (int)local_18;
  fVar14 = (float10)FUN_0047ba80();
  iVar5 = DAT_00603e44;
  iVar4 = DAT_00603e40;
  local_18 = (longlong)ROUND(fVar14);
  iVar6 = (int)local_18;
  bVar12 = false;
  local_34 = 0;
  if ((DAT_00563684 == 0) && (((byte)DAT_00603e48 & 1) != 0)) {
    DAT_00563698 = 1;
  }
  else {
    bVar12 = DAT_00563698 != 0;
    DAT_00563698 = 0;
  }
  if (((byte)DAT_00603e48 & 2) == 0) {
    bVar13 = DAT_0056369c != 0;
    DAT_0056369c = 0;
    if (bVar13) {
      FUN_0047cc30(0x3f800000);
      FUN_0047bf50(0x43a00000,0x43700000);
      return 0;
    }
  }
  else {
    DAT_0056369c = 1;
  }
  FUN_0047c6d0(0);
  Map_UpdateSectorText(0);
  FUN_0047bc40(0);
  iVar10 = DAT_00563678;
  if (DAT_00563678 != 0) {
    do {
      local_30 = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x20) - iVar8) * fVar1);
      local_10.left = local_30;
      local_30 = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x28) - iVar8) * fVar1);
      local_10.right = local_30;
      local_30 = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x2c) - iVar6) * fVar1);
      local_10.bottom = local_30;
      local_30 = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x24) - iVar6) * fVar1);
      local_10.top = local_30;
      pt.y = iVar5;
      pt.x = iVar4;
      BVar7 = PtInRect(&local_10,pt);
      iVar2 = *(int *)(iVar10 + 0x38);
      if (BVar7 == 0) {
        if (iVar2 == 0) {
          FUN_0047aae0(iVar10);
          if (DAT_00571d68 == iVar10) {
            FUN_0047b9c0(0,0,0);
          }
        }
        else if ((iVar2 == 1) && (*(int *)(iVar10 + 0x3c) != 0)) {
          *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x90) = 0;
        }
      }
      else if (iVar2 == 0) {
        if (local_34 == 0) {
          local_34 = 1;
        }
        if (*(int *)(iVar10 + 0x3c) != 0) {
          FUN_0047c6d0(*(int *)(iVar10 + 0x3c));
        }
        if (DAT_00563680 == 0) {
          iVar11 = local_10.right - local_10.left >> 1;
          iVar9 = local_10.bottom - local_10.top >> 1;
          iVar2 = iVar11;
          if (iVar11 <= iVar9) {
            iVar2 = iVar9;
          }
          FUN_0047aa50(local_10.left + iVar11,local_10.top + iVar9,(float)iVar2,iVar10);
          local_18 = CONCAT44(iVar9 + local_10.top,iVar11 + local_10.left);
          FUN_0047b9c0(&DAT_005716a0,&local_18,iVar10);
        }
        else {
          FUN_0047aae0(iVar10);
        }
      }
      else if ((iVar2 == 1) && (local_34 = 2, *(int *)(iVar10 + 0x3c) != 0)) {
        bVar3 = true;
        if (DAT_005636a0 == 0) {
          FUN_00466860(s_smover_wav_005528e0,(GLBL_spacesav[0x54] & 0x7ffffff) >> 3);
          DAT_005636a0 = 1;
        }
        FUN_0047bc40(*(undefined4 *)(iVar10 + 0x3c));
        Map_UpdateSectorText(*(undefined4 *)(iVar10 + 0x3c));
        *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x90) = 1;
        *(uint *)(*(int *)(iVar10 + 0x3c) + 0x94) =
             *(uint *)(*(int *)(iVar10 + 0x3c) + 0x94) & 0x1ff;
      }
      iVar10 = *(int *)(iVar10 + 0x40);
    } while (iVar10 != 0);
    iVar10 = DAT_00563678;
    if (bVar3) goto joined_r0x0047d233;
  }
  DAT_005636a0 = 0;
  iVar10 = DAT_00563678;
joined_r0x0047d233:
  do {
    if (iVar10 == 0) {
LAB_0047d343:
      pt_01.y = iVar5;
      pt_01.x = iVar4;
      BVar7 = PtInRect((RECT *)&DAT_00571fd0,pt_01);
      if ((BVar7 != 0) && (bVar12)) {
        if (DAT_00563680 != 0) {
          FUN_00466860(s_zoomin_wav_005528d4,(GLBL_spacesav[0x54] * 5 & 0x1fffffff) >> 5);
          FUN_0047cc30(0x3f800000);
          FUN_0047bf50(0x43a00000,0x43700000);
          return local_34;
        }
        FUN_00466860(s_zoomout_wav_005528c8,(GLBL_spacesav[0x54] * 5 & 0x1fffffff) >> 5);
        FUN_0047cc30(0x40000000);
        FUN_0047bf50((float)iVar4,(float)iVar5);
      }
      return local_34;
    }
    local_18._0_4_ = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x20) - iVar8) * fVar1);
    local_10.left = (int)local_18;
    local_18._0_4_ = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x28) - iVar8) * fVar1);
    local_10.right = (int)local_18;
    local_18._0_4_ = (int)(longlong)ROUND((float)(*(int *)(iVar10 + 0x2c) - iVar6) * fVar1);
    local_10.bottom = (int)local_18;
    local_18 = (longlong)ROUND((float)(*(int *)(iVar10 + 0x24) - iVar6) * fVar1);
    local_10.top = (int)local_18;
    pt_00.y = iVar5;
    pt_00.x = iVar4;
    BVar7 = PtInRect(&local_10,pt_00);
    if (BVar7 != 0) {
      if ((*(int *)(iVar10 + 0x38) == 1) && (bVar12)) {
        iVar8 = *(int *)(*(int *)(iVar10 + 0x3c) + 0x8c);
        if (iVar8 == DAT_0057132c) {
          iVar8 = FUN_0047a6d0(DAT_0057132c,DAT_00571328,iVar8,
                               *(undefined4 *)(*(int *)(iVar10 + 0x3c) + 0x88));
          if (iVar8 != 0) {
            FUN_0047a3a0(&DAT_005713e0);
          }
          FUN_0047c0f0(*(undefined4 *)(iVar10 + 0x3c),1);
          bVar12 = false;
        }
      }
      goto LAB_0047d343;
    }
    iVar10 = *(int *)(iVar10 + 0x40);
  } while( true );
}

