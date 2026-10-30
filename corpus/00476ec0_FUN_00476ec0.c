
void FUN_00476ec0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 **ppuVar8;
  bool bVar9;
  int local_6c;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  pcVar7 = &DAT_00577700;
  piVar1 = (int *)FUN_004699f0(s_TT_BG_00550208);
  piVar2 = (int *)FUN_004699f0(s_TT_BG2_00550200);
  FUN_004699f0(s_TT_TARGET_005501f4);
  if (((DAT_00564ae4 != 0) && (piVar1 != (int *)0x0)) && (piVar2 != (int *)0x0)) {
    if (DAT_0054f88c != 0) {
      DAT_0054f88c = DAT_0054f88c + -1;
    }
    if (DAT_0054f890 != 0) {
      DAT_0054f890 = DAT_0054f890 + -1;
    }
    if (DAT_0054f88c == 0) {
      iVar3 = _rand();
      DAT_0054f88c = iVar3 % 500 + 0x4e2;
      iVar3 = FUN_0043ba90(&DAT_00583420,param_1);
      if (iVar3 == 0) {
        return;
      }
      local_6c = 8;
      uVar6 = 0;
      do {
        iVar4 = _rand();
        *pcVar7 = (char)(iVar4 % 0x5e) + ' ';
        iVar4 = _rand();
        if (iVar4 % 0x42 == 0) {
          *pcVar7 = '\r';
          pcVar7 = pcVar7 + 1;
          *pcVar7 = '\n';
          uVar6 = uVar6 + 1;
        }
        uVar5 = _rand();
        uVar5 = uVar5 & 0x80000007;
        bVar9 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar9 = (uVar5 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar9) {
          *pcVar7 = ' ';
        }
        if (local_6c == 0) {
          local_6c = 8;
          *pcVar7 = ' ';
        }
        else {
          local_6c = local_6c + -1;
        }
        pcVar7 = pcVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x800);
      DAT_00577eff = 0;
      FUN_0048b740(1,0xa100);
      ppuVar8 = &local_64;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppuVar8 = (undefined1 *)0x0;
        ppuVar8 = ppuVar8 + 1;
      }
      local_3c = *piVar1;
      local_38 = piVar1[1];
      local_34 = piVar1[2];
      local_30 = piVar1[3];
      local_1c = 0;
      local_18 = 5;
      local_4a = *(undefined1 *)(iVar3 + 0xb0);
      local_4b = *(undefined1 *)(iVar3 + 0xb4);
      local_4c = *(undefined1 *)(iVar3 + 0xb8);
      local_47 = *(undefined1 *)(iVar3 + 0xfc);
      local_48 = *(undefined1 *)(iVar3 + 0x100);
      local_49 = *(undefined1 *)(iVar3 + 0x104);
      local_44 = *(undefined1 *)(iVar3 + 0x148);
      local_45 = *(undefined1 *)(iVar3 + 0x14c);
      local_46 = *(undefined1 *)(iVar3 + 0x150);
      local_41 = *(undefined1 *)(iVar3 + 0x194);
      local_42 = *(undefined1 *)(iVar3 + 0x198);
      local_43 = *(undefined1 *)(iVar3 + 0x19c);
      local_2c = &DAT_00562b14;
      local_28 = &DAT_00562b14;
      local_20 = 0x14;
      local_24 = &DAT_00583498;
      local_64 = &DAT_00577700;
      local_10 = 0xc;
      local_14 = 1;
      local_50 = 0x2000;
      local_4 = 0x3eb33333;
      if ((DAT_00564ae4 == 0) || (*(int *)(iVar3 + 0x238) == 0)) {
        local_60 = iVar3 + 0x50;
      }
      else {
        local_3c = local_3c + 4;
        local_5c = *(int *)(iVar3 + 0x238);
      }
      FUN_0048ca60(1,&local_64,0x37ff);
      FUN_0048b800(1,1);
    }
    if (DAT_0054f890 == 0) {
      pcVar7 = &DAT_00582bc0;
      iVar3 = _rand();
      DAT_0054f890 = iVar3 % 0x96 + 0x96;
      iVar3 = FUN_0043ba90(&DAT_00583420,param_1);
      if (iVar3 != 0) {
        local_6c = 8;
        uVar6 = 0;
        do {
          iVar4 = _rand();
          *pcVar7 = (char)(iVar4 % 0x5e) + ' ';
          iVar4 = _rand();
          if (iVar4 % 0x42 == 0) {
            *pcVar7 = '\r';
            pcVar7 = pcVar7 + 1;
            *pcVar7 = '\n';
            uVar6 = uVar6 + 1;
          }
          uVar5 = _rand();
          uVar5 = uVar5 & 0x80000007;
          bVar9 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar9 = (uVar5 - 1 | 0xfffffff8) == 0xffffffff;
          }
          if (bVar9) {
            *pcVar7 = ' ';
          }
          if (local_6c == 0) {
            local_6c = 8;
            *pcVar7 = ' ';
          }
          else {
            local_6c = local_6c + -1;
          }
          pcVar7 = pcVar7 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x800);
        DAT_005833bf = 0;
        FUN_0048b740(2,0xa100);
        ppuVar8 = &local_64;
        for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppuVar8 = (undefined1 *)0x0;
          ppuVar8 = ppuVar8 + 1;
        }
        local_3c = *piVar2;
        local_38 = piVar2[1];
        local_34 = piVar2[2];
        local_30 = piVar2[3];
        local_1c = 0;
        local_18 = 2;
        local_4a = *(undefined1 *)(iVar3 + 0xb0);
        local_4b = *(undefined1 *)(iVar3 + 0xb4);
        local_4c = *(undefined1 *)(iVar3 + 0xb8);
        local_47 = *(undefined1 *)(iVar3 + 0xfc);
        local_48 = *(undefined1 *)(iVar3 + 0x100);
        local_49 = *(undefined1 *)(iVar3 + 0x104);
        local_44 = *(undefined1 *)(iVar3 + 0x148);
        local_45 = *(undefined1 *)(iVar3 + 0x14c);
        local_46 = *(undefined1 *)(iVar3 + 0x150);
        local_41 = *(undefined1 *)(iVar3 + 0x194);
        local_42 = *(undefined1 *)(iVar3 + 0x198);
        local_43 = *(undefined1 *)(iVar3 + 0x19c);
        local_2c = &DAT_00562b14;
        local_28 = &DAT_00562b14;
        local_20 = 0x14;
        local_24 = &DAT_00583498;
        local_64 = &DAT_00577700;
        local_10 = 0xc;
        local_14 = 1;
        local_50 = 0x1000;
        local_4 = 0x3ecccccd;
        if ((DAT_00564ae4 == 0) || (*(int *)(iVar3 + 0x238) == 0)) {
          local_60 = iVar3 + 0x50;
        }
        else {
          local_3c = local_3c + 4;
          local_5c = *(int *)(iVar3 + 0x238);
        }
        FUN_0048ca60(2,&local_64,0x37ff);
        FUN_0048b800(2,1);
      }
    }
  }
  return;
}

