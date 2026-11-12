
/* sweep: guess */

void ShipReplica_UpdateAlpha(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0xc1) == -1) {
    iVar3 = 0xff;
  }
  else {
    uVar2 = (int)*(char *)(param_1 + 0xc1) << 3;
    uVar4 = (int)uVar2 >> 0x1f;
    iVar3 = (int)(((uVar2 ^ uVar4) - uVar4) * 0x82) >> 10;
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  iVar3 = iVar3 - iVar1;
  if (0x30 < iVar3) {
    *(int *)(param_1 + 0xd4) = iVar1 + 0x30;
    return;
  }
  if (iVar3 < -0x30) {
    iVar3 = -0x30;
  }
  *(int *)(param_1 + 0xd4) = iVar1 + iVar3;
  return;
}

