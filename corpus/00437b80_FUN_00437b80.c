
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437b80(void)

{
  ulonglong uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = 0;
  do {
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 + 1;
    fVar4 = (float10)_DAT_0052e910;
    fVar3 = (float10)fcos((float10)uVar1 * fVar4);
    *(float *)(uVar2 * 4 + 0x5a4c7c) = (float)fVar3;
    fVar4 = (float10)fsin((float10)uVar1 * fVar4);
    *(float *)(uVar2 * 4 + 0x5a431c) = (float)fVar4;
  } while ((int)uVar2 < 0x200);
  return;
}

