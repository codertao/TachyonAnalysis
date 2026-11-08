
void FUN_0043c220(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  code *pcVar2;
  POINT pt;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  RECT local_10;
  
  iVar3 = FUN_0043c180();
  if (iVar3 == 1) {
    return;
  }
  iVar3 = DAT_005a54fc + DAT_005a54f4;
  iVar9 = DAT_005a5500 + DAT_005a54f8;
  local_10.top = *(int *)(param_2 + 0xd8) + param_4;
  local_10.left = *(int *)(param_2 + 0xd4) + param_3;
  local_10.right = *(int *)(param_2 + 200) + local_10.left;
  local_10.bottom = *(int *)(param_2 + 0xcc) + local_10.top;
  *(undefined4 *)(param_2 + 0x210) = 0;
  iVar4 = FUN_0043c190();
  if ((iVar4 != 0) && (param_2 != iVar4)) {
    return;
  }
  if (((byte)DAT_00603e48 & 1) == 0) {
    if (((*(uint *)(param_2 + 0x204) & 0x2000) != 0) && (param_2 == iVar4)) {
      FUN_0043c1a0(0);
    }
    clear_flags(param_2 + 0x204,0x200000);
    *(undefined4 *)(param_2 + 0x228) = 0;
    *(undefined4 *)(param_2 + 0x22c) = 0;
  }
  if ((((DAT_00562bd0 == 0) && (*(int *)(param_2 + 0xc0) != 0)) &&
      ((*(int *)(param_2 + 0x1f8) == 1 || (*(int *)(param_2 + 0x1f8) == 2)))) && (param_5 != 0)) {
    iVar4 = FUN_004bcf9b((int)*(char *)(param_2 + 0xc0));
    iVar5 = FUN_004bcf9b(param_5 >> 8 & 0xff);
    if (iVar5 == iVar4) {
      *(undefined4 *)(param_2 + 0x1f8) = 4;
      *(uint *)(param_2 + 0xdc) = ((*(int *)(param_2 + 0x1fc) == 4) - 1 & 6) + 6;
      if (*(int *)(param_2 + 0x1fc) == 4) {
        return;
      }
      FUN_00440460(param_1,param_2 + 0xe0);
      return;
    }
  }
  pt.y = iVar9;
  pt.x = iVar3;
  BVar6 = PtInRect(&local_10,pt);
  if (BVar6 == 0) {
    if ((((*(uint *)(param_2 + 0x204) & 0x800) != 0) &&
        (iVar3 = *(int *)(param_2 + 500), iVar3 != 0)) && (*(code **)(iVar3 + 0x40) != (code *)0x0))
    {
      (**(code **)(iVar3 + 0x40))(*(undefined4 *)(iVar3 + 0x44));
      clear_flags(param_2 + 0x204,0x800);
    }
    clear_flags(param_2 + 0x204,0x10000);
    return;
  }
  if (((*(int *)(param_2 + 0x1f8) != 8) && (iVar3 = *(int *)(param_2 + 0x1f0), iVar3 != 0)) &&
     (pcVar2 = *(code **)(iVar3 + 0x40), pcVar2 != (code *)0x0)) {
    if ((*(uint *)(param_2 + 0x204) & 0x800) == 0) {
      iVar9 = *(int *)(param_2 + 0x1e8);
      if (((iVar9 == 0) || (*(int *)(iVar9 + 0x60) == 0)) || ((*(byte *)(iVar9 + 0x167c) & 4) == 0))
      {
        (*pcVar2)(*(undefined4 *)(iVar3 + 0x44));
        sbi_flags(param_2 + 0x204,0x800);
        pcVar10 = (char *)(param_2 + 0x120);
        if (*(char *)(param_2 + 0x120) == '\0') {
          pcVar10 = s_SNDEVNT_TEXTBTN_ROLL_0053fe94;
        }
      }
      else {
        if ((*(char *)((((1 << (*(byte *)(iVar9 + 0x68) & 0x1f)) *
                         (((DAT_00603e44 - *(int *)(param_2 + 0xd8)) - param_4) + -1) -
                        *(int *)(param_2 + 0xd4)) - param_3) + *(int *)(iVar9 + 0x60) + -1 +
                      DAT_00603e40) == '\0') && ((*(uint *)(param_2 + 0x204) & 0x400000) == 0))
        goto LAB_0043c508;
        (*pcVar2)(*(undefined4 *)(iVar3 + 0x44));
        sbi_flags(param_2 + 0x204,0x800);
        pcVar10 = (char *)(param_2 + 0x120);
        if (*(char *)(param_2 + 0x120) == '\0') {
          pcVar10 = s_SNDEVNT_BTN_ROLL_0053feac;
        }
      }
      FUN_00440460(param_1,pcVar10);
    }
  }
LAB_0043c508:
  iVar3 = *(int *)(param_2 + 0x1e8);
  iVar9 = 2;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x60) != 0)) && ((*(byte *)(iVar3 + 0x167c) & 4) != 0)) &&
     ((*(char *)((((1 << (*(byte *)(iVar3 + 0x68) & 0x1f)) *
                   (((DAT_00603e44 - *(int *)(param_2 + 0xd8)) - param_4) + -1) -
                  *(int *)(param_2 + 0xd4)) - param_3) + *(int *)(iVar3 + 0x60) + -1 + DAT_00603e40)
       == '\0' && ((*(uint *)(param_2 + 0x204) & 0x400000) == 0)))) {
    iVar9 = 1;
  }
  if ((((byte)DAT_00603e48 & 1) != 0) &&
     (uVar8 = *(int *)(param_2 + 0x228) + 1, *(uint *)(param_2 + 0x228) = uVar8,
     DAT_0053fc48 < uVar8)) {
    sbi_flags(param_2 + 0x204,0x200000);
    if ((*(code **)(param_2 + 0x230) != (code *)0x0) && (*(int *)(param_2 + 0x22c) == 0)) {
      (**(code **)(param_2 + 0x230))(*(undefined4 *)(param_2 + 0x234));
      *(undefined4 *)(param_2 + 0x22c) = 1;
    }
  }
  if (*(int *)(param_2 + 0x1f8) != 1) {
    return;
  }
  *(int *)(param_2 + 0x1f8) = iVar9;
  if (iVar9 != 2) {
    return;
  }
  if (((byte)DAT_00603e48 & 1) != 0) {
    puVar1 = (uint *)(param_2 + 0x204);
    sbi_flags(puVar1,0x10000);
    if ((*puVar1 & 0x100000) != 0) {
      clear_flags(puVar1,0x10000);
      iVar3 = *(int *)(param_2 + 0x1fc);
      if ((iVar3 == 4) && ((*puVar1 & 0x1000) != 0)) {
        return;
      }
      *(undefined4 *)(param_2 + 0x1f8) = 4;
      if (iVar3 == 4) {
        uVar7 = *(undefined4 *)(param_2 + 0x20c);
      }
      else {
        uVar7 = *(undefined4 *)(param_2 + 0x208);
      }
      *(undefined4 *)(param_2 + 0xdc) = uVar7;
      if (iVar3 == 4) {
        *(undefined4 *)(param_2 + 0x210) = 1;
      }
      else {
        FUN_00440460(param_1,param_2 + 0xe0);
      }
    }
    if (((byte)DAT_00603e48 & 1) != 0) goto LAB_0043c708;
  }
  if ((*(uint *)(param_2 + 0x204) & 0x10000) != 0) {
    clear_flags((uint *)(param_2 + 0x204),0x10000);
    iVar3 = *(int *)(param_2 + 0x1fc);
    if ((iVar3 == 4) && ((*(uint *)(param_2 + 0x204) & 0x1000) != 0)) {
      return;
    }
    *(undefined4 *)(param_2 + 0x1f8) = 4;
    if (iVar3 == 4) {
      uVar7 = *(undefined4 *)(param_2 + 0x20c);
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x208);
    }
    *(undefined4 *)(param_2 + 0xdc) = uVar7;
    if (iVar3 == 4) {
      *(undefined4 *)(param_2 + 0x210) = 1;
    }
    else {
      FUN_00440460(param_1,param_2 + 0xe0);
    }
  }
LAB_0043c708:
  if ((*(int *)(param_2 + 0x1f8) == 4) && ((*(uint *)(param_2 + 0x204) & 0x2000) != 0)) {
    FUN_0043c1a0(param_2);
  }
  return;
}

