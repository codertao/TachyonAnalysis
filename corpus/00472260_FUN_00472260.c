
void FUN_00472260(int param_1,int param_2,byte param_3)

{
  char *pcVar1;
  char cVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *local_2c;
  int local_28;
  char *local_24;
  undefined4 *local_20;
  char *local_14;
  RECT local_10;
  
  iVar15 = 0;
  local_2c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  pcVar13 = s_BtnCFGSell1_0054f138;
  local_24 = (char *)0x0;
  pcVar12 = s_BtnCFGBuy1_0054e9f0;
  local_14 = (char *)0x0;
  local_28 = 0;
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  if (DAT_00563614 != 0) {
    return;
  }
  if (0 < DAT_00563628) {
    DAT_00563628 = DAT_00563628 + -1;
  }
  if ((param_3 & 1) == 0) {
    if (DAT_0056362c != 0) {
      if (DAT_00563628 < 1) {
        bVar5 = true;
        DAT_00563628 = 0x10;
      }
      else {
        bVar3 = true;
        DAT_00563628 = 0;
      }
    }
    DAT_0056362c = 0;
    DAT_00563630 = 0;
    DAT_00563618 = (undefined4 *)0x0;
    DAT_0056361c = (undefined4 *)0x0;
    DAT_00563620 = (char *)0x0;
    DAT_00563624 = (char *)0x0;
  }
  else if (DAT_0056362c == 0) {
    DAT_005635f4 = param_1;
    DAT_005635f0 = param_2;
    bVar4 = true;
    DAT_0056362c = 1;
  }
  else {
    uVar8 = DAT_005635f4 - param_1 >> 0x1f;
    if ((3 < (int)((DAT_005635f4 - param_1 ^ uVar8) - uVar8)) ||
       (uVar8 = DAT_005635f0 - param_2 >> 0x1f, 3 < (int)((DAT_005635f0 - param_2 ^ uVar8) - uVar8))
       ) {
      DAT_00563630 = 1;
    }
    DAT_0056362c = 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  DAT_00563614 = 0;
  cVar2 = s_BtnCFGSell1_0054f138[0];
  if (param_2 < 0) {
    param_2 = 0;
  }
  while (cVar2 != '\0') {
    pt.y = param_2;
    pt.x = param_1;
    BVar6 = PtInRect((RECT *)(pcVar13 + 0x164),pt);
    if (BVar6 != 0) {
      if (bVar4) {
        DAT_00563620 = pcVar13;
      }
      local_28 = iVar15;
      local_24 = pcVar13;
      if (pcVar13 != (char *)0x0) goto LAB_00472419;
      break;
    }
    pcVar1 = pcVar13 + 0x174;
    pcVar13 = pcVar13 + 0x174;
    iVar15 = iVar15 + 1;
    cVar2 = *pcVar1;
  }
  iVar15 = 0;
  cVar2 = s_BtnCFGBuy1_0054e9f0[0];
  while (cVar2 != '\0') {
    pt_00.y = param_2;
    pt_00.x = param_1;
    BVar6 = PtInRect((RECT *)(pcVar12 + 0x164),pt_00);
    if (BVar6 != 0) {
      if (bVar4) {
        DAT_00563624 = pcVar12;
      }
      local_28 = iVar15;
      local_14 = pcVar12;
      if (pcVar12 != (char *)0x0) goto LAB_0047251e;
      break;
    }
    pcVar13 = pcVar12 + 0x174;
    pcVar12 = pcVar12 + 0x174;
    iVar15 = iVar15 + 1;
    cVar2 = *pcVar13;
  }
LAB_00472419:
  if (DAT_00598580 == 0) {
    puVar14 = &DAT_00572160;
    iVar15 = 8;
    do {
      local_10.left = puVar14[0x2a9];
      local_10.top = puVar14[0x2aa];
      local_10.right = puVar14[0x2ab];
      local_10.bottom = puVar14[0x2ac];
      if (((DAT_0056360c != 0) && (*(int *)(DAT_00563608 + 0xd4) != 0)) &&
         (iVar7 = FUN_00476240(DAT_00563604,puVar14), iVar7 != 0)) {
        local_10.left = local_10.left - (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) >> 1);
        local_10.top = local_10.top - (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670) >> 1);
        local_10.right = local_10.right + (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) >> 1);
        local_10.bottom = local_10.bottom + (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670) >> 1);
      }
      pt_01.y = param_2;
      pt_01.x = param_1;
      BVar6 = PtInRect(&local_10,pt_01);
      if ((BVar6 != 0) && (local_20 = puVar14, bVar4)) {
        DAT_0056361c = puVar14;
      }
      puVar14 = puVar14 + 0x2ad;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  else if (DAT_00598580 == 1) {
    local_2c = (undefined4 *)0x0;
    puVar14 = &DAT_00577f80;
    iVar15 = 0x10;
    do {
      local_10.left = puVar14[0x2a9];
      local_10.top = puVar14[0x2aa];
      local_10.right = puVar14[0x2ab];
      local_10.bottom = puVar14[0x2ac];
      if (((DAT_0056360c != 0) && (*(int *)(DAT_00563608 + 0xd4) != 0)) &&
         (iVar7 = FUN_00476240(DAT_00563604,puVar14), iVar7 == 0)) {
        local_10.left = local_10.left - (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) >> 1);
        local_10.top = local_10.top - (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670) >> 1);
        local_10.right = local_10.right + (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) >> 1);
        local_10.bottom = local_10.bottom + (*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670) >> 1);
      }
      pt_02.y = param_2;
      pt_02.x = param_1;
      BVar6 = PtInRect(&local_10,pt_02);
      if ((BVar6 != 0) && (local_2c = puVar14, bVar4)) {
        DAT_00563618 = puVar14;
      }
      puVar14 = puVar14 + 0x2ad;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
LAB_0047251e:
  if (((bVar3) && (local_24 != (char *)0x0)) &&
     (iVar15 = FUN_0043ca90(&DAT_00583420,local_24), iVar15 != 8)) {
    FUN_00474b40(local_28);
    iVar15 = FUN_0043fa70(&DAT_00583420,local_24 + 0xc0);
    if (iVar15 != 0) {
      FUN_00440460(&DAT_00583420,s_SNDEVNT_LOADOUT_TAKE_00547688);
      FUN_00472030(s_WndStarBaseCFG_0054ffc8,*(undefined4 *)(iVar15 + 0xd4));
      DAT_00563604 = *(int *)(local_24 + 0x100);
      DAT_0056360c = 1;
      iVar15 = *(int *)(DAT_00563604 + 0x58);
      if (iVar15 != 0) {
        FUN_00474190(*(undefined4 *)(DAT_00563604 + 0x50));
        uVar8 = FUN_0046be00(DAT_00563604 + 0x20,DAT_00563604);
        uVar9 = FUN_00477550(*(undefined4 *)(iVar15 + 0x9c),DAT_00563610);
        if (uVar9 < uVar8) {
          uVar8 = FUN_00477550(*(undefined4 *)(iVar15 + 0x9c),DAT_00563610);
        }
        FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,-uVar8);
        *(uint *)(DAT_00563604 + 0x54) = uVar8;
      }
    }
    if (DAT_00598580 == 0) {
      param_2 = 0;
      uVar8 = 0;
      puVar14 = &DAT_00572160;
      do {
        iVar15 = FUN_00476240(DAT_00563604,puVar14);
        if (((iVar15 != 0) && (puVar14[0x2a7] == 0)) &&
           (iVar15 = FUN_004768b0(puVar14,DAT_00563604,*(undefined4 *)(DAT_00563608 + 0xd4),
                                  *(undefined4 *)(DAT_00563604 + 0x54)), iVar15 != 0)) {
          param_2 = 1;
          break;
        }
        uVar8 = uVar8 + 1;
        puVar14 = puVar14 + 0x2ad;
      } while (uVar8 < 8);
    }
    if (DAT_00598580 == 1) {
      uVar8 = 0;
      puVar14 = &DAT_00577f80;
      do {
        iVar15 = FUN_00476240(DAT_00563604,puVar14);
        if ((iVar15 == 0) && (puVar14[0x2a7] == 0)) {
          FUN_00476b30(puVar14,DAT_00563604,*(undefined4 *)(DAT_00563608 + 0xd4),
                       *(undefined4 *)(DAT_00563604 + 0x54));
          goto LAB_0047281c;
        }
        uVar8 = uVar8 + 1;
        puVar14 = puVar14 + 0x2ad;
      } while (uVar8 < 0x10);
    }
    else if (param_2 != 0) goto LAB_0047281c;
    if (DAT_00563604 != 0) {
      FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
    }
LAB_0047281c:
    FUN_004762b0();
    FUN_00475be0();
    FUN_00473500(0);
    FUN_00474010(0);
    *(undefined4 *)(DAT_00563604 + 0x54) = 0;
    DAT_00563604 = 0;
    DAT_0056360c = 0;
    FUN_00476c80();
    FUN_00471de0();
    return;
  }
  if ((DAT_00563630 != 0) && (DAT_0056360c == 0)) {
    if ((DAT_0056361c != (undefined4 *)0x0) && ((DAT_0056361c[0x2a7] != 0 && (DAT_00598580 == 0))))
    {
      iVar15 = FUN_0043fa70(&DAT_00583420,DAT_0056361c + 0x3e);
      if (iVar15 == 0) {
        return;
      }
      if ((*(int *)(DAT_0056361c[0x2a7] + 0x58) == 0) ||
         (uVar8 = *(uint *)(*(int *)(DAT_0056361c[0x2a7] + 0x58) + 0x9c), uVar8 < 2)) {
        DAT_00563604 = FUN_00476760(DAT_0056361c,0xffffffff);
      }
      else {
        uVar10 = FUN_00477550(uVar8,DAT_00563610);
        DAT_00563604 = FUN_00476760(DAT_0056361c,uVar10);
      }
      if (DAT_00563604 == 0) {
        return;
      }
      FUN_00440460(&DAT_00583420,s_SNDEVNT_LOADOUT_TAKE_00547688);
      FUN_00474190(*(undefined4 *)(DAT_00563604 + 0x50));
      FUN_00472030(s_WndStarBaseCFG_0054ffc8,*(undefined4 *)(iVar15 + 0xd4));
      DAT_0056360c = 1;
      FUN_00475be0();
      FUN_00476d90(DAT_00563604);
      DAT_005635f8 = 0;
      DAT_00563600 = DAT_00563604;
      DAT_005635fc = 0;
      FUN_00474980(DAT_00563604,0);
      return;
    }
    if ((DAT_00563618 != (undefined4 *)0x0) && (DAT_00598580 == 1)) {
      iVar15 = FUN_0043fa70(&DAT_00583420,DAT_00563618 + 0x3e);
      if (iVar15 == 0) {
        return;
      }
      DAT_00563604 = FUN_00476a70(DAT_00563618);
      if (DAT_00563604 == 0) {
        return;
      }
      iVar7 = *(int *)(DAT_00563604 + 0x58);
      if (iVar7 == 0) {
        return;
      }
      FUN_00440460(&DAT_00583420,s_SNDEVNT_LOADOUT_TAKE_00547688);
      FUN_00472030(s_WndStarBaseCFG_0054ffc8,*(undefined4 *)(iVar15 + 0xd4));
      DAT_0056360c = 1;
      FUN_004762b0();
      FUN_00476d90(DAT_00563604);
      *(undefined4 *)(DAT_00563604 + 0x54) = *(undefined4 *)(iVar7 + 0x9c);
      iVar15 = FUN_004c67c0(DAT_00563604,s_AMMO_HOLD_005362c0);
      if (iVar15 == 0) {
        DAT_00563610 = 0;
        FUN_00477570();
      }
      DAT_005635f8 = 0;
      DAT_00563600 = DAT_00563604;
      DAT_005635fc = 0;
      FUN_00474980(DAT_00563604,0);
      return;
    }
    if ((DAT_00563620 == (char *)0x0) ||
       (iVar15 = FUN_0043ca90(&DAT_00583420,DAT_00563620), iVar15 == 8)) {
      if (DAT_00563624 == (char *)0x0) {
        return;
      }
      iVar15 = FUN_0043ca90(&DAT_00583420,DAT_00563624);
      if (iVar15 == 8) {
        return;
      }
      iVar15 = FUN_0043fa70(&DAT_00583420,DAT_00563624 + 0xc0);
      if (iVar15 == 0) {
        return;
      }
      DAT_00563604 = *(int *)(DAT_00563624 + 0x100);
      if (DAT_00563604 != 0) {
        iVar7 = *(int *)(DAT_00563604 + 0x58);
        if (iVar7 == 0) {
          return;
        }
        FUN_0043ce50(&DAT_00583420,DAT_00563624,4);
        pcVar13 = s_BtnCFGBuy1_0054e9f0;
        uVar8 = 0;
        do {
          if (pcVar13 == DAT_00563624) {
            FUN_00474a40(uVar8);
          }
          pcVar13 = pcVar13 + 0x174;
          uVar8 = uVar8 + 1;
        } while (uVar8 < 4);
        DAT_0056360c = 1;
        FUN_00440460(&DAT_00583420,s_SNDEVNT_LOADOUT_TAKE_00547688);
        FUN_00472030(s_WndStarBaseCFG_0054ffc8,*(undefined4 *)(iVar15 + 0xd4));
        *(undefined4 *)(DAT_00563604 + 0x54) = *(undefined4 *)(iVar7 + 0x9c);
        uVar8 = *(uint *)(iVar7 + 0x98);
        uVar9 = FUN_004699a0();
        if (uVar9 < uVar8) {
          return;
        }
        FUN_004699d0(-uVar8);
        FUN_004743c0();
        return;
      }
      DAT_0056360c = 0;
      return;
    }
    iVar15 = FUN_0043fa70(&DAT_00583420,DAT_00563620 + 0xc0);
    if (iVar15 == 0) {
      return;
    }
    DAT_00563604 = *(int *)(DAT_00563620 + 0x100);
    if (DAT_00563604 == 0) {
      DAT_0056360c = 0;
      return;
    }
    iVar7 = *(int *)(DAT_00563604 + 0x58);
    if (iVar7 != 0) {
      FUN_0043ce50(&DAT_00583420,DAT_00563620,4);
      pcVar13 = s_BtnCFGSell1_0054f138;
      uVar8 = 0;
      do {
        if (pcVar13 == DAT_00563620) {
          FUN_00474b40(uVar8);
          break;
        }
        pcVar13 = pcVar13 + 0x174;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      FUN_00440460(&DAT_00583420,s_SNDEVNT_LOADOUT_TAKE_00547688);
      FUN_00472030(s_WndStarBaseCFG_0054ffc8,*(undefined4 *)(iVar15 + 0xd4));
      uVar9 = FUN_0046be00(DAT_00563604 + 0x20,DAT_00563604);
      uVar11 = FUN_00477550(*(undefined4 *)(iVar7 + 0x9c),DAT_00563610);
      uVar8 = uVar9;
      if (uVar11 < uVar9) {
        iVar15 = FUN_004c67c0(DAT_00563604,s_GATLING_GUN_0054ffbc);
        if (iVar15 == 0) {
          uVar8 = FUN_00477550(*(undefined4 *)(iVar7 + 0x9c),0);
        }
        else {
          uVar8 = FUN_00477550(*(undefined4 *)(iVar7 + 0x9c),DAT_00563610);
        }
      }
      FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,-uVar8);
      *(uint *)(DAT_00563604 + 0x54) = uVar8;
      if (uVar9 == uVar8) {
        FUN_0043ce50(&DAT_00583420,DAT_00563620,1);
        DAT_00563600 = DAT_00563604;
        DAT_005635f8 = 0;
        DAT_005635fc = 0;
        FUN_00474190(*(undefined4 *)(DAT_00563604 + 0x50));
        FUN_00473500();
        FUN_00474010(0);
        FUN_00474980(DAT_00563604,0);
        FUN_00476d90(DAT_00563604);
      }
      FUN_00474010(0);
    }
    DAT_0056360c = 1;
    return;
  }
  if (!bVar5) {
    return;
  }
  if (DAT_00563604 == 0) {
    if ((local_20 == (undefined4 *)0x0) || (local_20[0x2a7] == 0)) {
      if (local_2c == (undefined4 *)0x0) {
        return;
      }
      if (local_2c[0x2a7] == 0) {
        return;
      }
      FUN_00440460(&DAT_00583420,s_SNDEVNT_TEXTCLICK_0054ffa8);
      DAT_00563600 = local_2c[0x2a7];
      uVar10 = local_2c[0x2a8];
    }
    else {
      FUN_00440460(&DAT_00583420,s_SNDEVNT_TEXTCLICK_0054ffa8);
      DAT_00563600 = local_20[0x2a7];
      uVar10 = local_20[0x2a8];
    }
    DAT_005635fc = 0;
    DAT_005635f8 = 0;
    *(undefined4 *)(DAT_00563600 + 0x54) = uVar10;
    FUN_00474c40();
    FUN_00474980(DAT_00563600,0);
    return;
  }
  if (local_14 != (char *)0x0) {
    if (DAT_005635f8 == 0) {
      DAT_005635fc = DAT_00563604;
      DAT_00563600 = 0;
      FUN_00474dc0();
    }
    else {
      FUN_004699d0(*(undefined4 *)(*(int *)(DAT_00563604 + 0x58) + 0x98));
      FUN_004743c0();
    }
    goto LAB_00473034;
  }
  if (local_24 == (char *)0x0) {
    if (local_20 == (undefined4 *)0x0) {
      if (local_2c != (undefined4 *)0x0) {
        iVar15 = FUN_00476240(DAT_00563604,local_2c);
        if (iVar15 == 0) {
          iVar15 = FUN_00476a70(local_2c);
          if (iVar15 != 0) {
            FUN_0046be30(iVar15 + 0x20,iVar15,*(undefined4 *)(iVar15 + 0x54));
          }
          FUN_00476b30(local_2c,DAT_00563604,*(undefined4 *)(DAT_00563608 + 0xd4),
                       *(undefined4 *)(DAT_00563604 + 0x54));
          *(undefined4 *)(DAT_00563604 + 0x54) = 0;
        }
        else if (DAT_005635f8 == 0) {
          FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
          *(undefined4 *)(DAT_00563604 + 0x54) = 0;
        }
        else {
          FUN_004699d0(*(undefined4 *)(*(int *)(DAT_00563604 + 0x58) + 0x98));
          FUN_004743c0();
          *(undefined4 *)(DAT_00563604 + 0x54) = 0;
        }
        goto LAB_00473034;
      }
      if (DAT_005635f8 == 0) {
        FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
        if (DAT_005635fc != 0) {
          FUN_00474490();
        }
      }
      else {
        FUN_004699d0(*(undefined4 *)(*(int *)(DAT_00563604 + 0x58) + 0x98));
        FUN_004743c0();
      }
    }
    else {
      iVar15 = FUN_00476240(DAT_00563604,local_20);
      if (iVar15 == 0) {
        if (DAT_005635f8 == 0) goto LAB_00472e52;
        FUN_004699d0(*(undefined4 *)(*(int *)(DAT_00563604 + 0x58) + 0x98));
        FUN_004743c0();
      }
      else {
        iVar15 = local_20[0x2a7];
        if ((((iVar15 != 0) && (*(int *)(iVar15 + 0x58) != 0)) &&
            ((*(int *)(*(int *)(iVar15 + 0x58) + 0x9c) == 1 || (iVar15 != DAT_00563604)))) &&
           (iVar15 = FUN_00476760(local_20,0xffffffff), iVar15 != 0)) {
          FUN_0046be30(iVar15 + 0x20,iVar15,*(undefined4 *)(iVar15 + 0x54));
        }
        iVar15 = FUN_004768b0(local_20,DAT_00563604,*(undefined4 *)(DAT_00563608 + 0xd4),
                              *(undefined4 *)(DAT_00563604 + 0x54));
        if (iVar15 == 0) {
          FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
        }
      }
    }
  }
  else {
LAB_00472e52:
    FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
  }
  *(undefined4 *)(DAT_00563604 + 0x54) = 0;
LAB_00473034:
  if (DAT_00563614 == 0) {
    FUN_004762b0();
    FUN_00475be0();
    FUN_00473190();
    FUN_00473500();
    FUN_00474010(0);
  }
  DAT_00563604 = 0;
  DAT_0056360c = 0;
  FUN_00476c80();
  FUN_00471de0();
  return;
}

