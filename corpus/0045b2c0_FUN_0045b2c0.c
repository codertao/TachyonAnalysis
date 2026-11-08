
void FUN_0045b2c0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 0;
  if (*param_2 != 0) {
    pbVar3 = (byte *)(param_2[1] + 0x34);
    do {
      iVar2 = *(int *)(pbVar3 + -4);
      if ((iVar2 != 0) && ((*pbVar3 & 0x10) == 0)) {
        clr_bytes(iVar2 + 0xa0,0xc);
        clr_bytes(iVar2 + 0xac,0xc);
      }
      uVar1 = uVar1 + 1;
      pbVar3 = pbVar3 + 100;
    } while (uVar1 < *param_2);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      FUN_0045afa0(param_2,iVar2,param_1);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}

