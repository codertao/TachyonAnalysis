
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b800(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_18 [24];
  
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    return;
  }
  if ((param_1[8] & 0x2000U) == 0) {
    if ((param_1[8] & 0x4000U) != 0) {
      uVar3 = 0x3c;
      goto LAB_0045b83f;
    }
  }
  else {
    uVar3 = 0xf1;
LAB_0045b83f:
    FUN_004107c0(uVar3,0);
  }
  if ((param_1[8] & 0x800U) != 0) {
    DAT_005b9698 = param_1[0x16];
  }
  if ((param_1[8] & 0x1000U) != 0) {
    DAT_005b9694 = param_1[0x17];
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      *DAT_005b95e0 = 0;
    }
    else if (*(int *)(iVar1 + 0x30) != 0) {
      *(int *)(param_2 + 0x144) = *(int *)(iVar1 + 0x30);
      _DAT_0058f1c8 = param_1[7];
      *DAT_005b95e0 = *(int *)(param_1[7] + 0x30);
    }
  }
  iVar1 = param_1[6];
  if ((iVar1 == 0) || (iVar1 == -1)) {
    *(undefined4 *)(param_2 + 0x148) = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) goto LAB_0045b8cf;
    *(int *)(param_2 + 0x148) = iVar1;
  }
  FUN_00410200(iVar1);
LAB_0045b8cf:
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if (*DAT_005b95e0 == 0) {
      DAT_005b9600 = param_1[0xc];
      DAT_005b9604 = param_1[0xd];
      DAT_005b9608 = param_1[0xe];
    }
    else {
      FUN_0045b7e0(param_1[0xf],param_1 + 0x10);
    }
    if (DAT_005b95e0[1] == 0) {
      DAT_005b95e8 = param_1[9];
      DAT_005b95ec = param_1[10];
      DAT_005b95f0 = param_1[0xb];
    }
    else {
      FUN_0040fed0(DAT_005b95e0[1],0);
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
    FUN_0048e380(param_2 + 0x54,0xc);
    FUN_0048e380(&DAT_005b95f4,0xc);
    FUN_0048e380(&DAT_005b9688,0xc);
  }
  if (*param_1 != 0) {
    if ((param_1[8] & 0x400U) != 0) {
      *(int *)(param_2 + 0x50) = (param_1[2] - DAT_005b9644) / *param_1;
      iVar1 = param_1[3] * 0x80 + DAT_005b9654 * -0x80;
      *(int *)(param_2 + 0x54) = iVar1;
      *(int *)(param_2 + 0x54) = iVar1 / *param_1 >> 7;
      iVar2 = param_1[4] * 0x80 + DAT_005b9658 * -0x80;
      *(int *)(param_2 + 0x58) = iVar2;
      iVar1 = *param_1;
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(int *)(param_2 + 0x58) = iVar2 / iVar1 >> 7;
    }
    if ((param_1[8] & 0x200U) != 0) {
      DAT_005b9688 = (param_1[0x13] - DAT_005b9600) / *param_1;
      DAT_005b968c = (param_1[0x14] - DAT_005b9604) / *param_1;
      DAT_005b9690 = (param_1[0x15] - DAT_005b9608) / *param_1;
    }
    if ((param_1[8] & 0x100U) != 0) {
      iVar1 = param_1[3] * 0x80 + DAT_005b95e8 * -0x80;
      *(int *)(param_2 + 0x60) = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 7) / (longlong)*param_1);
      iVar1 = param_1[4] * 0x80 + DAT_005b95ec * -0x80;
      *(int *)(param_2 + 100) = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 7) / (longlong)*param_1);
      iVar1 = param_1[5] * 0x80 + DAT_005b95f0 * -0x80;
      *(int *)(param_2 + 0x68) = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 7) / (longlong)*param_1);
    }
    if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
      FUN_004b1bb0(local_18,&DAT_005b95e8);
      DAT_005b9688 = param_1[2] / *param_1;
      DAT_005b968c = 0;
      DAT_005b9690 = 0;
      FUN_004b24d0(&DAT_005b9688,&DAT_005b9688);
    }
    if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
      FUN_004b1bb0(local_18,&DAT_005b95e8);
      DAT_005b9688 = 0;
      DAT_005b968c = 0;
      DAT_005b9690 = param_1[2] / *param_1;
      FUN_004b24d0(&DAT_005b9688,&DAT_005b9688);
    }
    if ((*(byte *)(param_1 + 8) & 0x80) != 0) {
      FUN_004b1bb0(local_18,&DAT_005b95e8);
      DAT_005b9688 = 0;
      DAT_005b968c = param_1[2] / *param_1;
      DAT_005b9690 = 0;
      FUN_004b24d0(&DAT_005b9688,&DAT_005b9688);
    }
  }
  return;
}

