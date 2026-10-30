
void FUN_00421f43(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 int param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0041b8b0();
  *(undefined4 *)(unaff_ESI + 0x58) = param_4;
  *(int *)(unaff_ESI + 0xc4) = unaff_EDI;
  *(code **)(unaff_ESI + 0x70) = FUN_00421230;
  *(int *)(unaff_ESI + 0x5c) = unaff_EDI;
  piVar1 = (int *)(unaff_ESI + 0x34);
  *piVar1 = *param_3;
  *(int *)(unaff_ESI + 0x38) = param_3[1];
  *(int *)(unaff_ESI + 0x3c) = param_3[2];
  *(undefined4 *)(unaff_ESI + 0x1c) = param_7;
  *(undefined4 *)(unaff_ESI + 0x6c) = param_8;
  *(code **)(unaff_ESI + 0x68) = FUN_00421370;
  *(undefined4 *)(unaff_ESI + 0x18) = 0x10;
  *(short *)(unaff_ESI + 0x30) = (short)unaff_EDI;
  *(undefined4 *)(unaff_ESI + 0xd4) = param_9;
  *(int *)(unaff_ESI + 0xd8) = *param_5;
  *(int *)(unaff_ESI + 0xdc) = param_5[1];
  *(int *)(unaff_ESI + 0xe0) = param_5[2];
  *(code **)(unaff_ESI + 0x80) = FUN_00421dc0;
  *(undefined1 **)(unaff_ESI + 0x88) = &LAB_00421e10;
  *(undefined4 *)(unaff_ESI + 0xbc) = param_6;
  uVar2 = FUN_0048e350();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0048e350();
    iVar3 = (uVar2 & 0x1fffff) - 0x100000;
    *(int *)(unaff_ESI + 0xe4) = iVar3;
    if (iVar3 < unaff_EDI) {
      if (-0x80000 < iVar3) {
        *(undefined4 *)(unaff_ESI + 0xe4) = 0xfff80000;
      }
    }
    else if (iVar3 < 0x80000) {
      *(undefined4 *)(unaff_ESI + 0xe4) = 0x80000;
    }
    *(int *)(unaff_ESI + 0xe8) = unaff_EDI;
  }
  else {
    uVar2 = FUN_0048e350();
    iVar3 = (uVar2 & 0x1fffff) - 0x100000;
    *(int *)(unaff_ESI + 0xe8) = iVar3;
    if (iVar3 < unaff_EDI) {
      if (-0x80000 < iVar3) {
        *(undefined4 *)(unaff_ESI + 0xe8) = 0xfff80000;
        *(int *)(unaff_ESI + 0xe4) = unaff_EDI;
        goto LAB_00422079;
      }
    }
    else if (iVar3 < 0x80000) {
      *(undefined4 *)(unaff_ESI + 0xe8) = 0x80000;
    }
    *(int *)(unaff_ESI + 0xe4) = unaff_EDI;
  }
LAB_00422079:
  *(int *)(unaff_ESI + 0x4c) = unaff_EDI;
  *(int *)(unaff_ESI + 0x50) = unaff_EDI;
  uVar2 = FUN_0048e350();
  *(uint *)(unaff_ESI + 0x54) = uVar2 & 0x1ffffff;
  *(int *)(unaff_ESI + 0xf8) = *piVar1;
  *(undefined4 *)(unaff_ESI + 0xfc) = *(undefined4 *)(unaff_ESI + 0x38);
  *(undefined4 *)(unaff_ESI + 0x100) = *(undefined4 *)(unaff_ESI + 0x3c);
  *(int *)(unaff_ESI + 0xf4) = DAT_00562b1c;
  DAT_00562b1c = DAT_00562b1c + 1;
  if (*(int *)(unaff_ESI + 0xbc) == unaff_EDI) {
    *(int *)(unaff_ESI + 0x9c) = unaff_EDI;
    *(int *)(unaff_ESI + 0x104) = unaff_EDI;
  }
  else {
    FUN_0045d200();
    FUN_00421e40();
  }
  if (unaff_EDI < param_10) {
    *piVar1 = *piVar1 + *(int *)(unaff_ESI + 0xd8) * param_10;
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0xdc) * param_10;
    *(int *)(unaff_ESI + 0x3c) = *(int *)(unaff_ESI + 0x3c) + *(int *)(unaff_ESI + 0xe0) * param_10;
  }
  return;
}

