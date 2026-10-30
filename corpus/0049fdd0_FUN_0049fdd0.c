
/* WARNING: Type propagation algorithm not settling */

int * FUN_0049fdd0(int *param_1)

{
  int ***pppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int iVar5;
  undefined4 uStack_11c;
  int ***pppiStack_118;
  undefined *puStack_114;
  undefined4 ***pppuStack_110;
  int ****ppppiStack_10c;
  undefined4 uStack_108;
  int ***pppiStack_104;
  undefined *puStack_100;
  int ******ppppppiStack_fc;
  int *****pppppiStack_f8;
  undefined4 **ppuStack_f4;
  int ***pppiStack_f0;
  int *****pppppiStack_ec;
  int *****pppppiStack_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  int ***pppiStack_dc;
  undefined **ppuStack_d8;
  int *****pppppiStack_d4;
  int ***pppiStack_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  int ***pppiStack_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  undefined4 *puStack_b8;
  undefined *puStack_b4;
  int ****ppppiStack_b0;
  int ***pppiStack_ac;
  int *piStack_a8;
  int ****ppppiStack_a4;
  undefined4 auStack_7c [6];
  int ***pppiStack_64;
  int ***pppiStack_60;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int ***local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_58 = (undefined4 *)0x0;
  local_54 = 4;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_38 = 10000;
  local_34 = 0;
  local_30 = 0;
  local_2c = 50000;
  local_28 = 0x14;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  local_3c = DAT_0060395c;
  ppppiStack_a4 = (int ****)0x49fe52;
  ppppiVar4 = _malloc(0x40);
  ppppiVar3 = DAT_00563ff8;
  if (ppppiVar4 == (int ****)0x0) {
    return (int *)0x0;
  }
  *ppppiVar4 = (int ***)0x0;
  ppppiVar4[1] = (int ***)ppppiVar3;
  ppppiVar2 = ppppiVar4;
  if (ppppiVar3 != (int ****)0x0) {
    *ppppiVar3 = (int ***)ppppiVar4;
    ppppiVar2 = DAT_00563ff4;
  }
  DAT_00563ff4 = ppppiVar2;
  ppppiVar3 = ppppiVar4;
  if (*ppppiVar4 != (int ***)0x0) {
    (*ppppiVar4)[1] = (int **)ppppiVar4;
    ppppiVar3 = DAT_00563ff8;
  }
  DAT_00563ff8 = ppppiVar3;
  DAT_00563ffc = DAT_00563ffc + 1;
  ppppiVar4[2] = (int ***)*param_1;
  ppppiVar3 = ppppiVar4 + 8;
  ppppiVar4[3] = (int ***)param_1[1];
  ppppiVar4[4] = (int ***)param_1[2];
  pppiVar1 = (int ***)param_1[3];
  ppppiVar4[6] = (int ***)0x0;
  ppppiVar4[5] = pppiVar1;
  ppppiVar4[7] = (int ***)0x0;
  *ppppiVar3 = (int ***)0x0;
  ppppiVar4[9] = (int ***)0x0;
  ppppiVar4[10] = (int ***)0x0;
  ppppiVar4[0xb] = (int ***)0x0;
  ppppiVar4[0xc] = (int ***)0x0;
  ppppiVar4[0xd] = (int ***)0x0;
  ppppiVar4[0xe] = (int ***)0x0;
  ppppiVar4[0xf] = (int ***)0x0;
  ppppiStack_a4 = &local_48;
  piStack_a8 = param_1;
  pppiStack_ac = (int ***)DAT_00563ea8;
  ppppiStack_b0 = (int ****)0x49feee;
  iVar5 = (*(code *)(*DAT_00563ea8)[3])();
  if (iVar5 < 0) {
    puStack_b4 = (undefined *)0x49fef8;
    ppppiStack_b0 = ppppiVar4;
    FUN_004a0270();
    return (int *)0x0;
  }
  ppppiStack_b0 = (int ****)&local_50;
  puStack_b4 = &DAT_0052ee68;
  puStack_b8 = local_58;
  ppppiStack_bc = (int ****)0x49ff1b;
  iVar5 = (**(code **)*local_58)();
  ppppiStack_bc = (int ****)pppiStack_64;
  ppppiStack_c0 = (int ****)0x49ff27;
  (*(code *)(*pppiStack_64)[2])();
  if (iVar5 < 0) {
    pppiStack_c4 = (int ***)0x49ff31;
    ppppiStack_c0 = ppppiVar4;
    FUN_004a0270();
    return (int *)0x0;
  }
  ppppiStack_c0 = (int ****)&DAT_0052ef70;
  ppppiVar4[6] = pppiStack_60;
  pppiStack_c4 = pppiStack_60;
  ppppiStack_c8 = (int ****)0x49ff57;
  iVar5 = (*(code *)(*pppiStack_60)[0xb])();
  if (-1 < iVar5) {
    pppiStack_d0 = ppppiVar4[6];
    ppppiStack_c8 = (int ****)0x5;
    ppppiStack_cc = (int ****)pppiStack_64;
    pppppiStack_d4 = (int *****)0x49ff81;
    iVar5 = (*(code *)(*pppiStack_d0)[0xd])();
    if (iVar5 < 0) {
      ppuStack_d8 = (undefined **)0x49ff8b;
      pppppiStack_d4 = (int *****)ppppiVar4;
      FUN_004a0270();
      return (int *)0x0;
    }
    local_48 = (int ***)0x14;
    local_44 = 0x10;
    uStack_40 = 0;
    local_3c = 0;
    local_38 = 1;
    pppiStack_dc = ppppiVar4[6];
    pppppiStack_d4 = (int *****)&local_48;
    ppuStack_d8 = (undefined **)0x9;
    ppppiStack_e0 = (int ****)0x49ffdd;
    iVar5 = (*(code *)(*pppiStack_dc)[6])();
    if (-1 < iVar5) {
      pppiStack_ac = (int ***)&stack0xffffff68;
      piStack_a8 = (int *)&stack0xffffff70;
      ppppiStack_e4 = ppppiVar4 + 7;
      ppppiStack_e0 = (int ****)0x0;
      ppppiStack_cc = (int ****)0x34;
      ppppiStack_c8 = (int ****)0x12;
      pppiStack_c4 = (int ***)0xffffffff;
      ppppiStack_c0 = (int ****)0x0;
      ppppiStack_bc = (int ****)0x2710;
      puStack_b8 = (undefined4 *)0xffffffff;
      puStack_b4 = (undefined *)0x0;
      ppppiStack_b0 = (int ****)0x2;
      ppppiStack_a4 = (int ****)0x0;
      pppiStack_f0 = ppppiVar4[6];
      pppppiStack_e8 = &ppppiStack_cc;
      pppppiStack_ec = (int *****)&DAT_0052ee58;
      ppuStack_f4 = (undefined4 **)0x4a0066;
      iVar5 = (*(code *)(*pppiStack_f0)[0x12])();
      ppppiStack_bc = (int ****)&ppppiStack_a4;
      ppppiStack_c0 = &pppiStack_ac;
      ppppiVar4[0xc] = (int ***)(uint)(-1 < iVar5);
      puStack_b8 = auStack_7c;
      ppppiStack_b0 = (int ****)&stack0xffffff68;
      ppppiStack_e0 = (int ****)0x34;
      pppiStack_dc = (int ***)0x12;
      ppuStack_d8 = (undefined **)0x1;
      pppppiStack_d4 = (int *****)0x0;
      pppiStack_d0 = (int ***)0x2710;
      ppppiStack_cc = (int ****)0xffffffff;
      ppppiStack_c8 = (int ****)0x0;
      pppiStack_c4 = (int ***)0x2;
      puStack_b4 = (undefined *)0x4;
      pppiStack_104 = ppppiVar4[6];
      ppuStack_f4 = (undefined4 **)0x0;
      ppppppiStack_fc = (int ******)&ppppiStack_e0;
      puStack_100 = &DAT_0052ee58;
      uStack_108 = 0x4a00e1;
      pppppiStack_f8 = (int *****)ppppiVar3;
      (*(code *)(*pppiStack_104)[0x12])();
      pppppiStack_d4 = &ppppiStack_c0;
      pppiStack_d0 = (int ***)&puStack_b8;
      ppppiStack_cc = (int ****)&stack0xffffff70;
      pppiStack_c4 = (int ***)&stack0xffffff60;
      ppppiStack_10c = ppppiVar4 + 9;
      ppuStack_f4 = (undefined4 **)0x34;
      pppiStack_f0 = (int ***)0x12;
      pppppiStack_ec = (int *****)0x1;
      pppppiStack_e8 = (int *****)0x0;
      ppppiStack_e4 = (int ****)0x2710;
      ppppiStack_e0 = (int ****)0xffffffff;
      pppiStack_dc = (int ***)0x0;
      ppuStack_d8 = (undefined **)0x2;
      ppppiStack_c8 = (int ****)0x10;
      pppiStack_118 = ppppiVar4[6];
      uStack_108 = 0;
      pppuStack_110 = &ppuStack_f4;
      puStack_114 = &DAT_0052ee48;
      uStack_11c = 0x4a0155;
      (*(code *)(*pppiStack_118)[0x12])();
      if ((*ppppiVar3 == (int ***)0x0) || (ppppiVar4[9] == (int ***)0x0)) {
        ppppiVar4[0xd] = (int ***)0x0;
      }
      else {
        ppppiVar4[0xd] = (int ***)0x1;
      }
      ppuStack_d8 = &puStack_b4;
      pppppiStack_e8 = (int *****)&pppppiStack_d4;
      ppppiStack_e4 = (int ****)&ppppiStack_cc;
      uStack_11c = 0;
      uStack_108 = 0x34;
      pppiStack_104 = (int ***)0x12;
      puStack_100 = (undefined *)0x1;
      ppppppiStack_fc = (int ******)0x0;
      pppppiStack_f8 = (int *****)0x2710;
      ppuStack_f4 = (undefined4 **)0xffffffff;
      pppiStack_f0 = (int ***)0x0;
      pppppiStack_ec = (int *****)0x2;
      ppppiStack_e0 = (int ****)0x0;
      pppiStack_dc = (int ***)0x10;
      iVar5 = (*(code *)(*ppppiVar4[6])[0x12])
                        (ppppiVar4[6],&DAT_0052ee38,&uStack_108,ppppiVar4 + 10);
      pppppiStack_f8 = &ppppiStack_e0;
      ppppppiStack_fc = &pppppiStack_e8;
      ppppiVar4[0xe] = (int ***)(uint)(-1 < iVar5);
      ppuStack_f4 = &puStack_b8;
      pppppiStack_ec = &ppppiStack_c8;
      uStack_11c = 0x34;
      pppiStack_118 = (int ***)0x12;
      puStack_114 = (undefined *)0x1;
      pppuStack_110 = (undefined4 ***)0x0;
      ppppiStack_10c = (int ****)0x2710;
      uStack_108 = 0xffffffff;
      pppiStack_104 = (int ***)0x0;
      puStack_100 = (undefined *)0x2;
      pppiStack_f0 = (int ***)0x10;
      iVar5 = (*(code *)(*ppppiVar4[6])[0x12])
                        (ppppiVar4[6],&DAT_0052ee48,&uStack_11c,ppppiVar4 + 0xb,0);
      ppppiVar4[0xf] = (int ***)(uint)(-1 < iVar5);
      return (int *)ppppiVar4;
    }
    ppppiStack_e4 = (int ****)0x49ffe7;
    ppppiStack_e0 = ppppiVar4;
    FUN_004a0270();
    return (int *)0x0;
  }
  ppppiStack_cc = (int ****)0x49ff61;
  ppppiStack_c8 = ppppiVar4;
  FUN_004a0270();
  return (int *)0x0;
}

