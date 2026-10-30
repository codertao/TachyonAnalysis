
void FUN_004afbd0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x4c) + param_1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_1;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_1;
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_1;
  DAT_006140c0 = DAT_006140c0 + *(int *)(param_1 + 0x34);
  if (DAT_00668f2c < DAT_006140c0) {
    FUN_004afac0(DAT_006140c0);
  }
  uVar5 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar1 = (int *)(iVar2 + 0xc);
    do {
      piVar1[-1] = piVar1[-1] + *(int *)(param_1 + 0x48);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x48);
      piVar1[1] = piVar1[1] + *(int *)(param_1 + 0x48);
      piVar1[2] = piVar1[2] + *(int *)(param_1 + 0x50);
      piVar1[3] = piVar1[3] + *(int *)(param_1 + 0x50);
      piVar1[4] = piVar1[4] + *(int *)(param_1 + 0x50);
      piVar1[-2] = piVar1[-2] + *(int *)(param_1 + 0x44);
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 8;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x48) + 4);
    do {
      iVar2 = piVar1[1];
      piVar1[1] = -*piVar1;
      *piVar1 = iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0xb;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x50) + 4);
    do {
      iVar2 = piVar1[1];
      piVar1[1] = -*piVar1;
      *piVar1 = iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x38));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x54) + 4);
    do {
      iVar2 = piVar1[1];
      piVar1[1] = -*piVar1;
      *piVar1 = iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar3 < *(uint *)(param_1 + 0x3c));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x58) + 8);
    do {
      iVar2 = piVar1[-1];
      piVar1[-1] = *piVar1;
      *piVar1 = -iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x40));
  }
  if (DAT_0062c124 != 0) {
    DAT_0062c0f0 = 0;
    iVar2 = *(int *)(param_1 + 0x44);
    DAT_00668f6c = DAT_00668f6c + *(int *)(param_1 + 0x2c);
    if (DAT_00668f70 == (undefined4 *)0x0) {
      DAT_00668f74 = (undefined4 *)FUN_0049c5c0(DAT_00668f6c * 4);
      DAT_00668f70 = DAT_00668f74;
    }
    else {
      iVar4 = (int)DAT_00668f74 - (int)DAT_00668f70;
      DAT_00668f70 = (undefined4 *)FUN_0049c740(DAT_00668f70,DAT_00668f6c * 4);
      DAT_00668f74 = (undefined4 *)((int)DAT_00668f70 + iVar4);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        if (*(char *)(iVar2 + 0xf) == -1) {
          *(undefined1 *)(iVar2 + 0xf) = 0xfe;
        }
        FUN_004afaa0(iVar2);
        *DAT_00668f74 = *(undefined4 *)(iVar2 + 0x10);
        DAT_00668f74 = DAT_00668f74 + 1;
        uVar5 = uVar5 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (uVar5 < *(uint *)(param_1 + 0x2c));
    }
    FUN_004afb60(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x2c));
  }
  return;
}

