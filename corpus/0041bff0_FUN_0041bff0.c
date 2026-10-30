
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bff0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_8;
  
  fVar3 = (float10)(DAT_005b95ec >> 0x10 & 0x1ff) * (float10)_DAT_0052e6a8 * (float10)_DAT_0052e6a0;
  fVar4 = (float10)fcos(fVar3);
  fVar5 = (float10)(DAT_005b95e8 >> 0x10 & 0x1ff) * (float10)_DAT_0052e6a8 * (float10)_DAT_0052e6a0;
  fVar6 = (float10)fsin(fVar5);
  local_8 = (int)(longlong)ROUND(fVar6 * (float10)(double)fVar4 * (float10)_DAT_0052e698);
  iVar1 = DAT_005b9600 + local_8;
  fVar3 = (float10)fsin(fVar3);
  local_8 = (int)(longlong)ROUND(fVar3 * (float10)_DAT_0052e698);
  iVar2 = DAT_005b9604 + local_8;
  fVar3 = (float10)fcos((float10)(double)fVar5);
  local_8 = (int)(longlong)ROUND(fVar3 * (float10)(double)fVar4 * (float10)_DAT_0052e698);
  DAT_005b2808 = iVar1 + -0x80000;
  DAT_005b280c = iVar2 + -0x80000;
  DAT_005b2810 = DAT_005b9608 + local_8 + -0x80000;
  _DAT_005b2814 = iVar1 + 0x80000;
  _DAT_005b2818 = iVar2 + 0x80000;
  _DAT_005b281c = DAT_005b9608 + local_8 + 0x80000;
  return;
}

