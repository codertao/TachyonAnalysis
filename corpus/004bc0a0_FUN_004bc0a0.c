
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc0a0(uint param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 0x17;
  fVar1 = (float)(param_1 & 0x7fffff) * _DAT_0055f234;
  fVar2 = _DAT_0052e59c - fVar1;
  *param_2 = fVar1 * (float)(&DAT_006af804)[uVar3] + fVar2 * (float)(&DAT_006af800)[uVar3];
  *param_3 = fVar2 * *(float *)(PTR_DAT_0055f230 + uVar3 * 4) +
             fVar1 * *(float *)(PTR_DAT_0055f230 + uVar3 * 4 + 4);
  return;
}

