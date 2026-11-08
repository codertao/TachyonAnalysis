
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d030(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_2 + 0xfc);
  iVar2 = *(int *)(param_1 + 0xfc);
  if (iVar1 < iVar2) {
    fVar3 = (_DAT_0052e59c - (float)(iVar2 - iVar1) * _DAT_0052e5a0) * (float)GLBL_spacesav[0x6e];
    if (fVar3 < _DAT_0052e598) {
      fVar3 = _DAT_0052e598;
    }
  }
  else {
    fVar3 = ((float)(iVar1 - iVar2) * _DAT_0052e594 + _DAT_0052e59c) * (float)GLBL_spacesav[0x6e];
  }
  local_8 = (int)(longlong)ROUND(fVar3);
  FUN_0040cff0(param_1,local_8 * 10);
  FUN_0040cf90(param_1,local_8);
  return;
}

