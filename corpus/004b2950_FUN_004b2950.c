
void FUN_004b2950(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1[0x10] != 0) && (iVar1 = *(int *)(param_1[0x10] + 0x4c), iVar1 != 0)) &&
     (param_2 < *(uint *)(iVar1 + 0x10))) {
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x400;
    iVar1 = *(int *)(iVar1 + 0x14) + param_2 * 0x74;
    if (*(int *)(iVar1 + 8) != 0) {
      *param_1 = uVar2 | 0xc00;
    }
    if ((*(byte *)(iVar1 + 0x20) & 1) != 0) {
      *param_1 = *param_1 | 0x80;
      param_1[5] = 0xff;
    }
    if ((*(uint *)(iVar1 + 0x20) & 2) != 0) {
      *param_1 = *param_1 | 0x10;
      param_1[1] = *(uint *)(iVar1 + 0x3c);
      return;
    }
    if ((*(uint *)(iVar1 + 0x20) & 0xfc) != 0) {
      *param_1 = *param_1 | 0x210;
      param_1[1] = 0x10000;
      param_1[2] = 0x10000;
      param_1[3] = 0x10000;
      if ((*(byte *)(iVar1 + 0x20) & 4) != 0) {
        param_1[1] = *(uint *)(iVar1 + 0x3c);
      }
      if ((*(byte *)(iVar1 + 0x20) & 8) != 0) {
        param_1[2] = *(uint *)(iVar1 + 0x50);
      }
      if ((*(byte *)(iVar1 + 0x20) & 0x10) != 0) {
        param_1[3] = *(uint *)(iVar1 + 100);
      }
      uVar2 = *(uint *)(iVar1 + 0x20);
      if ((uVar2 & 0x20) != 0) {
        uVar2 = *(uint *)(iVar1 + 0x3c);
        param_1[1] = uVar2;
        param_1[2] = uVar2;
        return;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar2 = *(uint *)(iVar1 + 0x50);
        param_1[2] = uVar2;
        param_1[3] = uVar2;
        return;
      }
      if ((uVar2 & 0x80) != 0) {
        uVar2 = *(uint *)(iVar1 + 100);
        param_1[3] = uVar2;
        param_1[1] = uVar2;
      }
    }
  }
  return;
}

