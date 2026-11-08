
void FUN_004093c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = DAT_005b9804;
  if (DAT_005b9800 != 0) {
    while (iVar2 = str_cmp(iVar3,param_2), iVar2 != 0) {
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x44;
      if (DAT_005b9800 <= uVar4) {
        return;
      }
    }
    puVar1 = *(undefined4 **)(iVar3 + 0x40);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
  }
  return;
}

