
void FUN_004bbfc0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)*(double *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x94) = 0x49c80000;
  *(float *)(param_1 + 0x38) = (float)fVar1;
  fVar1 = (float10)fsin((float10)*(double *)(param_1 + 0x18));
  *(float *)(param_1 + 0x40) = (float)fVar1;
  fVar1 = (float10)fcos((float10)*(double *)(param_1 + 0x20));
  *(float *)(param_1 + 0x48) = (float)-fVar1;
  fVar1 = (float10)fsin((float10)*(double *)(param_1 + 0x20));
  *(float *)(param_1 + 0x50) = (float)fVar1;
  fVar1 = (float10)fcos((float10)*(double *)(param_1 + 0x28));
  *(float *)(param_1 + 0x5c) = (float)-fVar1;
  fVar1 = (float10)fsin((float10)*(double *)(param_1 + 0x28));
  *(float *)(param_1 + 0x60) = (float)fVar1;
  fVar1 = (float10)fcos((float10)*(double *)(param_1 + 0x30));
  *(float *)(param_1 + 0x6c) = (float)fVar1;
  fVar1 = (float10)fsin((float10)*(double *)(param_1 + 0x30));
  *(float *)(param_1 + 0x70) = (float)fVar1;
  return;
}

