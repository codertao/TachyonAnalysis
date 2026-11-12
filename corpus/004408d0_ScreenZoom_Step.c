
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ScreenZoom_Step(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float10 fVar12;
  ulonglong local_8;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x7c) != 0)) && (*(int *)(param_1 + 0x80) == 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + _DAT_0052e594;
      *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + _DAT_0052e594;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + _DAT_0052e594;
    }
    fVar4 = (float)*(uint *)(param_1 + 0x6c) + *(float *)(param_1 + 0x70) +
            *(float *)(param_1 + 0x74);
    local_8._0_4_ = (uint)(longlong)ROUND(fVar4);
    fVar4 = fVar4 - (float)(int)(uint)local_8;
    *(uint *)(param_1 + 0x6c) = (uint)local_8;
    *(float *)(param_1 + 0x74) = fVar4;
    if (0xff < (uint)local_8) {
      *(undefined4 *)(param_1 + 0x6c) = 0xff;
    }
    if (*(uint *)(param_1 + 0x6c) < 10) {
      *(undefined4 *)(param_1 + 0x6c) = 10;
    }
    fVar9 = ((float)*(uint *)(param_1 + 0x14) - *(float *)(param_1 + 0x44)) +
            *(float *)(param_1 + 0x1c);
    fVar5 = ((float)*(uint *)(param_1 + 0x18) - *(float *)(param_1 + 0x48)) +
            *(float *)(param_1 + 0x20);
    local_8._0_4_ = (uint)(longlong)ROUND(fVar9);
    iVar10 = (uint)local_8;
    *(uint *)(param_1 + 0x14) = (uint)local_8;
    uVar1 = (ulonglong)ROUND(fVar5);
    local_8._0_4_ = (uint)uVar1;
    *(uint *)(param_1 + 0x18) = (uint)local_8;
    fVar9 = fVar9 - (float)iVar10;
    *(float *)(param_1 + 0x1c) = fVar9;
    fVar5 = fVar5 - (float)(uVar1 & 0xffffffff);
    *(float *)(param_1 + 0x20) = fVar5;
    fVar6 = (float)*(uint *)(param_1 + 0x54) + *(float *)(param_1 + 0x4c) +
            *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x44);
    fVar7 = (float)*(uint *)(param_1 + 0x58) + *(float *)(param_1 + 0x50) +
            *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x38);
    uVar1 = (ulonglong)ROUND(fVar6);
    local_8._0_4_ = (uint)uVar1;
    *(uint *)(param_1 + 0x54) = (uint)local_8;
    uVar2 = (ulonglong)ROUND(fVar7);
    local_8._0_4_ = (uint)uVar2;
    uVar11 = (uint)local_8;
    local_8 = uVar1 & 0xffffffff;
    fVar8 = (float)local_8;
    *(undefined4 *)(param_1 + 0x58) = uVar11;
    local_8 = uVar2 & 0xffffffff;
    *(float *)(param_1 + 0x34) = fVar6 - fVar8;
    fVar12 = (float10)local_8;
    *(float *)(param_1 + 0x38) = (float)((float10)fVar7 - fVar12);
    if (*(int *)(param_1 + 0x88) == 0) {
      local_8 = (ulonglong)*(uint *)(param_1 + 0x5c);
      uVar3 = *(uint *)(param_1 + 0x60);
      *(float *)(param_1 + 0x3c) = fVar8 / (float)local_8;
    }
    else {
      local_8 = (ulonglong)*(uint *)(param_1 + 100);
      uVar3 = *(uint *)(param_1 + 0x68);
      *(float *)(param_1 + 0x3c) = fVar8 / (float)local_8;
    }
    *(float *)(param_1 + 0x40) = (float)(fVar12 / (float10)uVar3);
    if (*(int *)(param_1 + 0x30) == 0) {
      fVar4 = fVar4 + _DAT_0052e594;
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      *(float *)(param_1 + 0x74) = fVar4;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(float *)(param_1 + 0x1c) = fVar9 + _DAT_0052e594;
      *(float *)(param_1 + 0x20) = fVar5 + _DAT_0052e594;
      return;
    }
  }
  return;
}

