
void FUN_004aeea0(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)((uint)*param_3 + (uint)*param_2 * 2 + (uint)*param_1) >> 2;
  iVar2 = ((int)(((uint)*param_1 - iVar1) * DAT_00604104) >> 7) + iVar1;
  iVar3 = ((int)(((uint)*param_2 - iVar1) * DAT_00604104) >> 7) + iVar1;
  iVar1 = ((int)(((uint)*param_3 - iVar1) * DAT_00604104) >> 7) + iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = (&DAT_00604120)[iVar2];
  *param_2 = (&DAT_00604220)[iVar3];
  *param_3 = (&DAT_00604320)[iVar1];
  return;
}

